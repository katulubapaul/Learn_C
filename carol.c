#include<stdio.h> //Preprocessor directive
#include <stdlib.h> //This help us to work with the exit function ( exit())
int add(void);  // Declaration of the function.
void division (void);
void subtract (int,int);
int product (int,int); // Declaration of the function.
int add (void)
{
	int num1, num2;
	puts("enter any 2 numbers..");
	scanf("%d %d",&num1, &num2);
	return(num1+num2);
}
int product(int a, int b)
{
	return(a*b);
}
void subtract (int x, int y)
{
	printf("%d minus %d is %d", x,y,(x-y));
	

}
    void division(){
	  float result;
	int num1, num2;
	puts("enter any 2 numbers ..");
	scanf("%d %d",&num1,&num2);
	result=(float)num1/(float)num2;
	printf("ln %d divided by %d is %f",num1, num2,result);
	}
	int main( ){
		int result1, result2=0, choice=0;
		puts("1=ADDITION");
		puts("2=SUBTRACTION");
		puts ("3=MULTIPLICATION");
		puts ("4=DIVISION");
		puts("5=QUIT");
		puts("makes your choice...");
		scanf("%d", &choice);
		if(choice == 1){// There was ";" instead of "{}"
		result1 = add();
		printf("The sum is %d\n ", result1);
        }else if(choice == 2){
		int num1, num2;
		printf ("enter any 2 number...\n");
		scanf("%d %d", &num1, &num2);
		subtract(num1, num2);
		}
		else if(choice == 3){
		int num1, num2;
		printf("\n enter any 2 numbers ...\n");
		scanf("%d %d" , &num1, &num2 );
        result2 = num1 * num2;
		printf("multiplication result is %d", result2);
			}
			
		    else if (choice == 4){
			division( );
		}
		    else if (choice == 5 )
		{
			puts (" still thanks");
			exit (0);
		}
		else 
		{
			puts ("wrong choice ");
			exit(-1);
			return(0);
		}
    }
