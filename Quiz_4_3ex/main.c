/*
Student Adam Majchrzak
In this exercise we would like to calculate the electric potential energy between two
charged particles. The electric potential energy between the particles with charges q1
and q2 is given by
U = ke
q1q2
x12
,
Procedural Programming 2
where the Coulomb constant ke is

We consider only one dimension here. The distance between the two particles can be
calculated as:
Please use a struct to organize the data for your particles. The structure for the
particle should contain:
• charge (in C = Coulomb)
• and the coordinates in x-direction (in m).
Your tasks:
(i) Please implement the struct for the particle.
(ii) Please write a function to print the data of a particle.
(iii) Your program needs two particles. The input data for the particles should be read
from the keyboard.
(iv) Please calculate the Coulomb energy and print it to the screen.
Note: In three dimensions the distance between the two particles can be calculated as
the length of the vector ~r12
If you have time, you can try the three dimensional case.
*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

const float k=8.987551787 * 10e9;

typedef struct
{
    float    charge;
    float    x;
    float    y;
    float   z;
} particle_t;

void printParticle(particle_t* ptr)
{
    printf("charge: %f\n", ptr->charge);
    printf("x_coordinate: %f\n", ptr->x);
    printf("y_coordinate: %f\n", ptr->y);
    printf("z_coordinate: %f\n", ptr->z);
}

void printParticle1(particle_t second)
{
    printf("charge: %f\n",second.charge);
    printf("x_coordinate: %f\n", second.x);
    printf("y_coordinate: %f\n", second.y);
    printf("z_coordinate: %f\n", second.z);
}

int main(){
    particle_t data1, data2;
    printf("First data of participle: \n");
    printf("charge 1: ");
    scanf("%f",&data1.charge);
    printf("x1: ");
    scanf("%f",&data1.x);
    printf("y1: ");
    scanf("%f",&data1.y);
    printf("z1: ");
    scanf("%f",&data1.z);
    printf("Second data of participle: \n");
    printf("charge2: ");
    scanf("%f",&data2.charge);
    printf("x2: ");
    scanf("%f",&data2.x);
    printf("y2: ");
    scanf("%f",&data2.y);
    printf("z2: ");
    scanf("%f",&data2.z);
    float U=0,d=0;

    d = sqrt((data1.x-data2.x)*(data1.x-data2.x)+(data1.y-data2.y)*(data1.y-data2.y)+(data1.z-data2.z)*(data1.z-data2.z));

    U=k*(data1.charge * data2.charge)/d;

    printf("\nElectric potential energy equal: %.2f C", U);
    return EXIT_SUCCESS;
}
