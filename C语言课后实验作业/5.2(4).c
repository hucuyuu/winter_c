// （4）编写把十进制正整数转换为S进制(S=2，8，16)数输出的递归函数，在main函数中调用这个函数并输出结果。

int con(int i, int n) // 把十进制的n转换成i进制
{
	if (n == 0) {
		return (0);
	}

	con(i, n/i);

	if ((i == 2) || (i == 8)) {
		printf("%d", n%i);
	}
	if (i == 16) {
		printf("%x", n%i);
	}
}


int main()
{
	con(16, 10);

	return (0);
}
