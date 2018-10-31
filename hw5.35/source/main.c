#include<stdio.h>
#include<stdlib.h>
//0,1,1,2,3,5,8.....//由0和1開始，前一個數加上再前一個數
unsigned long long int fibonacci(unsigned int n);

int main(void)
{
	int i;
	for ( i = 0; i <49; i++)
	{
		printf("%llu\n", fibonacci(i));
	}
	system("pause");
	return 0;
}

unsigned long long int fibonacci(unsigned int n)
{
	int j;
	unsigned long long int temp1 = 0, temp2 = 1,result = 0;
	for (j = 0; j < n; j++)
	{
		temp1 = temp2;
		temp2 = result;
		result = temp1 + temp2;
	}
	return  result;
}