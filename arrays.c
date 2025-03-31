#include <stdio.h>//preprocessor directive
#include <stdlib.h>

// Arrays are used to store data items of the same data type in a contigous memory locations.
// Arrays store multiple values of the same type.
// Data items in the arrays are always indexed starting from 0
int main(){ //Main function

//Types of arrays
int numbers[7]; //Uninitialised arrays
int prime[5] = {1, 2, 3, 5, 7}; //Initialised arrays
int scores[5] = {10, 15}; //Partial initialisation (Partially initialised arrays)
int temps[] = {36.5, 37.0, 38.7, 39.8}; //Size reffered arrays

//Operations on array elements (array)
char students[50] = {"paul"};
//printf("%c", students[0]);

//Multi-dimesional arrays.
//3 x 3 matrix initialisation
int matrix[3][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9},
};

// Modifying an array
// insert 25 to replace 7
matrix[2][0] = 25;
return 0;

}