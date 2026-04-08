#include<stdio.h>
#include<math.h>

main()
{
	float a,b,c,m,x1,d,x2;
	printf("donner la valeur de a");
	scanf("%f",&a);
	printf("donner la valeur de b");
	scanf("%f",&b);
	printf("donner la valeur de c");
	scanf("%f",&c);
	m=b*b-4*a*c;
	d=sqrt(m);
	if(m>=0)
	{
		x1=(-b+d)/2*a;
		x2=-b-sqrt(m)/2*a;
	}
	else
	printf("les solutiom sont %f %f",x1,x2);
}
