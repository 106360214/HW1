#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int x, y;

	printf("輸入2個數值: ");
	scanf_s("%d%d", &x, &y);

	if (x % y == 0)
		printf("%d 是 %d 的倍數\n", x, y);
	else
		printf("%d 不是 %d 的倍數\n", x, y);

	system("pause");
	return 0;

}