/*
Student Adam Majchrzak
Please write a function that calculates the volume of a sphere.
( Please remember that the volume is v = 1.33 * pi * radius * radius * radius.)
Please write a function that calculates the surface area of the sphere.
(Please remember that the surface area is given by s = 4 * pi * radius * radius.)
Please write a program that reads the radius and uses your two functions to calculate the volume and the surface area.
The results should be printed to the screen. If the radius is negative or zero, your program should write an error message and stop.

UWAGA: You have to write your own functions
(one function for the volume and one function for the surface). Do not do everything in main().
*/

#include <stdio.h>
#include <stdlib.h>


void volumeOfSphere(float);
void areaOfSphere(float);

int main()
{
float x;
printf("This program give as a volume and are of sphere\n");
printf("Input the radius: ");
volumeOfSphere(x);
areaOfSphere(x);
return 0;
}

void volumeOfSphere(float volume){
float pi;
pi = 3.14;
float radius;
volume = 0;
scanf("%f",&radius);
if(radius<=0){
printf("Error");
return;
}else{
volume = 4*(pi*radius*radius)/3;
printf("%.2f\n",volume);
return;
}
}

void areaOfSphere(float area){
float pi;
pi = 3.14;
float radius;
area = 0;
scanf("%f",&radius);
if(radius<=0){
printf("Error");
return;
}else{
area = 4*pi*radius*radius;
printf("%.2f\n",area);
return;
}
}
