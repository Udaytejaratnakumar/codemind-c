#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=n+1;;i++)
    {
        int c=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }if(c==2)
        {
            int a=i,rev=0;
            while(a)
            {
                int r=a%10;
                rev=rev*10+r;
                a/=10;
            }if(i==rev)
            {
                printf("%d",i);
                break;
            }
        }
    }
}