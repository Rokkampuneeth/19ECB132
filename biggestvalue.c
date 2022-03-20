#include<stdio.h>
main() 
{ int a,b,c,t,max;
printf("enter three different numbers\n");
scanf("%d%d%d",&a,&b,&c);
t=(a>b)? a:b;
max=(t>c)? t:c;
printf("max valueis %d\n",max);
}
