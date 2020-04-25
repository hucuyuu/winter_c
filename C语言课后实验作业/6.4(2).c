// 40.
// 实验6.4第(2)小题：设计一个函数，在有序的整数数组中，折半查找指定关键值的下标，在main()函数中调用之并输出。
// 请认真测试程序的正确性。将源代码以文本方式提交，不要直接提交文件。

#include <stdio.h>
#include <string.h>
int binary_search(int arr[], int l, int r, int k)
{
	int left = l;
	int right = r;

	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (arr[mid] == k) {
			return (mid);
		}else if (arr[mid] <= k) {
			left = mid + 1;
		}else {
			right = mid - 1;
		}
	}
	return (-1);
}


int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 12 };
	int ret = binary_search(arr, 0, 9, 12);

	if (ret == -1) {
		printf("没有找到\n");
	}else {
		printf("找到了，下标为：%d\n", ret);
	}
	return (0);
}
