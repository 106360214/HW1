#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int d, e, f;
	float a, b, c, x, y, z;

	printf("�п�J�C�Ѧ�p���{��: ");
	scanf_s("%f", &a);
	printf("�п�J�C�[�ڨT�o����: ");
	scanf_s("%f", &b);
	printf("�п�J�C�[�ڨT�o��p���{��: ");
	scanf_s("%f", &c);
	printf("�п�J�C�Ѱ����O: ");
	scanf_s("%d", &d);
	printf("�п�J�C�ѹL���O: ");
	scanf_s("%d", &e);
	printf("�п�J�@���H��: ");
	scanf_s("%d", &f);
	printf("\n");

	x = ((a / c)*b) + d + e;
	y = x / (f + 1);
	z = x - y;

	printf("�ۦ�}����O��: %f ��\n", x);
	printf("%d �H�@���ɡA�@�H��O��: %f ��\n", f, y);
	printf("�@�@�٤U: %f ��\n", z);

	system("pause");
	return 0;
}