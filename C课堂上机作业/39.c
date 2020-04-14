// t39
// 有一段英文字符串“I am a student.My age is 18.His age is 19.”
// 统计该英文字符串中单词个数，输出结果

// 一共有12个单词

#include <stdio.h>

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
