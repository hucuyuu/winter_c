#include<stdio.h>

int a[10] = { 1, 5, 9, 15, 22, 25, 26, 27, 60, 100}; // 目标数组

int binarySearch(int a[], int k); // k 是要找的数

int main()
{
        int res, i;

        for(i = 0; i < 10; i ++)
        {
                printf("%d\n", a[i]);
        }

        res = binarySearch(a, 0);
        printf("%d\n", res);
        return 0;
}

int binarySearch(int a[], int k)
{

        int mid = 0, left = 0, right = 9;
        mid = left + (right - left)/2;

        while(left <= right)
        {
                mid = left + (right - left)/2;
                if(a[mid] == k) return mid;
                if(a[mid] > k) right = mid - 1;
                if(a[mid] < k) left = mid + 1;

        }
        return -1;
}
