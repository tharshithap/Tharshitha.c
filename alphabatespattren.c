#include <stdio.h>
int main() 
{
int i,j;
char n='A';
char e='a';
for(i=1;i<=7;i++)
{
    for(j=1;j<=i;j++)
    {
        printf("%c\t",n++);
    }
    printf("\n");
}
for(i=1;i<=7;i++)
{
    for(j=1;j<=i;j++)
    {
        printf("%c\t",e++);
    }
    printf("\n");
}
}
