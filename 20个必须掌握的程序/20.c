// 20.文本文件基本操作

#include <stdio.h>
#include <stdlib.h> // 用于exit(1)

int main()
{
	FILE *fp;
	char ch;

	if ((fp = fopen("list.c", "r")) == NULL) { // 注意((fp = fopen("1.c", "r")) 加括号
		printf("Can NOt open file!\n");
		exit(1);
	}

	ch = fgetc(fp);
	while (feof(fp) == 0)
	{
		putchar(ch);
		ch = fgetc(fp);
	}

	if (fclose(fp)) {
		printf("Can NOt close file!\n");
		exit(1);
	}
}
