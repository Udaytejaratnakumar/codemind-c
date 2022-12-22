#include<stdio.h>
#include<math.h>
int main()
{
    int n,rev=0,sum=0,r,c=0;
    scanf("%d",&n);
    int x=n;
    while(n)
    {
        r=n%10;
        rev=rev*10+r;
        n/=10;
    }
    while(rev)
    {
        c++;
        r=rev%10;
        sum=sum+pow(r,c);
        rev/=10;
        
    }if(x==sum)
    {
        printf("True");
    }else{
        printf("False");
    }
}