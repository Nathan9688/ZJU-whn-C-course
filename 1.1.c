#include <stdio.h>
int main(void)
{
	int sum = 0, i; /* 1 */
	for( i=1; i<=100; i++ ) { /* 2 */
	if( i%2==0 ) /* 3 */
		sum = sum + i;
}
printf("½á ¹û=%d\n", sum); /* 4 */
return 0;
}
