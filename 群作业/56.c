// 56.
// 程序改错：
// 【要求】
// 1.按以下程序功能改正程序的错误。
// 2.可以修改语句中的一部分内容，调整语句次序，增加变量声明或编译预处理命令，但不能增加其他语句，也不能删去整条语句。
// 【程序功能】
//    以下程序中函数cutpaste功能是将line指向的数组中
// 从下标为source开始的连续len个字符作为一个子串复制到一个临时数组中，
// 并将这些字符从line指向的数组中删除；
// 再将临时数组中子串追加到line指向数组中字符串的尾部。
// 【测试数据与运行结果】
//     测试字符串："this is a test."
//                 source=5, len=2
//           输出：this a test. is
// 【含有错误的源程序】
#include <stdio.h>
#include <conio.h>
#include <string.h>

void cutpaste(char *line, int source, int len)
{
	char t[20];
	int i, length = strlen(line);

	if (source >= length) {
		return;
	}
	for (i = 0; i < len && i < 20 && source+i < length; i++)
	{
		t[i] = line[source+i];
	}
	t[i++] = '\0';
	strcpy(&line[source], &line[source+i]);
	strcpy(&line[strlen(line)], t);
}


int main()
{
	char line[80] = "this is a test.";

	cutpaste(line, 5, 2);
	puts(line);
	getch();
	return (0);
}


// 请改正并认真测试程序的正确性。将源代码以文本方式提交，不要直接提交文件。
// ok
