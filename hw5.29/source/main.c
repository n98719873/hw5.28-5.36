#include<stdio.h>
#include<stdlib.h>
//��X�̤p������
int LCM(int x, int y);

int main(void)
{
	int x, y;

	printf("�п�J��ӼƦr:");
	scanf_s("%d %d", &x, &y);
	printf("%d\n", LCM(x, y));

	system("pause");
	return 0;
}

int LCM(int x, int y)
{
	int i,RE = 0;
	for (i = x; i <= x*y; i++)
	{
		if (i%x == 0 && i%y == 0)
		{
			RE = i;
			break;
		}
	}
	return RE;
}