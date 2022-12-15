#include<stdio.h>
int main()
{
    int n,i,r,bd,fd,bp,fp;
    scanf("%d",&n);
    for(i=n+1;;i++)
    {
        int rev=0;
        int a=i;
        while(a)
        {
            r=a%10;
            rev=rev*10+r;
            a/=10;
        }if(rev==i)
        {
            fd=i-n;
            fp=i;
            break;
        }
    }
    for(i=n-1;i>0;i--)
    {
        int rev=0;
        int a=i;
        while(a)
        {
            r=a%10;
            rev=rev*10+r;
            a/=10;
        }if(rev==i)
        {
            bd=n-i;
            bp=i;
            break;
        }
    }if(bd==fd)
    {
        printf("%d %d",bp,fp);
    }else if(bd<fd)
    {
        printf("%d",bp);
    }else{
        printf("%d",fp);
    }
}