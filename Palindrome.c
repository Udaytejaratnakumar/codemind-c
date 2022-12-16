#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int temp=n,rev=0,r;
    while(n)
    {
        r=n%10;
        rev=rev*10+r;
        n/=10;
    }if(rev==temp)
    {
        printf("True");
    }else{
        printf("False");
    }
}