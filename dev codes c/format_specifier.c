#include <stdio.h>
int main()
#define PI 3.14
{
    int a=8;
    const float b=7.333;
    printf("tab character\t\t\t my backslash\a %f",PI);//\a is for sound//
    /*PI=7.33; cannot use this since the value which has been defined is different*/
    /*printf("%f",PI);*/
    /*b=8; Wrong since b is a constant so cannot be modified*/
    /*printf("Hello World\n");
    printf("The value of a is %d and the value of b is %f\n",a,b);
    printf("%8.4f\n",b);
    printf("%-21.4f lol\n",b);*/
    }