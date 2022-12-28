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
    int x,y,c=0,f=1;
    scanf("%d%d",&x,&y);
    int max=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]>x && a[i]<y)
        {
            c++;
        }
        else
        {
            if(max<a[i])
            {
            max=a[i];
              f=0;  
            }
        }
    }
    if(f==0)
    {
    printf("%d",max);
    }
    else if(f==1)
    {
        printf("-1");
    }
}