#include<stdio.h>
main()
{
	 int a,i,s=1;
	 printf("enter a value");
	 scanf("%d",&a);
	 for(i=1;i<=a;i++)
	 {
	 	 s=s*i;
	 }
	 printf("%d",s);
}
