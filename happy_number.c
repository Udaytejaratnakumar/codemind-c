#include<stdio.h>
int update(int n){
    int x=0;
    while(n)
    {
        x=x+(n%10)*(n%10);
        n/=10;
    }return x;
}

int main()
{
    int n;
    scanf("%d",&n);
    while(1){
     n=update(n);
    if(n<9)
    {
        break;
    }}
    if(n==1||n==7)
    {
        printf("True");
    }else{
        printf("False");
    }
}