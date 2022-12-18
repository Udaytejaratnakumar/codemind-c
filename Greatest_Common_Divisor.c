#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int x=a>b?a:b;
    for(int i=x;i>0;i--)
    {
        if(a%i==0&&b%i==0)
        {
            printf("%d",i);
            break;
        }
    }
}