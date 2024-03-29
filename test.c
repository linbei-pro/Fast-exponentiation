#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
long long power(int base,int exponent)
{
	long long result=1;
	while(exponent>0)
	{
		if(exponent%2==1)
		  result*=base;
		base*=base;
		exponent/=2;   
	}
	return result;
}


int main(int argc, char *argv[]) {
	int base=2;
	int exponent=10;
	long long result=power(base,exponent);
	
	printf("%d",result);
	
	
	return 0;
}
