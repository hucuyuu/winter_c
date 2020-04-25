// 44.
// 完善程序:【下面程序功能】：将一个二维数组中存储的5个字符串按照字典序反序排列后输出。
// 【待完善的源程序】
#include <stdio.h>
#include <string.h>
#define M	10
#define N	20
// void sort( _________ ,int m)
void sort(char str[][N], int m)
{
	int i, j;
	char s[N], maxi;

	// for (i=0;i< _________;i++)
	for (i = 0; i < m; i++)
	{
		maxi = i;
		for (j = i+1; j < m; j++)
		{
			// if(_________<0)
			if (strcmp(str[maxi], str[j]) < 0) {
				maxi = j;
			}
		}
		if (maxi != i) {
			strcpy(s, str[i]);
			strcpy(str[i], str[maxi]);
			// strcpy( _________ , s );
			strcpy(str[maxi], s);
		}
	}
}


int main()
{
	int i;
	char str[M][N] = { "c", "fortran", "java", "python", "matlab" };

	sort(str, 5);
	for (i = 0; i < 5; i++)
	{
		printf("%s\n", str[i]);
	}
	return (0);
}


// 【测试数据与运行结果】
//     测试数据："c","fortran","java","python","matlab"
//         输出：
//                python
//                matlab
//                java
//                fortran
//                c
// 请完善并认真测试程序的正确性。将源代码以文本方式提交，不要直接提交文件。
