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
    int max=a[0];
    int min=a[0];
    int flag=0;
    for(int i=0;i<n;i++)
    {
        int c=1;
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                c++;
            }
        }if(c==a[i])
        {
            if(max<=a[i])
            {
                max=a[i];
                flag=1;
            }if(min>=a[i])
            {
                min=a[i];
                flag=1;
            }
        }
    }if(flag==1)
    {
        printf("%d %d",min,max);
    }else
    {
        printf("-1");
    }
}