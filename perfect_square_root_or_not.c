#include<stdio.h>
int main()
{
    int n,i,a,b;
    scanf("%d",&n);
    for(i=1;;i++)
    {
        a=i*i;
        if(a>n)
        {
            break;
        }b=a;
    }if(b==n)
    {
        printf("True");
    }else{
        printf("False");
    }
}