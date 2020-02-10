// t41
// 有英文字符串
// s1=" This is a sample program and sample data."，s2="sample"，s3="real"，
// 请在 s1 串中查找 s2 串，并用 s3 替换 s1 中出现的 s2 串
// 参考文档：
// https://blog.csdn.net/bufanq/article/details/51567454

#include <stdio.h>
#include <string.h>

void debug(char *i)
{
	printf("\n");
	puts(i);
}


int replace(char *s4, char *s5, char *s6)       // 用 s6 替换 s4 中出现的第一个 s5 串，有三种情况
{
	char i = 0;                             // 打工仔变量

	printf("s4a:%s\n", s4);
	if (strlen(s6)-strlen(s5) > 0) {        // s4 后移
		for (i = 0; i < strlen(s4); i++)
		{
			// *(s4+strlen(s4)+strlen(s6)-strlen(s5)-i) = *(s4+strlen(s4)-i);
			// debug(s4);
		}
		// debug(s4);
	}else if (strlen(s6)-strlen(s5) < 0) { // s5 前移
		// debug(s4);
		// s4 = s4 + 1;
		// debug(s4);
	}

	for (i = 0; i < strlen(s6); i++)
	{
		*(s4+i) = *(s6+i);
	}

	printf("s4z:%s\n", s4);
	return (0);
}


char *find(char *s7, char *s8) // 返回 s8 在 s7 中首字母的指针

{
	int i = 0, j = 0;

	if (strlen(s8) <= 0) {
		return (NULL);
	}

	while (*(s7+i))                 // 遍历 s7
	{
		if (*(s7+i) == s8[j]) { // 比较 s+i 与 s8[0] 是否相同，如果相同使 j++ ，在下一次 while 中比较 s+i 与 s8[j]
			j++;
		}else {
			j = 0;                  // 如果 s+i 与 s8[j] 不同，使 j=0 ，重新开始比较 s+i 与 s8[0]
		}
		if (j == strlen(s8)) {          // s8 存在于 s7 条件： s 中所有字符得到比较
			return (s7+i-j+1);      //返回 s8 首字母在 s7 中的位置
		}
		i++;                            // 遍历 s7
	}

	return (NULL);                  // 没找到，返回一个空指针
}


int main()
{
	char s1[] = " This is a sample program and sample data.";
	char s2[] = "sample";
	char s3[] = "reall";
	int cot = 0; // 计数菌
	char *p;

	printf("origin:%s\n", s1);

	p = find(s1, s2);

	while (p)
	{
		cot++;
		// printf("p1:%s\n", p);
		// replace(p, s2, s3);
		// printf("p2:%s\n", p);
		p = p + strlen(s3);
		// printf("p3:%s\n", p);
		p = find(p, s2);
		// printf("p4:%s\n", p);
	}

	printf("cot:%d\nmodified:%s\n", cot, s1);


	return (0);
}
