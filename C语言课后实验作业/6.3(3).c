// （3）编写一个程序，实现字符串比较的功能。即用户输入2个字符串，如果字符串1和字符串2相等，则输出0；
// 如果字符串1大于字符串2相等，则输出正数；如果字符串1小于字符串2相等，则输出负数。

#include <stdio.h>
#include <string.h>

int compare(char a[], char b[])
{
	return (strcmp(a, b));
}


int main()
{
	char s1[20] = "Hello";
	char s2[20] = "Hello";

	printf("%d\n", compare(s1, s2));
	return (0);
}
