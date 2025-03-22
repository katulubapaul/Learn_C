#include <stdio.h> //preprocessor directive

int main(){ // Main function
    //initial amount on the account
    int balance = 50000;
    
    //Variable to store the amaount to be withdrawn
    int withdraw;

    //Variable to store the pin of the user account
    int pin;

    // Prompt user to enter the withdraw amount
    printf("Enter the amount you want to withdraw:\n");
    scanf("%d", &withdraw);

    // Prompt user to enter the pin for the account
    printf("Enter your pin to continue:\n");
    scanf("%d", &pin);

    if (pin == 1526){
        if(balance >= withdraw){
            balance -= withdraw;
            printf("You have successfully withdrawn:%d\n", withdraw);
            printf("New balance:%d", balance);
            
        }else{
            printf("You have insufficient balance!");
        }
    }else{
        printf("Withdraw of %d ", withdraw );
        printf("was not successful, wrong pin!");   
    }
    return 0;
}