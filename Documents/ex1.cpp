#include<stdio.h>
main()
{
	int n,i;
	printf("donner un nombre\n");
	scanf("%f",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
			printf("%d\n",i);
	}
}
