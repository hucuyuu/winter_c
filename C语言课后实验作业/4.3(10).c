// （10）编写一个程序，打印字符菱形，n (n < 13)由键盘输入。下图为n=5时的情况。
//              *                1
//             ***               3
//            *****              5
//           *******             7
//          *********            9
//           *******
//            *****
//             ***
//              *                9

#include <stdio.h>

int main()
{
	int n = 0, i = 0, j = 0;

	printf("Input n:");
	scanf("%d", &n);

	for (i = 1; i < n+1; i++)
	{
		for (j = i-1; j < n; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2*i-1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = n-1; i > 0; i--)
	{
		for (j = i-1; j < n; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2*i-1; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	return (0);
}
