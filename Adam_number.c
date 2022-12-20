#include<stdio.h>
int main()
{
    int n,rev=0,rev1=0;
    scanf("%d",&n);
    int a=n*n;
    while(n)
    {
        int r=n%10;
        rev=rev*10+r;
        n/=10;
    }
    int x=rev*rev;
    while(x)
    {
        int r=x%10;
        rev1=rev1*10+r;
        x/=10;
    }
    if(a==rev1)
    {
        printf("True");
    }else{
        printf("False");
    }
}