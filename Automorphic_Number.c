#include<stdio.h>
#include<math.h>
int main()
{
    int n,rev=0,rev1=0,c=0,r;
    scanf("%d",&n);
    int x=log10(n)+1;
    int a=n*n;
    while(a)
    {
        r=a%10;
        c++;
        rev=rev*10+r;
        if(c==x)
        {
            break;
        }
        a=a/10;
    }while(rev)
    {
        r=rev%10;
        rev1=rev1*10+r;
        rev/=10;
    }if(rev1==n)
    {
        printf("Automorphic Number");
    }else{
        printf("Not an Automorphic Number");
    }
    
}