#include <stdio.h>

int amounttowithdraw , amounttodeposit ,othertransaction,password,pin ;

int totalamount,balanceaftertransfer,transfer;

float balance = 10000; 

void transaction(){

  int choice;

printf("enter your password to enter in your account\n");

scanf("%d", &password);

printf("Enter 1 for withdraw. \n");

printf("Enter 2 for deposite. \n");

 printf( "Enter 3 for check balance. \n");

printf("Enter 4 for transfer. \n");

  scanf("%d",  &choice);
  


  switch(choice){

    case 1:

    printf("Please enter amount to withdraw: ");

    scanf("%d", &amounttowithdraw);

    if(amounttowithdraw > balance){

      printf("There is no insuffient balance in your account");

      printf("Press 1 to exit\n");

      scanf("%d", &othertransaction);

      if(othertransaction == 1){

	transaction();

      }

    } else {

      balance = balance - amounttowithdraw;

      printf("You have withdrawn %d and your new balance is %f ", amounttowithdraw, balance);

      printf("\nDo you want another transaction?\nPress 1 to proceed and 2 to exit\n");

      scanf("%d", &othertransaction);

      if(othertransaction == 1){

	transaction();

      }

    }

    break;

    case 2:

    printf("Please enter amount to deposit: ");

    scanf("%d", &amounttodeposit);

    balance = amounttodeposit + balance;

    printf("Amount deposited, new balance is: %f", balance);

      printf("\nDo you want another deposit?\nPress 1 to proceed and 2 to exit\n");

      scanf("%d", &amounttodeposit);

      if(amounttodeposit == 1){

	transaction();

      }

    break;

    case 3:

    printf("Your bank balance is: %f", balance);
  
    break;
    
    case 4:
printf("Enter amount to tranfer\n");

scanf("%d", &transfer);

float balanceaftertransfer;

balanceaftertransfer = totalamount -transfer;

printf("Net balance after transfer is %f", balanceaftertransfer);

break;

  }
 
}



int main(){

  transaction();

  return 0;

}






