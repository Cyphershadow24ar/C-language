//WAP to create, declare, and initialize structure.
#include <stdio.h>

// Define the structure
struct Person {
    char name[50];
    int age;
    float height;
};

int main() {
    // Declare and initialize a structure variable
    struct Person person1 = {"Aniket Raj", 18, 5.11};

    // Display information
    printf("Person Information:\n");
    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
    printf("Height: %.2f\n", person1.height);

    return 0;
}
