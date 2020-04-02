// 实验6.1第(6)小题：从键盘输入n个数(n>2，自定)，求出它们的最小公倍数并输出。
// 首先我们要知道，如果有三个正整数a b c，若d是a和b的最小公倍数，e是d和c的最小
// 公倍数，那么e就是a b c的最小公倍数。同理，我们可以推出n个数的最小公倍数的求
// 解，而对于最小公倍数的求解过程我们可以使用一个函数LCM来求解，在此之前我们要
// 明白最小公倍数是如何求解的。若k是a和b的最大公约数，那么a和b的最小公倍数为
// a*b/k。而对于最大公约数的求解，最简单的我们可以使用辗转相除法来求得。从而我
// 们可以很快的写出来求最小公倍数的算法，接下来就是要利用数组定义所要求的数字
// 集合，利用循环结构遍历一次数组即可求出n个数的最小公倍数，那么问题就迎刃而解
// 了。

# include <stdio.h>

int LCM(int m, int n) // LCM 函数
{
	int t = 0;
	int s = m*n;

	while (n != 0)
	{
		t = m % n;
		m = n;
		n = t;
	}

	return (s/m);
}


int main()
{
	int i = 0;
	int x = 0;
	int lim = 0;
	int n[100] = { 0 };

	printf("Input n(n<=100):");  // 从键盘输入 n 个数
	scanf("%d", &lim);

	for (i = 0; i < lim; i++)
	{
		scanf("%d", &n[i]);
		if (n[i] <= 0) {
			printf("\n\nWRONG INPUT\n\n");
			return (-1);
		}
	}


	printf("\n\nn[0]...n[%d]:\n", lim-1); // 打印这 n 个数
	for (i = 0; i < lim; i++)
	{
		printf("%d ", n[i]);
		if ((i+1)%5 == 0) {
			printf("\n");
		}
	}

	x = LCM(n[0], n[1]);
	for (i = 2; i < lim; i++)
	{
		x = LCM(x, n[i]);
	}
	printf("\n\nThe LCM is %d\n", x);

	return (0);
}
