#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int b[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        int pro=1;
        for(int j=0;j<n;j++)
        {
            if(a[i]!=a[j])
            {
                pro=pro*a[j];
            }b[i]=pro;
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
}