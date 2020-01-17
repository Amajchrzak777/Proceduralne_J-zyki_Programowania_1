//Please write a little program in C that reads two numbers from the
//keyboard and prints the larger number to the screen. If the two numbers are equal,
//it should print: "The two numbers are equal." to the screen.


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;

    printf("Enter the fisrt number: ");
    scanf("%d",&x);
    printf("Enter the second number: ");
    scanf("%d",&y);

    if(x>y){
        printf("The larger number equal: %d",x);
    }else if(y>x){
        printf("The larger number equal: %d",y);
    }else{
        printf("The two numbers are equal.");
    }
    return 0;
}
