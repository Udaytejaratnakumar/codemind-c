#include<stdio.h>
int main()
{
    int n,i,es,os;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            es=es+a[i];
        }
    }for(i=0;i<n;i++)
    {
        if(i%2!=0)
        {
            os=os+a[i];
        }
    }if(es>os)
    {
        printf("%d",es-os);
    }else{
        printf("%d",os-es);
    }
}