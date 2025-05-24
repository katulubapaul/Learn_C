//Define a struct book with; tilt, author and price.
//program to input details and save them to a file.
//read and display the saved book details.

#include <stdio.h>// preprocessor directives.
#include <stdlib.h>

struct Books{ //defination of structure Books.
    char title[50];
    char author[25];
    float price;
};

struct Books Input[10]; // defination of the struct array to store the details.
int main(){ //entry of execution.
 
// Allowing user inputs.
printf("Enter the book title:\n");
fgets(Input[0].title, 50, stdin);
printf("Enter the book author:\n");
fgets(Input[0].author, 25, stdin);
printf("Enter the book price:\n");
scanf("%f", &Input[0].price);

// Save the data/detils provided into .txt file.
FILE *file;
file = fopen("bookdetails.txt", "a");
fprintf(file, Input[0].title);
fprintf(file, Input[0].author);
fprintf(file,"%f\n", Input[0].price);
fclose(file);
// Printing out the data written to bookdetails.txt.
file = fopen("bookdetails.txt", "r");
char BookFile[100];
    // Check and terminates when the file is not there.
if (fgets(BookFile, 100, file) == NULL){
    printf("File failed to open!");
    return 1;
}
    // Continue with file processing when it is there.
while(fgets(BookFile, 100, file)){
printf("%s", BookFile);
}
fclose(file);
return 0;
}

