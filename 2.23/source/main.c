#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num[3];
	int  x, y, z;

	printf("Enter three integers: ");
	scanf_s("%d%d%d", &num[0], &num[1], &num[2]);

	for (x = 0; x < 3; x++)
	{
		for (y = x; y < 3; y++)
		{
			if (num[y] > num[x])
			{
				z = num[y];
				num[y] = num[x];
				num[x] = z;
			}
		}
	}

	printf("Max is %d.\n", num[0]);
	printf("Min is %d.\n", num[2]);

	system("pause");
	return 0;
}