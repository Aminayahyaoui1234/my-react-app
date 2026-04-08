#include<stdio.h>
main()
{
	int a,b,x,y;
	printf("donner un entier");
	scanf("%d",&a);
	printf("donner un entier");
	scanf("%d",&b);
	if(b==0)
	{
			printf("division impossible");
			return 1;
	}	
	x=a%b;
	y=a/b;
	printf("le reste de a division est %d :",x);
	printf("le quotion de la division est %d:",y);
	return 0;
	
}
