#include <stdio.h>
#include <math.h>
int main(void)
{
	int i,limit,m;
	
	printf("Enter a number:");
	scanf("%d",&m);
	if(m<=1){
		printf("No!\n");
	}else if(m==2){
		printf("%d is a prime number!\n",m);
	}else{
		limit=sqrt(m)+1;
		for(i=2;i<=limit;i++){
			if(m%2==0){
				break;
			}
		}
		if(i>limit){
			printf("%d is a prime number!\n",m);
			
		}else{
			printf("No!\n");
		}
	}	
	return 0;
}
