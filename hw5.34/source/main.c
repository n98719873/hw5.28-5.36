#include<stdio.h>
#include<stdlib.h>
//―计xyΩよ
int integerPower(int base, int exponent);

int main(void)
{
	int x, y;
	printf("叫块ㄢ计玡膀计计:");
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