// WAP to store information of 10 students using structures.
#include <stdio.h>
// Structure to store student information
struct student {
  char name[20];
  int roll_no;
  int age;
  float marks;
};

int main() {
  // Create an array of 10 student structures
  struct student students[10];

  // Get information of 10 students from the user
  for (int i = 0; i < 10; i++) {
    printf("Enter the name of student %d: ", i + 1);
    scanf("%s", students[i].name);

    printf("Enter the roll number of student %d: ", i + 1);
    scanf("%d", &students[i].roll_no);

    printf("Enter the age of student %d: ", i + 1);
    scanf("%d", &students[i].age);

    printf("Enter the marks of student %d: ", i + 1);
    scanf("%f", &students[i].marks);
  }
  // Display the information of 10 students
  printf("\nInformation of 10 students:\n");
  for (int i = 0; i < 10; i++) {
    printf("Name: %s\n", students[i].name);
    printf("Roll number: %d\n", students[i].roll_no);
    printf("Age: %d\n", students[i].age);
    printf("Marks: %f\n", students[i].marks);
  }

  return 0;
}