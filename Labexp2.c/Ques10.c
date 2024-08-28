#include <stdio.h>
//WAP to calculate the grade of students for the marks given below using switch statement.

int main() {
    int m;
    char grade;

    printf("Enter the marks (out of 100):\n ");
    scanf("%d", &m);
    m--;
    if (m>=-1 && m<=99)
    {
    switch (m / 10) {
        case 10:
        case 9:
            grade = 'A';
            break;
        case 8:
            grade = 'B';
            break;
        case 7:
            grade = 'C';
            break;
        case 6:
            grade = 'D';
            break;
        default:
            grade = 'F'; // Fail
    }
    printf("Grade: %c\n", grade);
    }
    else 
    printf("Enter invalid input");
    return 0;
}
