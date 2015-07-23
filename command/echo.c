#include "stdio.h"

int main(int argc, char * argv[])
{
	int i;
	int length=0;
	for (i = 0; argv[1][i]!='\0'; i++){length++;}
	int k=0;
	int sum=0;
	for (i = 0; i<length; i++)
	{
		k=argv[1][i]-'0';
		sum=sum+k*power(length-i-1);
	}
	int result;
	printf("1");
	for(i=1;i<sum;i++)printf(",%d",Fibonacci(i+1));
	printf("\n");
	return 0;
}

int power(int n)
{
	int i;
	int result=1;
	for(i=0;i<n;i++)
		result=result*10;
	return result;
}

int Fibonacci(n)
{
	if(n==1||n==2)return 1;
	else return (Fibonacci(n-1)+Fibonacci(n-2));
}
