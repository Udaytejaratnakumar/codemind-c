#include<stdio.h>
int main()
{
    int n,rev=0;
    scanf("%d",&n);
    int temp=n;
    while(n)
    {
        int r=n%10;
        rev=rev*10+r;
        n/=10;
    }
    if(rev==temp)
    {
        printf("True");
    }else{
        printf("False");
    }
}