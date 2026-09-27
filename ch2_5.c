#include <stdio.h>
#include <math.h>
int main(void)
{
	int day;
	double factor,initial,result;
	
	printf("Enter initial:");
	scanf("%lf",&initial);
	printf("Enter factor:");
	scanf("%lf",&factor);
	printf("Enter day:");
	scanf("%d",&day);
	result=initial*pow(factor+1,day);
	printf("result=%.2f\n",result);
	
	return 0;
}
