#include<stdio.h>
int check(int n)
{
    int sum=0;
    while(n)
    {
        int r=n%10;
        sum=sum+r*r;
        n/=10;
    }return sum;
}
int main()
{
    int n;
    scanf("%d",&n);
    while(1)
    {
        n=check(n);
        if(n<9)
        {
            break;
        }
    }if(n==1||n==7)
    {
        printf("True");
    }else{
        printf("False");
    }
    
}