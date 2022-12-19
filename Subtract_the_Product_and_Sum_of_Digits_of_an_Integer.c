#include<stdio.h>
#include<math.h>
int main()
{
    int n,sum=0,pro=1;
    scanf("%d",&n);
    while(n)
    {
        int r=n%10;
        sum=sum+r;
        pro=pro*r;
        n=n/10;
    }printf("%d",abs(sum-pro));
}