//Student Adam Majchrzak
/*
Please write a program that writes all numbers from 1 to 100.
If the number is a multiple of 3, the program should print X. ( Hint: you can use the modulo function to check, if a number is a multiple of three: if (a % 3 == 0) { ... } )
Your output should look like:
1
2
X
4
5
X
7
8
X
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
int i;
for(i=1;i<=100;i++){
if(i%3==0)
{
printf("X\n");
}
else
{
printf("%d\n",i);
}
}
return 0;
}
