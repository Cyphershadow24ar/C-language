//WAP to demonstrate an example of the nested structure.
#include<stdio.h>

struct address{
    char state[50];
    char city [50];
    int pincode;
};

struct student {
    char name[50];
    int rollNumber;
    struct address address;
};

int main(){
    struct student student1;
     printf("Enter student name: ");
     scanf("%s", student1.name );

     printf("Enter student roll number: ");
     scanf("%d", &student1.rollNumber);

     printf("Enter student address:\n");

     printf("State: ");
     scanf("%s", student1.address.state);

     printf("City: ");
     scanf("%s", student1.address.city);

     printf("Pin code: ");
     scanf("%d", &student1.address.pincode);

     printf("\nStudent details:\n");
     printf("Name: %s\n", student1.name);
     printf("Roll number: %d\n", student1.rollNumber);
     printf("Address:\n");
     printf("State: %s\n", student1.address.state);
     printf("City: %s\n",student1.address.city);
     printf("Pin code: %d\n", student1.address.pincode);

  return 0;
}