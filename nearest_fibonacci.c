#include<stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    int a=0,b=1;
    for(;;)
    {
        sum=a+b;
        if(sum>n)
        {
            break;
        }
        a=b;
        b=sum;
    }if(sum-n<n-b)
    {
        printf("%d",sum);
    }else if(sum-n==n-b)
    {
        printf("%d %d",b,sum);
    }
    else{
        printf("%d",b);
    }
}