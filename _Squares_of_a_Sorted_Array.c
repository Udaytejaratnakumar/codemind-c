#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],b[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        int s=a[i]*a[i];
        b[i]=s;
    }
    int min=b[0];
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(b[i]>b[j])
            {
                int temp=b[i];
                b[i]=b[j];
                b[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
}