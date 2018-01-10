#include<stdio.h>
void main()
{
int v,k,y;
printf("enter the numbers");
scanf("%d%d%d",&v,&k,&y);
if(v>k)
{
if(v>y)
{
printf("%d is largest",v);
}
}
elseif(k>y)
{
printf("%d is largest",k);
}
else
{
printf("%d is largest",y);
}
}

