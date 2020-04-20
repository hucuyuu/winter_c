// （1）设计一个函数，对一个整数数组按升序进行排序（冒泡或选择排序等方法），并在main()函数调用之。

# include <stdio.h>

int bubble(int n[])
{
	int i, j, p;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < i; j++)
		{
			if (n[j] > n[j+1]) {
				p = n[j];
				n[j] = n[j+1];
				n[j+1] = p;
			}
		}
	}
	return (0);
}


int main()
{
	int i;
	int a[10] = { 3, 2, 1, 4, 5, 6, 7, 8, 9, 20 };

	bubble(a);
	for (i = 0; i < 10; i++)
	{
		printf("%d\n", a[i]);
	}

	return (0);
}
