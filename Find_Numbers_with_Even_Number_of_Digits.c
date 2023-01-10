#include<stdio.h>
int main()
{
    int n,c1=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        int b=a[i],c=0;
        while(b)
        {
            int r=b%10;
            c++;
            b/=10;
        }if(c%2==0)
        {
            c1++;
        }
    }printf("%d",c1);
}