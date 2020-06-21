// 5.利用海伦公式计算三角形面积（书P57）

#include <stdio.h>
#include <math.h>

int main()
{
	double a, b, c, p, s;

	printf("Please input a,b,c:\n");
	scanf("%lf%lf%lf", &a, &b, &c);

	if ((a+b > c) && (b+c > a) && (c+a > b)) {
		p = 1.0/2*(a+b+c);
		s = sqrt(p*(p-a)*(p-b)*(p-c));
		printf("a=%5.2f,b=%5.2f,c=%5.2f,p=%5.2f\n", a, b, c, p);
		printf("s=%5.2f\n", s);
	}else{
		printf("input data error\n");
	}

	return (0);
}
