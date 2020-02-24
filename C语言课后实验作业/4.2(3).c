#include <stdio.h>

int main()
{
	int month = 0, year = 0;

	scanf("%d %d", &month, &year);

	if ((month < 1) || (month > 12) || (year < 1)) {
		printf("输入数据不合法\n");
	}else if ((month == 2) || ((year%400 == 0) || ((year%100 != 0) && (year%4 == 0)))) {
		printf("%d\n", 29);
	}else if (month == 2) {
		printf("%d\n", 28);
	}else if ((month == 4) || (month == 6) || (month == 9) || (month == 11)) {
		printf("%d\n", 30);
	}else{
		printf("%d\n", 31);
	}

	return (0);
}
