#include<stdio.h>
int main()
{
    int n,c=65,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%c ",c);
        }printf("
");
        c++;
    }
}