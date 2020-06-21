// 9.求阶乘(书P84\P108)

#include <stdio.h>
int Fac(int);

int main()
{
	int i, p, s;
	int m, n = 6;

	// p84
	for (i = 2, p = 1, s = 1; i <= 10; i++)
	{
		p *= i;
		s += p;
	}
	printf("1!+2!+3!+...+10!=%d\n", s);

	// p108
	m = Fac(n);
	printf("%d!=%d\n", n, m);

	return (0);
}


int Fac(int n)
{
	if (n == 1) {
		return (1);
	}else{
		return (n*Fac(n-1));
	}
}
