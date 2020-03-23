// （3）c

#include <stdio.h>

int tool1(int n)
{
	if (n == 0) {
		return (0);
	}
	printf("%d\n", n%10);
	tool1(n/10);
}


int tool2(int n)
{
	if (n == 0) {
		return (0);
	}
	tool2(n/10);
	printf("%d\n", n%10);
}


int main()
{
	tool1(1234506780);
	tool2(1234506780);

	return (0);
}
