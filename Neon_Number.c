#include<stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    int a=n*n;
    while(a)
    {
        int r=a%10;
        sum=sum+r;
        a=a/10;
    }
    if(sum==n)
    {
        printf("Neon Number");
    }else{
        printf("Not Neon Number");
    }
}