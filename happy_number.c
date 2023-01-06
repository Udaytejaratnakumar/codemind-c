#include<stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    while(1){
        while(n)
        {
            int r=n%10;
            sum=sum+r*r;
            n/=10;
        }if(sum>9)
        {
            n=sum;
            sum=0;
        }else{
            break;
        }
    }if(sum==1||sum==7)
    {
        printf("True");
    }else{
        printf("False");
    }
}