// t40
// 有英文字符串 s1=" This is a sample program and sample data."，s2="sample"，
// 请在 s1 串 中查找 s2 串，输出其在 s1 中的位置 12 31
// 输出是 s2 首字母在 s1 中的位置

#include "stdio.h"

int main()
{
	char *s = NULL;
	int i = 0, j = 0, cot = 0; // cot 是 s2 在 s1 中出现次数
	char s1[] = " This is a sample program and sample data.";
	char s2[] = "sample";

	s = &s1[0];

	while (*(s+i) != '\0')                          // 遍历 s1
	{
		if (*(s+i) == s2[j]) {                  // 比较 s+i 与 s2[0] 是否相同，如果相同使 j++ ，在下一次 while 中比较 s+i 与 s2[j]
			j++;
		}else {                                 // 如果 s+i 与 s2[j] 不同，使 j=0 ，重新开始比较 s+i 与 s2[0]
			if (j+1 == sizeof(s2)) {        // s2 存在于 s1 条件： s 中所有字符得到比较
				cot++;
				printf("%d\n", i-j+1);  //输出 s2 首字母在 s1 中的位置
			}
			j = 0;
		}
		i++;                                    // 遍历 s1
	}

	if (cot == 0) {
		printf("没有s2\n");
	}

	return (0);
}
