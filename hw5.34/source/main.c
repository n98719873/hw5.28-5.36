#include<stdio.h>
#include<stdlib.h>
//求數為x的y次方
int integerPower(int base, int exponent);

int main(void)
{
	int x, y;
	printf("請輸入兩個數字，前者為基數，後者為指數:");
	scanf_s("%d %d", &x, &y);
	printf("%d", integerPower(x, y));

	system("pause");
	return 0;
}
int  integerPower(int base, int exponent)
{
	if (exponent<0) return 0;
	return (exponent == 0) ? 1 : base*integerPower(base, exponent - 1);
}