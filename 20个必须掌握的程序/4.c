// 4.字母大小写转换，以及ASCII码转换(书P45）

#include <stdio.h>

int main()
{
	char a = 'a';
	char b = 'b';

	printf("%c\n", a);
	printf("%c\n", a >= 'a' && a <= 'z' ? a-('a'-'A') : a+32);
	printf("%c\n", b);
	printf("%c\n", b >= 'a' && b <= 'z' ? b-('a'-'A') : b+32);

	return (0);
}
