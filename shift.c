#include<stdio.h>
void main()
{
    int i,j,n,a[100],temp,c;
    printf("enter the num of element \n");
    scanf("%d",&n);
    printf("enter the element \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the shift element \n");
    scanf("%d",&c);
    for(j=0;j<c;j++)
    {

    temp=a[0];
    for(i=0;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    a[n-1]=temp;
}
    printf("the shifted element is \n");
    for(i=0;i<n;i++)
    {
        printf("%d \n",a[i]);
    }




}


