//WAP to demonstrate an example of the structure of an array.
#include<stdio.h>
struct student{
    char firstName[50];
    int roll;
    float marks;
} s[3];

int main (){
    int i;
    printf("Enter information of students:\n");
    
    for(i=0; i<2; ++i){
        printf("Enter student %d roll number: ", i + 1);
        scanf("%d", &s[i].roll);
        printf("Enter first name: ");
        scanf("%s",s[i].firstName);
        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    
    }
    return 0;
}