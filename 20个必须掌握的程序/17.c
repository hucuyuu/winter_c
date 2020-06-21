// 17.回文数(书P139)

#include <stdio.h>
#include <string.h>
#define MAX    50
int cycle(char s[]);

int main()
{
	char s[MAX];

	puts("Input string:");
	gets(s);

	if (cycle(s)) {
		printf("%s is cycle.\n", s);
	}else {
		printf("%s is not cycle.\n", s);
	}

	return (0);
}


int cycle(char s[])
{
	int i, j;

	for (i = 0, j = strlen(s)-1; i < j; i++, j--)
	{
		if (s[i] != s[j]) {
			return (0);
		}
	}

	return (1);
}
