
#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age\n");
    scanf("%d",&age);
    printf("You have entered %d as your age\n",age);
    if (age>=18)
    {
        printf("You are eligible for voting");
    }
    else if (age>10)
    {
        printf("Teri toh daadhi bhi nhi aayi bhaag bc and you cannot vote");
    }
    else if (age>=3)
    {
        printf("You can vote for babies only");
    }
    
    else
    {
        printf("Sorry,You are not eligible to vote");
    }
    
    return 0;
}

