// 16.冒泡排序（书P122）
// Input 10 numbers: 87 85 78 90 88 92 79 69 76 90
// before: 87 85 78 90 88 92 79 69 76 90
// after: 69 76 78 79 85 87 88 90 90 92

#include <stdio.h>

int main()
{
	int i, j, temp;
	int a[10];

	printf("Input 10 numbers: ");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}

	printf("before: ");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9-i; j++)
		{
			if (a[j] > a[j+1]) {
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}

	printf("after: ");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");

	return (0);
}
