// 实验6.1第(8)小题：编写程序模拟手算乘法（大数乘法），输入两个十位整数，将乘积输出。
// 提示：用32位二进位表示无符号整数的最大值是4294967295。对于乘法计算，
// 当数值较大时会产生溢出。为了完成高精度乘法运算，
// 可以用三个整型数组a1[LEN]，a2[LEN]，a3[2*LEN]分别存放两个乘数和积，其中LEN为乘数的位数，每个数组元素存放十进制表示的正整数的一个数字位，如a1[0]存储个位，a1[1]存储十位，其他位以此类推。乘法运算与手算乘法一样，将乘数每位数字相乘加上一步的进位，保留运算结果的个位数，将十位数进给高位，重复计算至所有数字相乘完毕。可以使用计算器验证。
// 请认真测试程序的正确性。将源代码以文本方式提交，不要直接提交文件。

#include <stdio.h>
#include <string.h>

int p(int n[])
{
	for (int i = 99; i > 0; i--)
	{
		printf("%d", n[i]);
	}
	printf("\n");

	return (0);
}


int main()
{
	char a1[100] = { 0 }, b1[100] = { 0 };
	int a[100] = { 0 }, b[100] = { 0 }, c[100] = { 0 }, lena, lenb, lenc, i, j, x;


	// 输入 a1 和 b1
	scanf("%s", a1);
	scanf("%s", b1);

	lena = strlen(a1);
	lenb = strlen(b1);

	for (i = 0; i < lena; i++)
	{
		a[lena-i] = a1[i] -48;
	}
	for (i = 0; i < lenb; i++)
	{
		b[lenb-i] = b1[i] -48;
	}

	// 人工乘法环节
	for (i = 1; i <= lena; i++)
	{
		x = 0;
		for (j = 1; j <= lenb; j++)
		{
			c[i+j-1] = a[i]*b[j] + x + c[i+j-1];
			x = c[i+j-1]/10;
			c[i+j-1] %= 10;
		}
		c[i+lenb] = x;
	}

	// 删除前导 0
	lenc = lena+lenb;
	while (c[lenc] == 0 && lenc > 1)
	{
		lenc--;
	}

	for (i = lenc; i > 0; i--)
	{
		printf("%d", c[i]);
	}
	printf("\n");

	return (0);
}
