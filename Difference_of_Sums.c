#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,s=0,s1=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=s+pow(i,2);
    }
    for(i=1;i<=n;i++)
    {
        s1=s1+i;
    }
    printf("%d",s1*s1-s);
}