#include<stdio.h>
int main()
{
    int n,i,j,k,l;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(k=i-1;k>=0;k--)
        {
            printf("%d",k);
        }
        for(l=1;l<=i-1;l++)
        {
            printf("%d",l);
        }printf("
");
    }
}