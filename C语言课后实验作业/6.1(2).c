// t6.1(2)

#include <stdio.h>

int a[101] = { 3, 4, 4, 6, 6, 6, 7, 7, 9, 9, 10, 12, 13, 15, 15, 15, 16, 17, 17, 17, 18, 22, 22, 22, 25, 25, 26, 27, 29, 30, 33, 33, 34, 34, 35, 35, 36, 38, 38, 39, 39, 43, 43, 47, 48, 49, 50, 50, 54, 54, 55, 56, 56, 57, 58, 58, 58, 60, 60, 61, 63, 64, 65, 65, 66, 66, 67, 68, 68, 68, 70, 70, 70, 72, 73, 74, 76, 77, 78, 79, 80, 80, 82, 82, 84, 86, 88, 88, 88, 89, 89, 90, 91, 93, 95, 95, 96, 97, 98, 99, 0 };

int printShuzu() // print a[]
{
	int i = 0;

	for (i = 0; i < 101; i++)
	{
		printf("a[%d]:%d   \t", i, a[i]);
		if ((i+1)%5 == 0) {
			printf("\n"); // print \n each 5 lines
		}
	}
	printf("\n");

	return (0);
}


int moveright(int i)
{
	int j = 0;

	for (j = 100; j > i; j--)
	{
		a[j] = a[j-1];
	}

	return (0);
}


int insert(int k)
{
	int i = 0;

	for (i = 0; i < 99; i++) // a[0] <= k <= a[99]
	{
		if ((k >= a[i]) && (k <= a[i+1])) {
			moveright(i);
			break;
		}
	}
	a[i+1] = k;

	if (k < a[0]) { // k < a[0]
		moveright(0);
		a[0] = k;
	}

	if (k > a[99]) { // k > a[99]
		a[100] = k;
	}

	return (0);
}


int main()
{
	int k = 0; // k is the number to be inserted.

	scanf("%d", &k);
	insert(k);
	printShuzu();

	return (0);
}
