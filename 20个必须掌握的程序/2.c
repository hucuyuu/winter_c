// 2.华氏摄氏温度转换(书P29）
// 计算公式：C=5x(F-32)/9

#include <stdio.h>

int main()
{
	float tempC, tempF = 100;

	tempC = 5*(tempF-32)/9;
	printf("%5.1fF=%5.1fC\n", tempF, tempC);

	return (0);
}
