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
    int flag=0;
    for(int i=0;i<n;i++)
    {
        int c=1;
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                for(int k=j;k<n;k++)
                {
                    a[k]=a[k+1];
                }n--;
                j--;
                c++;
            }
        }if(c==a[i])
        {
            flag=1;
            printf("%d ",a[i]);
        }
    }if(flag==0)
    {
        printf("-1");
    }
}
