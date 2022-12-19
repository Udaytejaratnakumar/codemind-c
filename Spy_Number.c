#include<stdio.h>
int main()
{
    int n,sum=0,pro=1;
    scanf("%d",&n);
    while(n)
    {
        int r=n%10;
        sum=sum+r;
        pro=pro*r;
        n/=10;
    }if(sum==pro)
    {
        printf("Spy Number");
    }else{
        printf("Not Spy Number");
    }
}