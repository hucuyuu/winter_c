// t39
// 有一段英文字符串“I am a student.My age is 18.His age is 19.”
// 统计该英文字符串中单词个数，输出结果

// 一共有10个单词

#include <stdio.h>

int countWord(char *a)
{
	char *s = a;
	int wordCot = 0;


	for ( ; *s; s++)
	{
		if (((*s >= 'a') && (*s <= 'z')) || ((*s >= 'A') && (*s <= 'Z'))) {
			s++;
			if (!((*s >= 'a') && (*s <= 'z')) || ((*s >= 'A') && (*s <= 'Z'))) {
				wordCot++;
			}
			s--;
		}
	}
	return (wordCot);
}


int main()
{
	int wordCot = 0;
	char a[100] = "I am a student.My age is 18.His age is 19.";

	// puts(a);
	wordCot = countWord(a);
	printf("%d\n", wordCot);

	return (0);
}
