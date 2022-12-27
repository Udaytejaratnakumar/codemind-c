#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int x,y,sum=0,flag=0;
    scanf("%d%d",&x,&y);
    for(int i=0;i<n;i++)
    {
        if(a[i]<x||a[i]>y)
        {
            sum=sum+a[i];
        }
    }
    printf("%d",sum);
}