/*
Student Adam Majchrzak
Please write a program that is doing the following:

The program should read an integer number.
If your number is negative, your program should write "Your number is negative" and should stop.
If the number is zero, your program should write "Your number is zero."
If the number is even ( 2, 4, 6, ... ), your program should write "Your number is even".
If the number is odd ( 1, 3, 5, ... ), your program should write: "Your number is odd."
*/

#include <stdio.h>
#include <stdlib.h>

void whatNumber(int);

int main()
{
int x,y;
printf("This program show as solution what number it is\n");
scanf("%d",&x);
whatNumber(x);
return 0;
}

void whatNumber(int x){
if(x<0){
printf("Your number is negative");
return;
}else if(x == 0){
printf("Your number is zero.");
}else if(x%2 == 0){
printf("Your number is even");
}else if(x%2 == 1){
printf("Your number is odd");
}
}
