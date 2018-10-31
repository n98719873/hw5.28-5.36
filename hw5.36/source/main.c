#include<stdio.h>
#include<stdlib.h>
//�N��L�ѭ�𲾰ʦܥt�@��(�B���i�N���j���L�����p���L�W)
void hanoi(int n, char A, char B, char C);

int main(void)
{
	int n;

	printf("�п�J�e���𪺰��סG");
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