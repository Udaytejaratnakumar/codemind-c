#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a=0,b=1;
    printf("%d %d ",a,b);
    for(i=3;i<=n;i++)
    {
        int sum=a+b;
        printf("%d ",sum);
        a=b;
        b=sum;
    }
}