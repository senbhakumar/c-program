#include<stdio.h>
int main()
{
long long n;
int count=0;
printf("enter the integer:");
scanf("%d",&n);
{
n/=10;
++count;
}
priintf("num of digit:%d",count);
return 0;
}
