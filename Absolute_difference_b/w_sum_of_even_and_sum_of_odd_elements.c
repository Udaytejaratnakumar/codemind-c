#include<stdio.h>
int main()
{
    int n,evensum=0,oddsum=0,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            evensum=evensum+a[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            oddsum=oddsum+a[i];
        }
    }
    if(oddsum>evensum){
    printf("%d",oddsum-evensum);
        
    }
    else{
        printf("%d",evensum-oddsum);
    }
}