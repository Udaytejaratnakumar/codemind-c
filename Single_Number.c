#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,j,flag=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        flag=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                flag++;
            }
        }
        if(flag==1)
        {
            printf("%d",a[i]);
            break;
        }
    }
}