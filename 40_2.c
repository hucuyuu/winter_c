// t40
// 有英文字符串 s1=" This is a sample program and sample data."，s2="sample"，
// 请在 s1 串 中查找 s2 串，输出其在 s1 中的位置 12 31
// 输出是 s2 首字母在 s1 中的位置

#include <stdio.h>
#include <string.h>

int main()
{
	int cot = 0; // cot 是 s2 在 s1 中出现次数
	char *p = NULL;
	char s1[] = " This is a sample program and sample data.";
	char s2[] = "sample";

	p = strstr(s1, s2); // strstr()返回s2第一次在s1中出现的指针

	while (p)
	{
		cot++;
		printf("%d\n", p-s1+1);
		p = p+strlen(s2);
		p = strstr(p, s2);
	}

	if (cot == 0) {
		printf("没有s2\n");
	}

	return (0);
}
