/*
Student Adam Majchrzak
Please write a little program that is working with vectors.

Your program should ask the user for the dimension of the vector.
If the users enters a negative number, the program should ask again.
Your program should allocate dynamically memory for one vector with the
dimension given by the user. You have to use malloc or calloc.
You have to free the memory after using the vector! Please use integer numbers for your vector.
Your program should fill the vector with random numbers between 1 and 3.
Your program should count how often each number occurs.
*/


#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void printVector(int* a, int n)
{
int i;
for ( i=0; i<n; i++ )
{
printf("%d: %d\n",i, a[i]);
}
}

int main()
{
int* vec;
int dim;
int number1=0;
int number2=0;
int number3=0;
srand(time(NULL));
vec = (int *)calloc(dim, sizeof(int));
if(vec == NULL){
printf("ERROR: memory allocation was not succesfull");
return EXIT_FAILURE;
}
int i;
printf("What is dimension: ");
scanf("%d",&dim);
if(dim<0){
printf("Please write positive number: ");
scanf("%d",&dim);
}
for (i = 0; i < dim; i++)
{
vec[i] = rand()%3+1;
if(vec[i]==1) number1++;
if(vec[i]==2) number2++;
if(vec[i]==3) number3++;
}

printf("The vector is:\n");
printVector(vec, dim);
printf("Number 1: %d Number 2: %d Number 3: %d",number1,number2,number3);
free(vec);
return EXIT_SUCCESS;
}
