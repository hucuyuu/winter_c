// t41
// 有英文字符串
// s1=" This is a sample program and sample data."，s2="sample"，s3="real"，
// 请在 s1 串中查找 s2 串，并用 s3 替换 s1 中出现的 s2 串
// 参考文档：
// https://blog.csdn.net/bufanq/article/details/51567454

#include <stdio.h>
#include <string.h>

char *find(char *s1, char *s2) // 返回 s2 在 s1 中首字母的指针

{
	int i = 0, j = 0;

	if ((strlen(s2) <= 0) || (strlen(s1) < strlen(s2))) {
		return (NULL); // 不用找了
	}

	while (*(s1+i))                 // 遍历 s1
	{
		if (*(s1+i) == s2[j]) { // 比较 s+i 与 s2[0] 是否相同，如果相同使 j++ ，在下一次 while 中比较 s+i 与 s2[j]
			j++;
		}else {
			j = 0;                  // 如果 s+i 与 s2[j] 不同，使 j=0 ，重新开始比较 s+i 与 s2[0]
		}
		if (j == strlen(s2)) {          // s2 存在于 s1 条件： s 中所有字符得到比较
			return (s1+i-j+1);      //返回 s2 首字母在 s1 中的位置
		}
		i++;                            // 遍历 s1
	}

	return (NULL);                  // 没找到，返回一个空指针
}


int replaceFirst(char *s1, char *s2, char *s3)  // 抹去 s1 中前 strlen(s2) 个字符， 然后使 s1 后移或前移把 s3 补在 s1 最前面
{
	int i = 0;                              // 打工仔变量
	int lens1 = strlen(s1);
	int lens2 = strlen(s2);
	int lens3 = strlen(s3);

	if (lens3-lens2 > 0) {        // s1 后移
		for (i = 0; i < lens1-lens2+1; i++)
		{
			*(s1+lens1+lens3-lens2-i) = *(s1+lens1-i);
		}
	}else if (lens3-lens2 < 0) { // s1 前移
		for (i = 0; i < lens1-lens3+1; i++)
		{
			*(s1+lens3+i) = *(s1+i+lens2);
		}
	}

	for (i = 0; i < lens3; i++) // 实现 strncpy()
	{
		*(s1+i) = *(s3+i);
	}

	return (0);
}


int replaceAll(char *s1, char *s2, char *s3)// 用 s3 替换 s1 中出现的所有 s2
{
	int cot = 0;
	char *p = NULL;         // 工具人指针

	p = find(s1, s2);       // 找 s2,找到一个替换一个
	while (p)
	{
		cot++;
		replaceFirst(p, s2, s3);
		p = p + strlen(s3);
		p = find(p, s2); // s1 剩余部分找 s2
	}

	return (cot);
}


int main()
{
	char s1[500] = " This is a sample program and sample data."; // 因为 s1 可能会被加长，先加上 500
	char s2[] = "sample";
	char s3[] = "real";
	int cot = 0;    // 计数菌

	printf("origin:\"%s\"\n", s1);
	printf("s2:\"%s\"\n", s2);
	printf("s3:\"%s\"\n", s3);

	cot = replaceAll(s1, s2, s3);

	printf("cot:%d\nmodified:\"%s\"\n", cot, s1);

	return (0);
}
