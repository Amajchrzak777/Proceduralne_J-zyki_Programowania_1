/*
Student Adam Majchrzak
Please write a little program that is working with vectors.
(i) Your program should ask the user for the dimension of the vector.
(ii) If the users enters a negative number or zero, the program should ask again.
(iii) Your program should allocate dynamically memory for two vectors with the
dimension given by the user. You have to free the memory after using the vectors!
(iv) Your program should fill the first vector with random floating point numbers
between 0 and +0.5 and the second vector with random numbers between −0.5
and 0.
(v) Calculate the sum of the two vectors (This can be done for example by:
for (i=0; i<dim; i++) { x[i] += y[i]; }
(vi) Your program should write the results to the screen.
*/

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void printVector(float* a, int n)
{
      int i;
      for ( i=0; i<n; i++ )
      {
            printf("%2i:  %7.3f\n",i, a[i]);
      }
}

void printVector1(float* a, int n)
{
      int i;
      for ( i=0; i<n; i++ )
      {
            printf("%2i:  %7.3f\n",i, a[i]);
      }
}

float myRand(float x, float y)
{
      int r0 = rand();
      float r1 = ((float)r0) / ((float)RAND_MAX);
      float r2 = (y - x) * r1;
      float r3 = r2 + x;

      return r3;
}

float sum(float* a, int n)
{
      float sum = 0;
      int i;
      for ( i=0; i<n; i++ )
      {
            sum += a[i];
      }
      return sum;
}

float sum1(float* a, int n)
{
      float sum = 0;
      int i;
      for ( i=0; i<n; i++ )
      {
            sum += a[i];
      }
      return sum;
}


int main()
{
      float* vec;
      float* vec1;
    int dim;
      /* seeding the random number generator: */
      srand(time(NULL));
        vec = (int *)calloc(dim, sizeof(int));
        if(vec == NULL){
            printf("ERROR: memory allocation was not succesfull");
            return EXIT_FAILURE;
        }
        vec1 = (int *)calloc(dim, sizeof(int));
         if(vec1 == NULL){
            printf("ERROR: memory allocation was not succesfull");
            return EXIT_FAILURE;
        }
      int i;
      printf("What is dimension: ");
      scanf("%d",&dim);

      for (i = 0; i < dim; i++)
      {
            vec[i] = myRand(0,0.5);
      }
      for(i = 0; i<dim; i++){
            vec1[i] = myRand(-0.5,0);
      }
      float x=0.0;
      printf("The vector is:\n");
      printVector(vec, dim);
      printVector1(vec1, dim);

      x = sum(vec,dim)+sum1(vec1,dim);

      printf("The sum of all vectors: %.2f",x);
      free(vec1);
      return EXIT_SUCCESS;
}
