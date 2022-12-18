#include<stdio.h>
int main()
{
    int a,b,ans=1;
    scanf("%d%d",&a,&b);
    int x=a>b?a:b;
    int i=2;
    while(i<x)
    {
        if(a%i==0&&b%i==0)
        {
            ans=ans*i;
            a=a/i;
            b=b/i;
        }else{
            i++;
        }
    }printf("%d",ans*a*b);
}