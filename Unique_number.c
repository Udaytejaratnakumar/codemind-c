#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int temp=n;
    int temp1=n;
    int flag=0;
    while(n)
    {
        int r=n%10;
        int c=0;
        while(temp)
        {
            int r1=temp%10;
            if(r==r1)
            {
                c++;
            }
            if(c==2){
            	flag=1;
            	break;
			}
            temp/=10;
        }
        temp=temp1;
        n/=10;
    }if(flag==0) printf("Unique Number");
    else printf("Not Unique Number");
}