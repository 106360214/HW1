#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int d, e, f;
	float a, b, c, x, y, z;

	printf("請輸入每天行駛里程數: ");
	scanf_s("%f", &a);
	printf("請輸入每加侖汽油價格: ");
	scanf_s("%f", &b);
	printf("請輸入每加侖汽油行駛里程數: ");
	scanf_s("%f", &c);
	printf("請輸入每天停車費: ");
	scanf_s("%d", &d);
	printf("請輸入每天過路費: ");
	scanf_s("%d", &e);
	printf("請輸入共乘人數: ");
	scanf_s("%d", &f);
	printf("\n");

	x = ((a / c)*b) + d + e;
	y = x / (f + 1);
	z = x - y;

	printf("自行開車花費為: %f 元\n", x);
	printf("%d 人共乘時，一人花費為: %f 元\n", f, y);
	printf("一共省下: %f 元\n", z);

	system("pause");
	return 0;
}