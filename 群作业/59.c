// 59.
// 编程题
// 在所给的10个单词中找出不包含元音字母（a,e,i,o,u）的单词，
// 将符合条件的单词的个数以及这些单词按照ASCII字典顺序输出。
// ⑴ 编写函数int FindNoVowel(char *str[],int num,char res[][20])，
// str指向的指针数组中保存若干单词字符串的首地址，num保存单词的个数，
// res指向的数组保存找到的符合条件的单词字符串，每行存放一个单词，
// 要求将符合条件的单词按字典顺序存储，函数返回符合条件的单词个数。
// ⑵ 编写main()函数，声明数组并用测试数据初始化数组，调用函数FindNoVowel，
// 将符合条件的所有单词按字典顺序输出，单词之间用空格隔开。
// 测试数据，10个字符串为：
// "ftp","qq","msn","internet","web","google","bbs","mp3","blog","ibm"
// 运行结果：
// bbs  ftp  mp3  msn  qq
// 请认真测试程序的正确性。将源代码以文本方式提交，不要直接提交文件。

#include <stdio.h>
#include <string.h>

int FindNoVowel(char *str[], int num, char res[][20])
{
	int i = 0, j = 0, cot = 0;

	char temp[20] = { '\0' };

	for (i = 0; i < num; i++)
	{
		for (j = 0; j < strlen(str[i]); j++)
		{
			if (str[i][j] == 'a') {
				break;
			}else if (str[i][j] == 'e') {
				break;
			}else if (str[i][j] == 'i') {
				break;
			}else if (str[i][j] == 'o') {
				break;
			}else if (str[i][j] == 'u') {
				break;
			}
		}
		if (j == strlen(str[i])) {
			strcpy(res[cot++], str[i]);
		}
	}

	for (i = 0; i < cot; i++)
	{
		for (j = i; j < cot; j++)
		{
			if (strcmp(res[i], res[j]) > 0) {
				strcpy(temp, res[j]);
				strcpy(res[j], res[i]);
				strcpy(res[i], temp);
			}
		}
	}
	return (cot);
}


int main()
{
	char str[10][20] = { "ftp", "qq", "msn", "internet", "web", "google", "bbs", "mp3", "blog", "ibm" };
	char res[10][20] = { 0 };
	int num_str = 10;
	int num_res = 0;
	int i = 0;

	char *p[20] = { str[0], str[1], str[2], str[3], str[4], str[5], str[6], str[7], str[8], str[9] };

	num_res = FindNoVowel(p, num_str, res);
	for (i = 0; i < num_res; i++)
	{
		printf("%s ", res[i]);
	}
	printf("\n");
	return (0);
}
