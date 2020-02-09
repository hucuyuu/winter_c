// t40
// 有英文字符串 s1=" This is a sample program and sample data."，s2="sample"，
// 请在 s1 串 中查找 s2 串，输出其在 s1 中的位置 12 31

#include <stdio.h>
#include <string.h>

int main()
{
	int count = 0;
	char *p = NULL;
	char s1[] = " This is a sample program and sample data.";
	char s2[] = "sample";

	p = strstr(s1, s2);

	while (p)
	{
		count++;
		printf("%d\n", p-s1+1);
		p = p+strlen(s2);
		p = strstr(p, s2);
	}

	return (0);
}
