#include <stdio.h>
#include <stdlib.h>
int balance=1000;//global so the functions can change it
int login(int p, int a){
    int u;
    printf("Enter PIN:\n");
    scanf("%d", &u);
    do{

if(u==p){
    printf("Access Granted.\n");

    return 1;
}
else{
    printf("Access Denied.\n");
    a++;

    if (a==3){
        printf("System Locked\n");
    }
    else{
        printf("Attempts remaining:%d\n", 3 - a);
        printf("Enter PIN:\n");
        scanf("%d", &u);

    }
  }
}
    while(u!=p && a<3);
    return 0;

}
void menu(int *c){
    printf("\nMenu:\n");
    printf("1. Balance inquiry.\n");
    printf("2. Deposit.\n");
    printf("3. Withdraw.\n");
    printf("4. Exit.");
    printf("\nChoose an option:\n");
    scanf("%d", c);
}
void checkBalance(){
printf("Your balance is:%d\n", balance);
}
void deposit(int amount){

if (amount>0){
    balance+= amount;
    printf("New balance is:%d\n", balance);
    }else{
    printf("Invalid amount.\n");
}
}
void withdraw(int amount){

if (amount<=0){
        printf("Invalid amount.\n");
    }else if(amount>balance){
    printf("Insufficient funds.\n");
    }else{
    balance-=amount;
    printf("New balance is:%d\n", balance);
    }
}

int main()
{
    int correctpin=8888;
    int attempt=0;
    int choice=0;
    int amount=0;

    if (!login (correctpin, attempt)){
     return 0;
    }
    do{
    menu(&choice);
      if (choice==1){
    checkBalance();
}
else if (choice==2){
    printf("\nEnter deposit amount:\n");
    scanf("%d", &amount);
     deposit(amount);


}
else if (choice==3){
    printf("\nEnter withdrawal amount:\n");
    scanf("%d", &amount);
    withdraw(amount);

  }
  else if (choice==4){
    printf("Exit.\n");
  }
  else{
    printf("Invalid Option.\n");
  }
}
    while(choice!=4);

    return 0;
}
