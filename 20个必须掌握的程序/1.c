// 1.交换算法：两个变量的交换、数组元素的交换、指针的交换

#include <stdio.h>

int main()
{
	int i = 5, j = 6, temp;
	int a[3] = { 1, 2 };
	char *p1 = "hh", *p2 = "ee", *ptemp;

	// 两个变量的交换
	printf("before:\ti=%d\tj=%d\n", i, j);
	temp = i;
	i = j;
	j = temp;
	printf("after:\ti=%d\tj=%d\n", i, j);

	// 数组元素的交换
	printf("before:\ta[0]=%d\ta[1]=%d\n", a[0], a[1]);
	a[2] = a[0];
	a[0] = a[1];
	a[1] = a[2];
	printf("after:\ta[0]=%d\ta[1]=%d\n", a[0], a[1]);

	// 指针的交换
	printf("before:\tp1=%s\tp2=%s\n", p1, p2);
	ptemp = p1;
	p1 = p2;
	p2 = ptemp;
	printf("after:\tp1=%s\tp2=%s\n", p1, p2);

	return (0);
}
