// 69.
// 编程题（难）
// 编写一个程序，统计多个C源程序文件中的有效代码行的总数（排除注释和空行）并输出。

// 不会写

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{
	int i = 0;
	int cot_slash = 0;
	int if_comment_slash = 0;
	int if_comment_star = 0;
	int sum_line = 0;
	char ch;

	FILE *fp;

	if ((fp = fopen("001.c", "r")) == NULL) {
		printf("Can not open file\n");
		exit(1);
	}

	do
	{
		ch = fgetc(fp);

		i++;
		if (ch == '/') {
			cot_slash++;
		}
		if ((cot_slash == 2) && (i == 2)) {
			if_comment_slash = 1;
		}

		if ((ch == '*') && (cot_slash == 1)) {
			if_comment_star = 1;
		}

		if ((ch == '\n') && (i-1 > 0) && (if_comment_slash == 0)) {
			sum_line++;
			printf(" %d", sum_line);
		}
		if (ch == '\n') {
			i = 0;
			cot_slash = 0;
			if_comment_slash = 0;
		}
		if ((ch == EOF) && (i-1 > 0)) {
			sum_line++;
			printf(" %d", sum_line);
		}
		putchar(ch);
	} while (ch != EOF);

	printf("\nsum_line:%d\n", sum_line);

	if (fclose(fp)) {
		printf("Can not close file\n");
	}

	return (0);
}
