#include<stdio.h>
main()
{
	int a,b;
	printf("donner un entier a");
	scanf("%d",&a);
	printf("donner un entier b");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("apres permutaion a=%d , et b=%d ",a,b);
}
