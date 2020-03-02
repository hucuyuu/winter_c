// （15）编写一个如下菜单程序，要求用户从键盘输入菜单编号，
// 若输入的是“q”，则结束程序运行，否则输出菜单编号，可反复输入菜单编号而不退出程序。
// 1---菜单功能1
// 2---菜单功能2
// 3---菜单功能3
// q---退出

#include <stdio.h>

int main()
{
	char i = '0';

	printf("enter ONE character at a time\n");
	while (1)
	{
		printf("Input i: ");
		i = getchar();
		getchar();  // receive \n
		if (i == '1') {
			printf("%c\n", i);
		}else if (i == '2') {
			printf("%c\n", i);
		}else if (i == '3') {
			printf("%c\n", i);
		}else if (i == 'q') {
			break;
		}
	}
}
