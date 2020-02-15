// t6.2(1)

#include <stdio.h>

int main()
{
	int i = 0, j = 0;
	int a[8][8] = { { 0, 0, 0, 0, 0, 0, 0, 0 }, // initialization of variables
			{ 0, 0, 0, 0, 0, 0, 0, 0 },
			{ 0, 0, 0, 0, 0, 0, 0, 0 },
			{ 0, 0, 0, 0, 0, 0, 0, 0 },
			{ 0, 0, 0, 0, 0, 0, 0, 0 },
			{ 0, 0, 0, 0, 0, 0, 0, 0 },
			{ 0, 0, 0, 0, 0, 0, 0, 0 },
			{ 0, 0, 0, 0, 0, 0, 0, 0 } };

	a[0][0] = 1;
	a[1][0] = 1;
	a[1][1] = 1;

	for (i = 2; i < 8; i++)         // row
	{
		a[i][0] = 1;
		a[i][i] = 1;
		for (j = 1; j < i; j++) // column
		{
			a[i][j] = a[i-1][j-1] + a[i-1][j];
		}
	}

	for (i = 0; i < 8; i++)                 // row
	{
		printf("%d:", i+1);
		for (j = 0; j < i+1; j++)       // column
		{
			printf(" %d", a[i][j]);
		}
		printf("\n");
	}
}
