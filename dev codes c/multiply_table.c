# include <stdio.h>
/*
Print multiplication table of a number entered by the user in pretty form

Example:

Input
Enter the number you want multiplication table of:
6

Output:
Table of 6:
6 X 1 = 6
6 X 2 = 12
.
.
.
6 X 10 = 60
*/

int main()
{
    int a;
    printf("Enter number a\n");
    scanf("%d",&a);
    for(int i=1;i<=10;i++)
    
        printf("%d*%d=%d",a,i,a*i);
        
    /*
    printf("%d",a);
    printf("%d*1=%d\n",a,a*1);
    printf("%d*2=%d\n",a,a*2);
    printf("%d*3=%d\n",a,a*3);
    printf("%d*4=%d\n",a,a*4);
    printf("%d*5=%d\n",a,a*5);
    printf("%d*6=%d\n",a,a*6);
    printf("%d*7=%d\n",a,a*7);
    printf("%d*8=%d\n",a,a*8);
    printf("%d*9=%d\n",a,a*9);
    printf("%d*10=%d\n",a,a*10);*/
}