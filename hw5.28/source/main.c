#include <stdio.h> 
#include <stdlib.h>	
//轉換字母大小寫
int main(void)
{
	char a = ' ', b = ' ';

	printf("請輸入一個英文字母:");
	scanf_s("%c", &a);

	if (a < 91)
	{
		b = a + ('a' - 'A');//若為大寫字母則減掉a的順序加上A的順序即可成為小寫字母
		printf("%c\n", b);
	}
	else if (a > 96)
	{
		b = a - ('a' - 'A');//若為小寫字母則減掉a的順序加上A的順序即可成為大寫字母
		printf("%c\n", b);
	}

	system("pause");
	return 0;
}