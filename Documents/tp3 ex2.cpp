#include<stdio.h>
main()
{
	int a,b;
	printf("donner deux entier a et b ");
	scanf("%d %d",&a,&b);
	a=a-b;
	b=b+a;
	a=b-a;
	printf("a=%d b=%d",a,b);
}
