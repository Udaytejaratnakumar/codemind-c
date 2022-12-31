#include<stdio.h>
int main()
{
    int n,c=1,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=c;j<=n;j++)
        {
            printf("%d ",j);
        }printf("
");
        c++;
    }
}