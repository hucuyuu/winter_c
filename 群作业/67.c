// 67.
// 编程题
// 编写一个程序，将递增的两个整数单链表合并成一个新的链表，合并后的链表依然保持递增有序，输出合并后的链表。
// 请认真测试程序的正确性。将源代码以文本方式提交，不要直接提交文件。

#include <stdio.h>
#include <stdlib.h>

struct Node {
	int		data;
	struct Node *	next;
};

typedef struct Node node;

void Free(node *head)
{
	node *freeNode;

	while (NULL != head)
	{
		freeNode = head;
		head = head->next;
		free(freeNode);
	}
}


node *creat_arr(int *arr, int n)
{
	node *head = (node *)malloc(sizeof(node));
	node *temp = head;
	int i;

	for (i = 0; i < n; i++)
	{
		node *a = (node *)malloc(sizeof(node));
		a->data = arr[i];
		a->next = NULL;
		temp->next = a;
		temp = temp->next;
	}
	// free(a);

	return (head);
}


node *output(node *head)
{
	node *temp = head;

	temp = temp->next;
	while (temp != NULL)
	{
		printf("%d\n", temp->data);
		temp = temp->next;
	}

	return (0);
}


node *insert(node *p1, node *p2)
{
	int i;
	node *p3 = (node *)malloc(sizeof(node));
	node *temp1 = p1;
	node *temp2 = p2;
	node *temp3 = p3;

	temp1 = temp1->next;
	temp2 = temp2->next;

	for (i = 0; (temp1 != NULL || temp2 != NULL) && i < 2147483647; i++)
	{
		if ((temp1 != NULL) && (i == temp1->data)) {
			node *a = (node *)malloc(sizeof(node));
			a->data = i;
			a->next = NULL;
			temp3->next = a;
			temp3 = temp3->next;
			temp1 = temp1->next;
		}
		if ((temp2 != NULL) && (i == temp2->data)) {
			node *a = (node *)malloc(sizeof(node));
			a->data = i;
			a->next = NULL;
			temp3->next = a;
			temp3 = temp3->next;
			temp2 = temp2->next;
		}
	}
	// free(a);

	return (p3);
}


int main()
{
	int arr1[10] = { 1, 4, 9, 12, 15, 20, 35, 45, 51, 100 };
	int arr2[10] = { 0, 4, 10, 11, 19, 20, 55, 65, 101, 200 };

	node *a1 = creat_arr(arr1, 10);
	node *a2 = creat_arr(arr2, 10);
	node *a3 = insert(a1, a2);

	printf("a1:\n");
	output(a1);
	printf("\na2:\n");
	output(a2);
	printf("\na3:\n");
	output(a3);

	Free(a1);
	Free(a2);
	Free(a3);


	return (0);
}
