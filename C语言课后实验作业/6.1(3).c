// t6.1(3)

# include <stdio.h>

int findmax(float a[], int n)
{
	int i = 0, num = 0;
	float t = a[0];

	for (i = 0; i < n; i++)
	{
		if (t < a[i]) {
			t = a[i];
			num = i;
		}
	}

	return (num);
}


int findmin(float a[], int n)
{
	int i = 0, num = 0;
	float t = a[0];

	for (i = 0; i < n; i++)
	{
		if (t > a[i]) {
			t = a[i];
			num = i;
		}
	}

	return (num);
}


int main()
{
	int i = 0, max = 0, min = 0;
	float a[10] = { 8.5, 9.6, 7.9, 8.8, 1, 8.5, 9.9, 7.2, 6.9, 500 }; // the score
	float sum = 0, avg = 0;

	max = findmax(a, 10);
	min = findmin(a, 10);
	a[max] = 0;     // delete the max score
	a[min] = 0;     // delete the min score

	for (i = 0; i < 10; i++)
	{
		sum += a[i];
	}
	avg = sum / 8;

	printf("score:%.2lf\n", avg); // keep 2 decimals

	return (0);
}
