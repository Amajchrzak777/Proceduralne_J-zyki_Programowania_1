/*
Student Adam Majchrzak
Please write a structure to manage data for particles.
The structure should contain the following information:

mass of the particle
speed of the particle (You can use one dimension.)


Please write a little program that uses your structure.

Your program should ask the user how many particles should be used.
Your program should allocate memory for all particles using malloc or calloc. Please do not forget to free the memory later.
Your program should read information for all particles from the keyboard. If the mass for one particle is smaller than 0, please read the mass again.
Your program should find the particle with the smallest momentum (p =  m * v) and should print the information to the screen.
*/

#include <stdlib.h>

#include <stdio.h>
#include <string.h>


struct data
{
float mass;
float speed;
float momentum;
};

typedef struct data data_t;

void printData(data_t* ptr)
{
printf("mass of the particle: %f\n", ptr->mass);
printf("Speed of the particle: %0.1f\n", ptr->speed);

}


void readData(data_t* ptr)
{
printf("Enter the data.\n");
printf("mass: ");
scanf("%f",&ptr->mass);
printf("speed: ");
scanf("%f",&ptr->speed);
}


int main()
{
int i;
int dim = 0;
do {
printf("How many particles should be used ?\n");
scanf("%i",&dim);
} while(dim <= 0);


data_t* myData;
myData = (data_t*) malloc(dim*sizeof(data_t));

if (myData==NULL) {
printf("Problem with memory!\n");
return EXIT_FAILURE;
}
for (i=0; i<dim; i++)
{
readData(&myData[i]);
if(myData[i].mass<0){
printf("Mass should be a positive number: ");
scanf("%f",&myData[i].mass);
}
myData[i].momentum = myData[i].mass * myData[i].speed;
}

printf("\n\n");
printf("The following the buildings:\n");
for (i=0; i<dim; i++)
{
printData(&myData[i]);
}

for (i=0; i<dim; i++)
{
myData[i].momentum = myData[i].mass*myData[i].speed;
printf("Each momentum equal: %.2f\n",myData[i].momentum);
}

float momentum_min = myData[0].momentum;
int x = 0;

for(i=0;i<dim;i++){

printf("mass: %f speed: %.2f momentum %.2f\n",myData[i].mass,myData[i].speed,myData[i].momentum);
if(myData[i].momentum < momentum_min){
momentum_min = myData[i].momentum;
x = i;
}
}
printf("Minimal momentum equal: %.2f and his side of memory is %d",momentum_min,x);

free(myData);
return EXIT_SUCCESS;
}
