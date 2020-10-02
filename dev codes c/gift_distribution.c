#include <stdio.h>
int main ()
{
    /*maths and science - 45
 science - 15
 maths - 15
print the type of gift you are giving to them*/ 
char subject;
printf("The subject which u have passed is\n a)maths\n b)science\n c)maths and science\n");
scanf("%c",&subject);
printf("The option which u have chosen is %c\n",subject);
if (subject=='a')
{
    printf("Congrats!,You recieve a gift of 15 rupees from Devansh for passing maths exam");

}
else if (subject=='b')
{
    printf("Congrats!You recieve a gift of 15 rupees from Devansh for passing science exam");
}
else if (subject=='c')
{
    printf("Congrats!You recieve a gift of 45 rupees from Devansh for passing in both maths and science");
}
else
{
    printf("Pehli fursat mein nikal koi zarurat nhi teri");
}
}

