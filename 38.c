// t38
// 有一段英文字符串“I am a student.My age is 18.His age is 19.”
// 统计该英文字符串中 字母个数 和 数字个数，输出结果

// 字母个数 26
// 数字个数 4

#include <stdio.h>

int main()
{
	int numCot = 0, lettCot = 0, LETTCot = 0, i = 0;
	char a[100] = "I am a student.My age is 18.His age is 19.";

	for (i = 0; i < 100; i++)
	{
		if ((a[i] <= '9') && (a[i] >= '0')) {
			numCot++;
		}
		if ((a[i] <= 'z') && (a[i] >= 'a')) {
			lettCot++;
		}
		if ((a[i] <= 'Z') && (a[i] >= 'A')) {
			LETTCot++;
		}
	}

	printf("字母个数:%d\n", lettCot+LETTCot);
	printf("数字个数:%d\n", numCot);

	return (0);
}
