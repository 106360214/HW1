#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, j, o;

	printf("number\tsquare\tcube\n");

	for (i = 0; i < 11; i++)
	{
		j = i *i;
		o = j *i;
		printf("%d\t%d\t%d\n", i, j, o);
	}

	system("pause");
	return 0;
}