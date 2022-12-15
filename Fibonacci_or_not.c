#include<stdio.h>
int main()
{
    int n,i,sum=0;
    scanf("%d",&n);
    int a=0,b=1;
    for(i=3;;i++)
    {
        sum=a+b;
        if(sum>=n)
        {
            break;
        }
        a=b;
        b=sum;
    }if(sum==n)
    {
        printf("True");
    }else{
        printf("False");
    }
}