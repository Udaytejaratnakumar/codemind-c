#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int r=n%10;
    while(n)
    {
        int r1=n%10;
        if(r1>r)
        {
            r=r1;
        }
        n=n/10;
    }printf("%d",r);
    
}