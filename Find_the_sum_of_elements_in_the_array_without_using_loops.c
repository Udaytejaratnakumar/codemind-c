#include<stdio.h>
int sum(int a[],int n,int s,int i)
{
    if(i==n) return s;
    s+=a[i];
    sum(a,n,s,i+1);
}
int main()
{
    int i,n;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int s=sum(a,n,0,0);
    printf("%d",s);
}