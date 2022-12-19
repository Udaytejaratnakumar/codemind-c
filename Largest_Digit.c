#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int large=0,rem;
    while(n)
    {
        rem=n%10;
        if(rem>large)
        {
            large=rem;
        }n/=10;
    }printf("%d",large);
}