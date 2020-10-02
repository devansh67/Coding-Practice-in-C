
#include <stdio.h>

int main()
{
    printf("Hello World\n");
    int j,i;
    for (i = 0,j=3; i < 5; i++,j++)
    {
        printf("%d %d\n",i,j);
        //we can write i++ or j++ here also as expression 3 is optional in nature
    
    }
    
    return 0;
}

