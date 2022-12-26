#include<stdio.h>
int main()
{
    int n,sum=0,c=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    int avg=sum/n;
    for(int i=0;i<n;i++)
    {
        if(a[i]==avg)
        {
            c=1;
            break;
        }
    }if(c==1)
    {
        printf("True");
    }else{
        printf("False");
    }
}