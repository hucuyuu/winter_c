// 7.PI/4(书P82）

#include <stdio.h>
#include <math.h>

int main()
{
	int s = 1;
	double pi = 0, n = 1, t = 1;

	while (fabs(t) >= 1e-8)
	{
		pi = pi+t;
		n = n+2;
		s = -s;
		t = s/n;
	}

	pi = pi*4;
	printf("pi=%10.8f\n", pi);

	return (0);
}
