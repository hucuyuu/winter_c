// 41.
// 实验6.4第(5)小题：求[500,800]区间内的素数。
// ① 编写函数int countvalue(int aa[])，其功能是求出500~800区间内的素数以及素数的个数cnt，
// 将这些素数按从小到大的顺序依次存入aa指向的数组中，函数返回cnt的值。
// ② 编写main函数，调用countvalue函数，将找到的所有素数输出（每行十个）。
// 输出结果：
//    503   509   521   523   541   547   557   563   569   571
//    577   587   593   599   601   607   613   617   619   631
//    641   643   647   653   659   661   673   677   683   691
//    701   709   719   727   733   739   743   751   757   761
//    769   773   787   797
// 请认真测试程序的正确性。将源代码以文本方式提交，不要直接提交文件。

#include <stdio.h>
#include <math.h>

int ifPrime(int n)
{
	int i = 0;

	for (i = 2; i <= sqrt(n); i++)
	{
		if (n%i == 0) {
			return (0);
		}
	}
	return (1);
}


int countvalue(int aa[])
{
	int n = 0;
	int cot = 0;

	for (n = 500; n <= 800; n++)
	{
		if (ifPrime(n) == 1) {
			cot++;
			aa[cot-1] = n;
		}
	}

	return (cot);
}


int main()
{
	int i = 0;
	int cot = 0;
	int a[100] = { 0 };

	cot = countvalue(a);

	for (i = 0; i < cot; i++)
	{
		printf("%5d", a[i]);
		if ((i+1)%10 == 0) {
			printf("\n");
		}
	}
	printf("\n");

	return (0);
}
