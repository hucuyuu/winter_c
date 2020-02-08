// t40
// 有英文字符串 s1=" This is a sample program and sample data."，s2="sample"，
// 请在 s1 串 中查找 s2 串，输出其在 s1 中的位置 12 31

#include "stdio.h"

int main()
{
	char *s;
	int i = 0, j = 0;
	char s1[] = " This is a sample program and sample data.";
	char s2[] = "sample";

	s = &s1[0];

	while (*(s+i) != '\0')
	{
		if (*(s+i) == s2[j]) {
			j++;
		}else {
			if (j+1 == sizeof(s2)) {
				printf("%d~%d\n", i-j+1, i); //
			}
			j = 0;
		}
		i++;
	}

	return (0);
}
