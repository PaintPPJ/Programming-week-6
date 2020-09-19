#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{
	int i, j, n;
	scanf("%d", &n);
	if (n > 1) {
		for (i = 0; i < n; i++)
		{
			for (j = 0; j <= 2 * (n - 1); j++)
			{
				if (i + j < n - 1 || i + j > 2 * (n - 1))
				{
					printf("  ");
				}
				else
				{
					printf("* ");
				}
			}
			printf("\n");
		}
	}
	else
	{
		printf("Can't make rhombus.");
	}
	return 0;
}
