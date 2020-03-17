// 21.
// 百钱买百鸡：公鸡一个五块钱，母鸡一个三块钱，小鸡三个一块钱，现在要用一百
// 块钱买一百只鸡，问公鸡、母鸡、小鸡各多少只？
// 提示：有4种结果：
// 公鸡  0 只，母鸡 25 只，小鸡 75 只
// 公鸡  4 只，母鸡 18 只，小鸡 78 只
// 公鸡  8 只，母鸡 11 只，小鸡 81 只
// 公鸡 12 只，母鸡  4 只，小鸡 84 只
// 请认真测试程序的正确性。将源代码以文本方式提交，不要直接提交文件。

# include <stdio.h>

int main()
{
	int i = 0, j = 0, k = 0;

	for (i = 0; i < 20; i++)
	{
		for (j = 0; j < 33; j++)
		{
			for (k = 0; k < 300; k += 3)
			{
				if ((i*5+j*3+k/3 == 100) && (i+j+k == 100)) {
					printf("%d\t%d\t%d\n", i, j, k);
				}
			}
		}
	}

	return (0);
}
