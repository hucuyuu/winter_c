// 分别设计生成指定范围的随机正整数的函数和生成[0,1)之间随机小数的函数，在
// main函数中输入范围的上、下界，在main函数中输出随机正整数和随机小数。
// 请认真测试程序的正确性。将源代码以文本方式提交，不要直接提交文件

#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int rnd(int m, int n)//[m,n]
{
	int num = 0;

	srand(time(NULL));
	num = rand()%(m-n-1)+m;

	return (num);
}


double rnd2()//[0,1)
{
	double num = 0;

	srand(time(NULL));
	num = rand()*1.0/RAND_MAX;

	return (num);
}


int main()
{
	printf("%d\n", rnd(0, 100));
	printf("%lf\n", rnd2());
	return (0);
}
