#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int d;
    scanf("%d",&d);
    int f=d;
    for(int i=0;i<d;i++)
    {
        if(f==n)
        {
            break;
        }else{
        printf("%d %d ",a[i],a[f]);
        f++;
        }
    }
}