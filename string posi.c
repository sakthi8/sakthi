#include<stdio.h>
#include<string.h>
void main()
{
    char str[100],c;
    int i,len,f=0;
    printf("enter the string \n");
    gets(str);
    len=strlen(str);
    printf("enter the character to finding the position \n");
    scanf("%c",&c);
    for(i=0;i<len;i++)
    {
        if(str[i]==c)
        {
            printf("the position is %d",i+1);
            f=1;
        }

    }
    if(f==0)
    {
        printf("\n the given string not found");
    }
}
