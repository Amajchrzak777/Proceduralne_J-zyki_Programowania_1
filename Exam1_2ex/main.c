/*
Student Adam Majchrzak
Please write a little program that calculates the sum of the squares ( 1*1 + 2*2 + ... + 100*100 )
for the integer numbers from 1 to 100. The program should print the sum to the screen.
*/


#include <stdio.h>
#include <stdlib.h>

int sum(int);

int main()
{
    int x,y;
    x = 0;
    y = 0;
    printf("This program prints the sum of 1..100\n");
    y = sum(x);
    printf("%d",y);
    return 0;
}

int sum(int suma){
    int i;
    suma = 0;
    for(i=1;i<=100;i++){
        suma += i*i;
    }
    return suma;
}

