// 请编程实现从键盘输入一个百分制成绩，分别用if语句、switch语句和条件表达式3种形式实现转换成五级记分制成绩输出，
// 即用五级记分制的等级A、B、C、D和E分别表示100~90、89~80、79~70、69~60、59~0五类成绩。

#include <stdio.h>

int main()
{
	int score = 0;
	int tmp = 0;
	char grade = '0';

	printf("Input score:");
	scanf("%d", &score);

	if ((score >= 90) && (score <= 100)) {
		grade = 'A';
	}
	if ((score >= 80) && (score < 90)) {
		grade = 'B';
	}
	if ((score >= 70) && (score < 80)) {
		grade = 'C';
	}
	if ((score >= 60) && (score < 70)) {
		grade = 'D';
	}
	if ((score >= 0) && (score < 60)) {
		grade = 'E';
	}
	printf("grade:%c\n", grade);

	tmp = score/10;
	switch (tmp)
	{
	case 10:
	case 9:
		grade = 'A';
		break;

	case 8:
		grade = 'B';
		break;

	case 7:
		grade = 'C';
		break;

	case 6:
		grade = 'D';
		break;

	default:
		grade = 'E';
	}
	printf("grade:%c\n", grade);

	grade = ((score >= 90) ? 'A' : ((score >= 80) ? 'B' : ((score >= 70) ? 'C' : ((score >= 60) ? 'D' : 'E'))));
	printf("grade:%c\n", grade);

	return (0);
}
