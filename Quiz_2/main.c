/* Student Adam Majchrza
Please write a little function that computes the sum of the
squares ( 1*1 + 2*2 + ... + 100*100 ) for the integer numbers from 1 to 100.
The program should use your function and print the sum to the screen.
UWAGA: in this exercise you have to write a function!
*/
#include <stdlib.h>

int multi(int i,int sum,int m){
    sum = 0;
    for(i=1;i<=100;i++){
        m = i*i;
        sum += m;
    }
    return sum;
}

int main()
{
    int c,x,y,z;
    c=0;
    c=multi(x,y,z);
    printf("%d",c);

    return 0;
}
