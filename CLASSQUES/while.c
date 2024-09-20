#include <stdio.h>
#include <string.h>

#define MAX_CARS 10
#define MAX_CUSTOMERS 50
#define MAX_TRANSACTIONS 100

struct Car {
    int carID;
    char model[50];
    float dailyRentalPrice;
    int isAvailable;
};

struct Customer {
    int customerID;
    char name[50];
};

struct RentalTransaction {
    int transactionID;
    int carID;
    int customerID;
    float totalPrice;
};

void initializeCars(struct Car cars[], int numCars) {
    for (int i = 0; i < numCars; ++i) {
        cars[i].carID = i + 1;
        sprintf(cars[i].model, "Car Model %d", i + 1);
        cars[i].dailyRentalPrice = 50.0 + i * 10.0;
        cars[i].isAvailable = 1;
    }
}

void displayAvailableCars(struct Car cars[], int numCars) {
    printf("\n========== Available Cars ==========\n");
    for (int i = 0; i < numCars; ++i) {
        if (cars[i].isAvailable) {
            printf("%d. %s - $%.2f per day\n", cars[i].carID, cars[i].model, cars[i].dailyRentalPrice);
        }
    }
}

int findAvailableCarIndex(struct Car cars[], int numCars) {
    for (int i = 0; i < numCars; ++i) {
        if (cars[i].isAvailable) {
            return i;
        }
    }
    return -1; // No available cars
}

void rentCar(struct Car cars[], int numCars, struct Customer customers[], int numCustomers, struct RentalTransaction transactions[], int *numTransactions) {
    displayAvailableCars(cars, numCars);

    int carIndex = findAvailableCarIndex(cars, numCars);
    if (carIndex == -1) {
        printf("\nAll cars are currently rented.\n");
        return;
    }

    int customerID;
    printf("\nEnter customer ID: ");
    scanf("%d", &customerID);

    if (customerID < 1 || customerID > numCustomers) {
        printf("\nInvalid customer ID.\n");
        return;
    }

    int transactionID = *numTransactions + 1;

    cars[carIndex].isAvailable = 0; // Mark the car as rented

    transactions[*numTransactions].transactionID = transactionID;
    transactions[*numTransactions].carID = cars[carIndex].carID;
    transactions[*numTransactions].customerID = customerID;
    transactions[*numTransactions].totalPrice = 0; // To be calculated when returning the car

    printf("\nCar rented successfully. Transaction ID: %d\n", transactionID);

    (*numTransactions)++;
}

void returnCar(struct Car cars[], int numCars, struct RentalTransaction transactions[], int numTransactions) {
    int transactionID;
    printf("\nEnter transaction ID: ");
    scanf("%d", &transactionID);

    if (transactionID < 1 || transactionID > numTransactions) {
        printf("\nInvalid transaction ID.\n");
        return;
    }

    int carID = transactions[transactionID - 1].carID;
    int carIndex = carID - 1;

    cars[carIndex].isAvailable = 1; // Mark the car as available

    // Calculate total price based on daily rental price (simplified for this example)
    int rentalDays = 3; // For example, 3 days of rental
    transactions[transactionID - 1].totalPrice = rentalDays * cars[carIndex].dailyRentalPrice;

    printf("\nCar returned successfully. Total Price: $%.2f\n", transactions[transactionID - 1].totalPrice);
}

void displayRentalHistory(struct RentalTransaction transactions[], int numTransactions) {
    printf("\n========== Rental History ==========\n");
    for (int i = 0; i < numTransactions; ++i) {
        printf("Transaction ID: %d, Car ID: %d, Customer ID: %d, Total Price: $%.2f\n",
               transactions[i].transactionID, transactions[i].carID, transactions[i].customerID, transactions[i].totalPrice);
    }
}

int main() {
    struct Car cars[MAX_CARS];
    struct Customer customers[MAX_CUSTOMERS];
    struct RentalTransaction transactions[MAX_TRANSACTIONS];

    int numCars = MAX_CARS;
    int numCustomers = MAX_CUSTOMERS;
    int numTransactions = 0;

    initializeCars(cars, numCars);

    // You can initialize customers here if needed

    int choice;

    do {
        printf("\n========== Rental Car System ==========\n");
        printf("1. Rent a Car\n");
        printf("2. Return a Car\n");
        printf("3. Display Available Cars\n");
        printf("4. Display Rental History\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                rentCar(cars, numCars, customers, numCustomers, transactions, &numTransactions);
                break;
            case 2:
                returnCar(cars, numCars, transactions, numTransactions);
                break;
            case 3:
                displayAvailableCars(cars, numCars);
                break;
            case 4:
                displayRentalHistory(transactions, numTransactions);
                break;
            case 0:
                printf("\nExiting the program.\n");
                break;
            default:
                printf("\nInvalid choice. Please try again.\n");
        }

    } while (choice != 0);

    return 0;
}
