#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }int flag=0;
    int x;
    scanf("%d",&x);
    for(int i=0;i<n;i++)
    {
        if(x==a[i])
        {
            printf("%d",i);
            flag=1;
            break;
        }
    }if(flag==0)
    {
        printf("-1");
    }
}