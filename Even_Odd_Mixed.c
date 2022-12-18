#include<stdio.h>
int main()
{
    int n,c=0,nc=0,c1=0;
    scanf("%d",&n);
    while(n)
    {
    int   r=n%10;
        nc++;
        if(r%2==0)
        {
            c++;
        }else if(r%2!=0)
        {
            c1++;
        }
        n=n/10;
    }if(c==nc)
    {
        printf("Even");
    }else if(c1==nc){
        printf("Odd");
    }else{
        printf("Mixed");
    }
}