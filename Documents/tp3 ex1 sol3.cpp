#include<stdio.h>
main()
{
	int a,b,c,min;
	printf("donner 3 valeur");
	scanf("%d %d %d",&a,&b,&c);
	min=(a<b) ? ((a<c) ? a:c):((b<c)?b:c);
	printf("le minimum= %d",min);
}
