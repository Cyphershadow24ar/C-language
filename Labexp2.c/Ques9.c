#include <stdio.h>
// WAP of simple Calculator using switch Statement.
int main()
{
    int num1, num2, choice;
    printf("Enter an Two number:\n");
    scanf("%d%d", &num1, &num2);
    printf("1 => Addition\n");
    printf("2 => Subraction\n");
    printf("3 => Multiplication\n");
    printf("4 => Division\n");
    printf("Enter your choice\n");
    scanf("%d", &choice); 

    switch (choice)
    {
    case 1:
        printf("Sum is %d\n", num1 + num2);
        break;
    case 2:
        printf("Diff is %d\n", num1 - num2);
        break;
    case 3:
        printf("Product is %d\n", num1 * num2);
        break;
    case 4:
        printf("Division is %d\n", num1 / num2);
        break;
    // Operator doesn't match.
    default:
        printf("Invaild Choice....\n");
    }
    return 0;
}