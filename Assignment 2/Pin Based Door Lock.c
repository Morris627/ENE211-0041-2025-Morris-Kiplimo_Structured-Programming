#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    int correctpin=9999;
    int userpin;
    int count=0;
    int choice;
    do{

    //prompt & capture pin
    printf("Enter your PIN:");
    scanf("%d", &userpin );

    if (userpin==correctpin){
    printf("Access Granted\n");
    }
    else if (userpin<1000 || userpin>9999){
        printf("Pin must be four digits\n");

    }
    else{
        printf("Access Denied\n");
        count++;
        if (count == 3){
           printf("\n System Locked!Wait for 5 seconds...\n");
        for(int n=5; n>=0; n--){
            printf("%d\n", n);
            sleep(1);
            }
    printf("You can try again now\n\n");
    count=0;
        }
        else{
            printf("Attempts remaining:%d\n\n", 3-count);
        }

    }
    if (userpin==correctpin){
    printf("\nDevice Menu:\n");
    printf("1.Open door\n");
    printf("2.Change Username\n");
    printf("3.Change PIN\n");
    printf("4.Exit\n");
    printf("Choose an option\n");
    scanf("%d", &choice);

    switch (choice){
        case 1:{printf("Access Granted. Door unlocked\n");}
        break;
        case 2:{printf("Change username feature coming soon\n");}
        break;
        case 3:{printf("Change PIN feature coming soon\n");}
        break;
        case 4:{printf("Exiting System\n");}
        break;
        default:{printf("Invalid option!Please try again.\n");}
        break;
         }
    }

    }
    while (userpin!=correctpin && count<3);



   return 0;
}
