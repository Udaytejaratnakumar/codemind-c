#include<stdio.h>
int main()
{
    int n,r,sum=0;
    scanf("%d",&n);
    while(n)
    {
        while(n)
        {
            r=n%10;
            sum=sum+r;
            n=n/10;
        }if(sum>9)
        {
            n=sum;
            sum=0;
        }
    }printf("%d",sum);
}