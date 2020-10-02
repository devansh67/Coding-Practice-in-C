
#include <stdio.h>

int main()
{
    printf("Hello World\n");
    int i,age;
    for (i = 0; i < 10; i++)
    {
        printf("%d\nEnter your age\n",i);
        scanf("%d",&age);
        if (age>10)
        {
            continue;
        }
        printf("Devansh is a good boy\n");
        printf("Suryansh is a good boy\n");
        printf("Your age is less than 10\n");
    }
        
    return 0;
}

