// （4）编写一个程序，将一个由数字构成的字符串转换成一个整型数。例如："1234"-->1234 。

# include <stdio.h>
# include <string.h>
# include <math.h>

int convert(char s[])
{
	int n = 0;
	int i;

	for (i = 0; i < strlen(s); i++)
	{
		n += (s[i]-48)*pow(10, strlen(s)-i-1);
	}

	return (n);
}


int main()
{
	char s1[10] = "11234";

	printf("%d\n", convert(s1));

	return (0);
}
