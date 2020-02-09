// t40
// 有英文字符串 s1=" This is a sample program and sample data."，s2="sample"，
// 请在 s1 串 中查找 s2 串，输出其在 s1 中的位置 12 31
// 输出是 s2 首字母在 s1 中的位置

#include <stdio.h>
#include <string.h>

char *find(char *s1, char *s2) // 返回 s2 在 s1 中首字母的指针
{
	int i = 0, j = 0;

	if (strlen(s2) <= 0) {
		return (NULL);
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


int main()
{
	int cot = 0; // cot 是 s2 在 s1 中出现次数
	char s1[] = " This is a sample program and sample data.\n";
	char s2[] = "sample";
	char *p = NULL;

	p = find(s1, s2);

	while (p)
	{
		cot++;
		printf("%d\n", p-s1+1); // 打印 s2 首字母在 s1 中的位置
		p = p+strlen(s2);
		p = find(p, s2);        // 从新位置开始寻找 s2
	}

	printf("出现次数:%d\n", cot);
	if (cot == 0) {
		printf("没有s2\n");
	}

	return (0);
}
