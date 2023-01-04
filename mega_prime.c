#include<stdio.h>
int main()
{
    int n,c=0,flag=0,j;
    scanf("%d",&n);
    int a=n;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }if(c==2)
    {
        while(a)
        {
            int c1=0;
           int r=a%10;
           for(j=1;j<=r;j++)
           {
               if(r%j==0)
               {
                   c1++;
               }
           }if(c1==2)
           {
               flag=1;
           }else{
               flag=0;
               break;
           }
           a/=10;
        }
    }if(flag==1)
    {
        printf("Mega Prime");
    }else{
        printf("Not Mega Prime");
    }
    
}