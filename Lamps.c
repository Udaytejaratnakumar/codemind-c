#include<stdio.h>
int main()
{
    int n,k,x,y,t;
    scanf("%d%d%d%d",&n,&k,&x,&y);
    int b=n-k;
    if(x<y)
    {
        t=n*x;
    }else{
        t=k*x+b*y;
    }
    printf("%d",t);
}