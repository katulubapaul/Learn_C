#include <stdio.h>
#include <stdlib.h>

int main(){
   int random_number = 22;
   int guess;

   while ( guess != random_number ){
    printf("Guess the number between 0 to 12:\n");
    scanf("%d", guess);
    break;
   }
   printf("You win!");
    return 0;
}