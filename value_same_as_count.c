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
            c1++;
        }
    }printf("%d
",c1);
}