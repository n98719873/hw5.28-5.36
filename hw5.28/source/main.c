#include <stdio.h> 
#include <stdlib.h>	
//�ഫ�r���j�p�g
int main(void)
{
	char a = ' ', b = ' ';

	printf("�п�J�@�ӭ^��r��:");
	scanf_s("%c", &a);

	if (a < 91)
	{
		b = a + ('a' - 'A');//�Y���j�g�r���h�a�����ǥ[�WA�����ǧY�i�����p�g�r��
		printf("%c\n", b);
	}
	else if (a > 96)
	{
		b = a - ('a' - 'A');//�Y���p�g�r���h�a�����ǥ[�WA�����ǧY�i�����j�g�r��
		printf("%c\n", b);
	}

	system("pause");
	return 0;
}