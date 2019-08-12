#include<stdio.h>
void main()
{
    int n,a[100],i;
    printf("enter the number of element \n");
    scanf("%d",&n);
    printf("enter the data \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("the even num store in array is \n");
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            printf("%d \n",a[i]);
        }
    }
    printf("the odd num store in array is \n");
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            printf("%d",a[i]);
        }
    }
}
