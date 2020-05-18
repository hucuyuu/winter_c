// 57.
// 程序改错：
// 【程序功能】
// 将两个按字典顺序排序的名字登记表合并，删除重复出现的名字使得每个名字在登记表中只出现一次，
// 输出名字登记表内容。
// 【测试数据与运行结果】
// 输出结果应为：
// chenming jixiang lihua lijian liutian wanger zhanglin zhouqi
// 【含有错误的程序】
#include <stdio.h>
#include <string.h>

int merge(char (*s1)[10], char (*s2)[10], char (*s3)[10])
{
	int n = 0, i = 0, j = 0;
	char t[10];

	while (s1[i][0] && s2[j][0])
	{
		if (strcmp(s1[i], s2[j]) < 0) {
			strcpy(t, s1[i++]);
		}else{
			strcpy(t, s2[j++]);
		}
		while (strcmp(s1[i], t) == 0)
		{
			i++;
		}
		while (strcmp(s2[j], t) == 0)
		{
			j++;
		}
		strcpy(s3[n++], t);
	}
	while (s1[i][0])
	{
		if (strcmp(s1[i], s3[n-1])) {
			strcpy(s3[n++], s1[i++]);
		}else{
			i++;
		}
	}
	while (s2[j][0])
	{
		if (strcmp(s2[j], s3[n-1])) {
			strcpy(s3[n++], s2[j++]);
		}else{
			j++;
		}
	}
	return (n);
}


int main(void)
{
	char s1[10][10] = { "jixiang", "lihua", "lihua", "lijian", "wanger", "zhanglin" };
	char s2[10][10] = { "chenming", "lihua", "lijian", "liutian", "zhouqi", "zhouqi" };
	char s3[20][10] = { 0 };
	int k, n;

	n = merge(s1, s2, s3);
	for (k = 0; k < n; k++)
	{
		puts(s3[k]);
	}
	return (0);
}


// 请改正并认真测试程序的正确性。将源代码以文本方式提交，不要直接提交文件。
// ok
