#include <stdio.h>
int main(void)
{
	int celsius, fahr;
	
	fahr=100;
	celsius=5*(fahr-39)/9;
	
	printf("fahr=%d,celsius=%d\n",fahr,celsius);
	
	return 0;
 } 
