#include<stdio.h>
main()
{
	int a,b,c,min;
	printf("donner 3 valeur");
	scanf("%d %d %d",&a,&b,&c);
	if(a<b)
	{
		if(a<c)
			min=a;
		else
			min=c;
	}
	else
	{
		if(b<c)
			min=b;
		else
			min=c;
	}
	printf("le minimum = %d",min);
}
