#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int N;
    printf("Enter the number of students:\n");
    if (scanf("%d", &N) !=1 || N<=0){
        printf("Invalid number of students.\n");
    return 1;
}
for (int i=0; i<N; i++){
    char name[50];
    int registration_number;
    float marks;
    char grade;
    printf("\nEnter Registration Number\n");
    scanf("%d",&registration_number);
    printf("Enter Name:\n");
    scanf("%s", name);
    printf("Enter marks:\n");
    scanf("%f",&marks);
    if (marks>=70 && marks<=100){
        grade='A';
    }else if(marks>=60 &&marks <70) {
    grade='B';
    }else if(marks>=50 && marks<60){
    grade='C';
    }else if(marks>=40 && marks<50){
    grade='D';
    }else{
    grade='F';
    }
    printf("STUDENT INFORMATION\n");
    printf("Registration no: %d\n", registration_number);
    printf("Name: %s\n", name);
    printf("Marks: %f\n", marks);
    printf("Grade: %c\n",grade);
    if (marks>=40){
        printf("Status: Passed\n");
    }else{
    printf("Status: Failed\n");
           }
}

    return 0;
}
