// 60.
// 编程题
// 将未在字符串s中出现而在字符串t中出现的字符形成一个新的字符串放在u中，
// u中字符按原字符串中字符顺序排列，不去掉重复字符。
// 测试数据：
// s：ABCDE， t：BDFGG
// 运行结果：FGG
// 请认真测试程序的正确性。将源代码以文本方式提交，不要直接提交文件。
// 【算法提示】
// 设计函数void fun(char *s, char *t, char *u)实现要求的功能，函
// 数以字符指针作为参数，通过指针移动进行字符比较：
// 设置两个字符指针p和q，p指针指向t串，q指针指向s串；
// 通过移动指针p和q，将t串中的一个字母与s中的每个字母进行比较，
// 若有相同的，则中断，再看t中的下一个，直到最后都没有相同的，放入u中。
#include <stdio.h>
#include <string.h>
#define    MAX    10

void fun(char *s, char *t, char *u)
{
	int i = 0;
	int j = 0;
	int k = 0;
	char *p = t;
	char *q = s;

	for (i = 0; i < strlen(t); i++)
	{
		for (j = 0; j < strlen(s); j++)
		{
			if (*(p+i) == *(q+j)) {
				break;
			}
		}
		if (j == strlen(s)) {
			u[k] = *(p+i);
			k++;
		}
	}
}


int main()
{
	char s[MAX] = "ABCDE";
	char t[MAX] = "BDFGG";
	char u[MAX] = { '\0' };

	fun(s, t, u);
	printf("%s\n", u);

	return (0);
}
