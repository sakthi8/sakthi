#include<stdio.h>
int main()
{
    int num,i,j;
    long int fact;
    printf("enter the number of value \n");
    scanf("%d",&num);
    fact=1;
for(i=num;i>=1;i--)

        fact=fact*i;

    printf("the given %d is factorial %ld",num,fact);

    return 0;
}

