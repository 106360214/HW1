#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num;

	printf("Enter a integer: ");
	scanf_s("%d", &num);

	if (num % 2 == 0)
		printf("%d is even.\n", num);
	else
		printf("%d is odd.\n", num);

	system("pause");
	return 0;
}