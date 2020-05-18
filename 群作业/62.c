// 62.
// 编程题
// 在main函数中输入一个小于100个字符的英文句子和一个单词，
// 编写返回指针的函数实现将句子中的该单词删除后返回字符串。
// 在main函数中调用函数并将删除单词后的字符串显示出来。
// 【测试数据与运行结果】
// 测试数据： 英文句子： "this is a test string"
//            单词： "test"
//     输出： this is a  string
// 请认真测试程序的正确性。将源代码以文本方式提交，不要直接提交文件。
#include <stdio.h>
#include <conio.h>
#include <string.h>

char *findreplace(char *s1, char *s2, char *s3)
{
	int i, j, k = 0;
	char temp[100];

	for (i = 0; s1[i] != '\0'; i++)
	{
		for (j = i, k = 0; s2[k] == '\0' || s1[j] == s2[k]; j++, k++)
		{
			if (s2[k] == '\0') {
				strcpy(temp, &s1[j]);
				strcpy(s1+i, s3);
				i = i+strlen(s3);
				strcpy(s1+i, temp);
				k = 0;
			}
		}
	}
	return (s1);
}


int main()
{
	char s1[100] = "this is a test string";
	char s2[20] = "test", s3[10] = "";

	puts(findreplace(s1, s2, s3));

	return (0);
}
