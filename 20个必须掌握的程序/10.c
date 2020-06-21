// 10.求字符串中字符的个数、各类字符的个数（书P83、130）、单词的个数。

#include <stdio.h>
#include <string.h>
int countWord(char *);

int main()
{
	int digit = 0, letter = 0, other = 0, word = 0;
	char str[50];
	int i, len;

	printf("Please input a string: \n");
	gets(str);
	len = strlen(str);
	for (i = 0; i < len; i++)
	{
		if ((str[i] >= '0') && (str[i] <= '9')) {
			digit++;
		}else if ((str[i] >= 'a') && (str[i] <= 'z') || (str[i] >= 'A') && (str[i] <= 'Z')) {
			letter++;
		}else {
			other++;
		}
	}

	word = countWord(str);
	printf("digit=%d,letter=%d,other=%d,word=%d\n", digit, letter, other, word);

	return (0);
}


int countWord(char *a)
{
	char *s;
	int wordCot = 0, i = 0, r = 0;

	s = &a[0];

	while (*(s+i) != '\0')
	{
		if (((*(s+i) >= 'a') && (*(s+i) <= 'z')) || ((*(s+i) >= 'A') && (*(s+i) <= 'Z')) || ((*(s+i) >= '0') && (*(s+i) <= '9'))) {
			r++;
		}else{
			if (r > 0) {
				wordCot++;
				r = 0;
			}
		}
		i++;
	}
	if (r > 0) {
		wordCot++;
	}

	return (wordCot);
}
