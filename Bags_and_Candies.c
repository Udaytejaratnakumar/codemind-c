#include<stdio.h>
int main()
{
    int n,k,m;
    scanf("%d%d%d",&n,&k,&m);
    int a=k*m;
    if(n%a==0)
    {
        printf("%d",n/a);
    }else{
        printf("%d",(n/a)+1);
    }
}