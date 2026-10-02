#include <stdio.h>
#include <stdlib.h>

int main()
{
 int N;
 printf("Enter the number of students:\n");
 if (scanf("%d", &N) !=1 || N<=0){
    printf("Invalid number of students.\n");
    return 1;
 }
for(int i=0; i<N; i++){
    int Registration_number;
    char name[50];
    float marks;
    char grade;
    printf("\nEnter Registration Number\n");
    scanf("%d", &Registration_number);
    printf("Enter Name\n");
    scanf("%s", name);
    printf("Enter Marks\n");
    scanf("%f", &marks);
    switch ((int)marks/ 10){
    case 10:
    case 9:
    case 8:
    case 7: grade='A';
    break;
    case 6: grade='B';
    break;
    case 5: grade='C';
    break;
    case 4: grade='D';
    break;
    default : grade='F';
    break;
    }
    printf("Student Information:\n");
    printf("Registration number: %d\n", Registration_number);
    printf("Name: %s \n", name);
    printf("Marks: %f \n", marks);
    printf("Grade: %c \n", grade);
    switch ((int)marks>=40){
        case 1: printf("Status: Passed\n\n");
        break;
        case 0: printf("Status: Failed\n\n");
        break;

    }
}
    return 0;
}
