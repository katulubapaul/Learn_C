#include <stdio.h>
int main() {
    int amount = 50000;
    int withdrawal;
    
    printf("Enter the amount you want to withdraw:\n");
    scanf("%d", &withdrawal);

    if( withdrawal <= amount ){
        amount = amount - withdrawal;
        printf("Your account balance is now %d", amount);
    }else{
        printf("Insufficient balance!");
    }


}