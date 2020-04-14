// t6.2(2)
// 编写一个程序，实现一个n阶（n<10）的螺旋矩阵（顺时针方向旋进）。如下是一个n=5阶螺旋矩阵。

#include <stdio.h>

int main()
{
	int n = 0;
	int cot = 1;
	int i = 0, j = 0;

	// place my turtle @ a[1][1]
	int turtleX = 1;        // row
	int turtleY = 1;        // column

	// borders
	int turtleMaxX;
	int turtleMaxY;
	int turtleMinX;
	int turtleMinY;

	// turtle`s Disneyland
	int a[12][12] = { { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },       // 1
			  { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },       // 2
			  { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },       // 3
			  { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },       // 4
			  { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },       // 5
			  { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },       // 6
			  { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },       // 7
			  { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },       // 8
			  { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },       // 9
			  { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },       // 10
			  { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },       // 11
			  { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } };     // 12

	// init Disneyland
	printf("Input n:");
	scanf("%d", &n);
	if (n > 11) {
		printf("n=%d is illegal\n", n);
		return (-1);
	}

	// borders of Disneyland
	turtleMaxX = n;
	turtleMaxY = n;
	turtleMinX = 1;
	turtleMinY = 1;

	// go !!! my turtle !!! go!!!
	// treat odd and even numbers separately
	while ((n%2 == 1 && (turtleMaxX != turtleMinX)) || (n%2 == 0 && (turtleMaxX != turtleMinX-1)))
	{
		while (turtleY <= turtleMaxY)   // move right
		{
			a[turtleX][turtleY] = cot;
			cot++;
			turtleY++;
		}
		turtleMinX++;                 // border changed
		turtleY--;
		turtleX++;
		while (turtleX <= turtleMaxX) // move down
		{
			a[turtleX][turtleY] = cot;
			cot++;
			turtleX++;
		}
		turtleMaxY--;
		turtleX--;
		turtleY--;
		while (turtleY >= turtleMinY) // move left
		{
			a[turtleX][turtleY] = cot;
			cot++;
			turtleY--;
		}
		turtleMaxX--;
		turtleY++;
		turtleX--;
		while (turtleX >= turtleMinX) // move up
		{
			a[turtleX][turtleY] = cot;
			cot++;
			turtleX--;
		}
		turtleMinY++;
		turtleX++;
		turtleY++;
	}

	// when n is odd
	if (n%2 == 1) {
		a[turtleX][turtleY] = cot;
	}

	// print a[][]
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			printf("%5d", a[i][j]);
		}
		printf("\n");
	}

	return (0);
}
