
#include<stdio.h>
main()
{
	
	int s,m,h,x,c;
	printf("donner le nombre de seconde");
	scanf("%d",&s);
	h=s/3600;
	x=s%3600;
	m=x/60;
	c=x%60;
	printf(" heure=%d",h,"les minute=%d",m,"le seconde=%d",c);
	
}
