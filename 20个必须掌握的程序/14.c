// 14.矩阵转置（书P145）
// Input matrixA,3*4:
// 11 12 13 14
// 15 16 17 18
// 19 20 21 22
// matrixB,3*4:
// 11 15 19
// 12 16 20
// 13 17 21
// 14 18 22

#include <stdio.h>
#define ROW	3
#define COL	4

int main()
{
	int matrixA[ROW][COL];
	int matrixB[ROW][COL];
	int i, j;

	printf("Input matrixA,%d*%d:\n", ROW, COL);
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			scanf("%d", &matrixA[i][j]);
		}
	}
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			matrixB[j][i] = matrixA[i][j];
		}
	}

	printf("matrixB,%d*%d:\n", ROW, COL);
	for (i = 0; i < COL; i++)
	{
		for (j = 0; j < ROW; j++)
		{
			printf("%d ", matrixB[i][j]);
		}
		printf("\n");
	}

	return (0);
}
