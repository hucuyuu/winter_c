// 13.求矩阵的最大值最小值（书P128）
// Input 12 number:
// 80 85 82 45 98 59 88 92 89 90 75 66
// matix:
// 80 85 82 45
// 98 59 88 92
// 89 90 75 66
// max : a[1][0]=98
// min : a[0][3]=45

#include <stdio.h>

int main()
{
	int a[3][4];
	int max, max_row, max_col;
	int min, min_row, min_col;

	int i, j;

	printf("Input 12 number: \n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}

	printf("matix: \n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}

	max = a[0][0];
	max_row = 0;
	max_col = 0;
	min = a[0][0];
	min_row = 0;
	min_col = 0;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			if (max < a[i][j]) {
				max = a[i][j];
				max_row = i;
				max_col = j;
			}
			if (min > a[i][j]) {
				min = a[i][j];
				min_row = i;
				min_col = j;
			}
		}
	}
	printf("max : a[%d][%d]=%d\n", max_row, max_col, max);
	printf("min : a[%d][%d]=%d\n", min_row, min_col, min);

	return (0);
}
