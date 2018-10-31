#include<stdio.h>
#include<stdlib.h>
//將圓盤由原塔移動至另一塔(且不可將較大的盤放到較小的盤上)
void hanoi(int n, char A, char B, char C);

int main(void)
{
	int n;

	printf("請輸入河內塔的高度：");
	scanf_s("%d", &n);
	hanoi(n, '1', '2', '3');

	system("pause");
}

void hanoi(int n, char A, char B, char C)
{
	if (n == 1)
	{
		printf("%c to %c\n", A, C);
	}
	else
	{
		hanoi(n - 1, A, C, B);
		printf("%c to %c\n", A, C);
		hanoi(n - 1, B, A, C);
	}
}