#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    for(int i=a;i<=b;i++)
    {
        int x=i,rev=0;
        while(x)
        {
            int r=x%10;
            rev=rev*10+r;
            x/=10;
        }if(rev==i)
        {
            printf("%d ",i);
        }
    }
}