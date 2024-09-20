//WAP to read and print an employee's detail using structure.
#include <stdio.h>

struct employee {
  int id;
  char name[20];
  float salary;
};

int main() {
  struct employee e;

  printf("Enter employee id: ");
  scanf("%d", &e.id);

  printf("Enter employee name: ");
  scanf("%s", e.name);

  printf("Enter employee salary: ");
  scanf("%f", &e.salary);

  printf("Employee details:\n");
  printf("Id: %d\n", e.id);
  printf("Name: %s\n", e.name);
  printf("Salary: %f\n", e.salary);

  return 0;
}