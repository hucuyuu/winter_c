// 18.
// 已知2000年1月1号是星期六，给定2000年1月1日及之后的任何一天（年月日），求
// 这天是星期几。一周七天用以下标识：
// Monday，Tuesday，Wednesday，Thursday，Friday，Saturday，Sunday
// 例如：输入 2016.2.29 时应输出 Monday，输入 2018.6.19 时应输出 Tuesday
// 要求：设计判断闰年的函数和求出任何一天（年月日）是星期几的函数，在main函
// 数中输入年月日，调用相应函数，在main函数中输出结果。
// 请认真测试程序的正确性。将源代码以文本方式提交，不要直接提交文件。

// 1、W=[C/4]-2C+y+[y/4]+[26(m+1)/10]+d-1 （其中[ ]为取整符号）
// 2、其中,W是所求日期的星期数.如果求得的数大于7,可以减去7的倍数,直到余数小于7为止.
//   c是公元年份的前两位数字,y是已知公元年份的后两位数字;m是月数,d是日数.方括[ ]表示只截取该数的整数部分。
// 3、还有一个特别要注意的地方:所求的月份如果是1月或2月,则应视为前一年的13月或14月.所以公式中m 的取值范围不是1-12,而是3-14.

#include <stdio.h>

int zeller(int y, int m, int d)
{
	int c = 0, w = 0;

	c = y/100;
	y = y%100;
	if (m == 1) {
		m = 13;
		y--;
	}
	if (m == 2) {
		m = 14;
		y--;
	}
	w = (c/4)-2*c+y+(y/4)+(13*(m+1)/5)+d-1;
	w = w%7;

	return (w);
}


int main()
{
	int y = 0, m = 0, d = 0;

	printf("Input \"YYYY.MM.DD\":");
	scanf("%d.%d.%d", &y, &m, &d);

	switch (zeller(y, m, d))
	{
	case 0:
		printf("%d.%d.%d is Sunday\n", y, m, d);
		break;

	case 1:
		printf("%d.%d.%d is Monday\n", y, m, d);
		break;

	case 2:
		printf("%d.%d.%d is Tuesday\n", y, m, d);
		break;

	case 3:
		printf("%d.%d.%d is Wednesday\n", y, m, d);
		break;

	case 4:
		printf("%d.%d.%d is Thursday\n", y, m, d);
		break;

	case 5:
		printf("%d.%d.%d is Friday\n", y, m, d);
		break;

	case 6:
		printf("%d.%d.%d is Saturday\n", y, m, d);
		break;
	}

	return (0);
}
