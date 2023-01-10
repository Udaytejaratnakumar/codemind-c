#include<stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        int b=a[i];
        for(int j=1;;j++)
        {
            int p=j*j;
            if(p==b)
            {
                sum=sum+b;
                break;
            }else if(p>b)
            {
                break;
            }
        }
    }printf("%d",sum);
}