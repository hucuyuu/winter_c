// 15.二分查找（书P123）
// Input 10 Numbers in ascending order: 75 80 85 87 89 90 92 94 96 98
// The grades to check: 87
// The grades is at the 4 positon.

#include <stdio.h>

int main()
{
	int a[10];
	int left = 0, right = 9, flag = 0, mid, grade; // flag判断是否找到成绩
	int i;

	printf("Input 10 Numbers in ascending order: ");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("The grades to check: ");
	scanf("%d", &grade);

	while (left <= right)
	{
		mid = (left+right)/2;
		if (grade == a[mid]) {
			flag = 1;
			break;
		}
		if (a[mid] > grade) {
			right = mid -1;
		}else{
			left = mid +1;
		}
	}

	if (flag) {
		printf("The grades is at the %d positon.\n", mid + 1);
	}else{
		printf("Grades no found.\n");
	}

	return (0);
}
