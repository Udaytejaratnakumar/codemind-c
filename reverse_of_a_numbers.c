#include<stdio.h>
int main()
{
    int n,rev=0;
    scanf("%d",&n);
    while(n)
    {
        int r=n%10;
        rev=rev*10+r;
        n=n/10;
    }printf("%d",rev);
}