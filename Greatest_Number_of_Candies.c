#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int max=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    int b;
    scanf("%d",&b);
    for(i=0;i<n;i++)
    {
        if(a[i]+b>=max)
        {
            printf("True ");
        }
        else
        {
            printf("False ");
        }
    
}}