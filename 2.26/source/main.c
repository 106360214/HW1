#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int x, y;

	printf("��J2�Ӽƭ�: ");
	scanf_s("%d%d", &x, &y);

	if (x % y == 0)
		printf("%d �O %d ������\n", x, y);
	else
		printf("%d ���O %d ������\n", x, y);

	system("pause");
	return 0;

}