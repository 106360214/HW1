#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int y;
	float w, h, x;

	printf("�п�ܳ�� (1)�S/�T, (2)����/���� : ");
	scanf_s("%d", &y);
	printf("�п�J�魫: ");
	scanf_s("%f", &w);
	printf("�п�J����: ");
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

	printf("�z��BMI��: %f\n\n", x);

	printf("BMI VALUES\n");
	printf("Underweight: less than 18.5\n");
	printf("Normal:      between 18.5 and 24.9\n");
	printf("Overweight:  between 25 and 29.9\n");
	printf("Obese:       30 or greater\n");

	system("pause");
	return 0;
}