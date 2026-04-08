#include<stdio.h>
main()
{
	int a;
	printf("donner un nombre\n");
	scanf("%d",&a);
	if(a<=0)
		printf("donner un entier entier positif");
		
	for(int i = 1 ; i <=. a ; i++)
	{
		if(a % i == 0)	{
			printf("%d\n",i);
		}
	}
}
