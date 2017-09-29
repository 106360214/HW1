#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int y;
	float w, h, x;

	printf("請選擇單位 (1)磅/吋, (2)公斤/公尺 : ");
	scanf_s("%d", &y);
	printf("請輸入體重: ");
	scanf_s("%f", &w);
	printf("請輸入身高: ");
	scanf_s("%f", &h);
	printf("\n");

	if (y == 1)
	{
		x = (w * 703) / (h * h);
	}
	else if (y == 2)
	{
		x = w / (h * h);
	}

	printf("您的BMI為: %f\n\n", x);

	printf("BMI VALUES\n");
	printf("Underweight: less than 18.5\n");
	printf("Normal:      between 18.5 and 24.9\n");
	printf("Overweight:  between 25 and 29.9\n");
	printf("Obese:       30 or greater\n");

	system("pause");
	return 0;
}