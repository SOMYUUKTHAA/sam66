#include<stdio.h>
void main()
{
    int a=21,count=0,i;
    for(i=1;i<=a;i++)
    {
    if(a%i==0)
    {
     count++;
    }
    }
    if(count==2)
    {
        printf("\nprime");
    }
    else
    {
        printf("\nnot a prime");
    }
}
