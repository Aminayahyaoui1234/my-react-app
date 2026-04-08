#include<stdio.h>
main()
{
	int n;
	float tva,ph,ttc;
	printf("donner le nombre de article ");
	scanf("%d",&n);
	printf("donner le nombre le prix hors taxe ");
	scanf("%f",&ph);
	printf("donner le tva ");
	scanf("%f",&tva);
	ttc=(ph*n*tva)+(ph*n);
	printf("le prix ttc=%f",ttc);
	
}
