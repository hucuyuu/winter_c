// （4）已知2018年1月1号是星期一，给定2018年的任何一天（月日），
// 求这天是星期几（输出最后结果要求用switch语句实现）。一周七天用以下标识：
// Monday，Tuesday，Wednesday，Thursday，Friday，Saturday，Sunday
// 例如：输入 3.30 时应输出 Friday，输入 6.19 时应输出 Tuesday

// 31  28  31  30  31  30  31  31  30  31  30  31
// 1   2   3   4   5   6   7   8   9   10  11  12
// 31  59  90  120 151 181 212 343 273 304 334 365
#include <stdio.h>

int main()
{
	int m = 0, d = 0;
	int daysum = 0;

	printf("Input month day:");
	scanf("%d %d", &m, &d);
	if (m == 1) {
		daysum = 0;
	}else if (m == 2) {
		daysum = 31;
	}else if (m == 3) {
		daysum = 59;
	}else if (m == 4) {
		daysum = 90;
	}else if (m == 5) {
		daysum = 120;
	}else if (m == 6) {
		daysum = 151;
	}else if (m == 7) {
		daysum = 181;
	}else if (m == 8) {
		daysum = 212;
	}else if (m == 9) {
		daysum = 243;
	}else if (m == 10) {
		daysum = 273;
	}else if (m == 11) {
		daysum = 304;
	}else if (m == 12) {
		daysum = 334;
	}

	daysum = daysum + d;

	switch (daysum%7)
	{
	case 0:
		printf("%d/%d is Sunday\n", m, d);
		break;

	case 1:
		printf("%d/%d is Monday\n", m, d);
		break;

	case 2:
		printf("%d/%d is Tuesday\n", m, d);
		break;

	case 3:
		printf("%d/%d is Wednesday\n", m, d);
		break;

	case 4:
		printf("%d/%d is Thursday\n", m, d);
		break;

	case 5:
		printf("%d/%d is Friday\n", m, d);
		break;

	case 6:
		printf("%d/%d is Saturday\n", m, d);
		break;
	}

	return (0);
}
