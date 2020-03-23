// （7）用递归函数编写汉诺塔游戏。

#include <stdio.h>

void move(int n, char from, char buffer, char to)
{
	if (n == 1) {
		printf("Move from %c to %c \n", from, to);
	}else {
		move(n-1, from, to, buffer);
		move(1, from, buffer, to);
		move(n-1, buffer, from, to);
	}
}


int main()
{
	move(3, 'a', 'b', 'c');
	return (0);
}
