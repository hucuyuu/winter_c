// （1）编写一个程序，判断一个字符串是否是回文字符串。所谓回文字符串就是正读和反读都一样的字符串。例如，"agpga"是一个回文字符串。

#include <stdio.h>
#include <string.h>

int ifHuiwen(char s[])
{
	int l = 0;
	int r = strlen(s)-1;

	while (l <= r)
	{
		if (s[l] != s[r]) {
			return (0);
		}
		l++;
		r--;
	}

	return (1);
}


int main()
{
	char a[20] = "agpga";

	if (ifHuiwen(a)) {
		printf("%s is Huiwen number.\n", a);
	}else {
		printf("%s is not Huiwen number.\n", a);
	}
	return (0);
}
