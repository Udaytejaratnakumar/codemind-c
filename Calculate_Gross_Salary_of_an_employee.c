#include<stdio.h>
int main()
{
    float b,hra,da;
    scanf("%f%f%f",&b,&hra,&da);
    float pf=b*12/100;
    float gs=b+hra+da+pf;
    printf("%0.2f
%0.2f",pf,gs);
}