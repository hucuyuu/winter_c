// 66.
// 编程题
// ⑴ 创建一个链表，每个链表结点包括2个成员：1个整数和1个next指针，要求每个节点的整数成员从键盘输入整数值，当输入0表示数据输入结束；
// ⑵ 输出链表中每个结点的数据成员的值。
// 要求使用typedef机制给结点的结构体类型起一个简短的类型名字，并使用这个短类型名来定义变量。
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


int main()
{
	node *head = (node *)malloc(sizeof(node));              //创建一个头结点
	node *temp = head;                                      //声明一个指针指向头结点，用于遍历链表
	int i;

	//生成链表
	while (scanf("%d", &i))
	{
		if (i != 0) {
			node *a = (node *)malloc(sizeof(node));
			a->data = i;
			a->next = NULL;
			temp->next = a;
			temp = temp->next;
		}else{
			break;
		}
	}
	temp = head;// 指向头结点，用于遍历链表
	while (temp != NULL)
	{
		temp = temp->next;
		printf("%d\n", temp->data);
	}
	Free(head);

	return (0);
}
