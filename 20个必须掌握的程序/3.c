// 3.厘米和吋长度转换(书P43）

#include <stdio.h>

int main()
{
	float inch, cm;

	printf("Input inch:");
	scanf("%f", &inch);

	cm = 2.54f*inch;

	printf("%.3finch=%.3fcm\n", inch, cm);

	return (0);
}
