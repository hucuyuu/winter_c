// 64.
// 编程题
// 编写main函数，声明结构数组a、b并用测试数据初始化
// （a、b数组中数据按成员id值升序存储；
// 显示a,b数组中数据(显示数组数据调用display函数完成，下同)；
// 调用delete函数从a数组中删除在b数组中重复出现的联系人信息，显示a数组中数据
// ；调用merge函数将a数组中全部联系人信息合并到b数组，显示b数组中数据；
// 调用sort函数对a数组中数据排序，显示a数组中数据。
// 【测试数据】
// a数组：
// {101, "tom","m"},
// {103,"mary","f"},
// {104,"mark","m"},
// {105,"julia","f"},
// {106, "sara","f"}
// b数组：
// {102, "mark","m"},
// {104,"mark","m"}
// 【输出结果】
// a:
// ID      NAME    SEX
// 101     tom     m
// 103     mary    f
// 104     mark    m
// 105     julia   f
// 106     sara    f
// b:
// ID      NAME    SEX
// 102     mark    m
// 104     mark    m
// a:
// ID      NAME	SEX
// 101     tom     m
// 103     mary    f
// 105     julia    f
// 106     sara    f
// b:
// ID      NAME	SEX
// 101     tom     m
// 102     mark    m
// 103     mary    f
// 104     mark    m
// 105     julia    f
// 106     sara    f
// a:
// ID	NAME	SEX
// 105     julia    f
// 103     mary    f
// 106     sara     f
// 101     tom     m
// 请认真测试程序的正确性。将源代码以文本方式提交，不要直接提交文件。

#include <stdio.h>
#include <string.h>

struct Student {
	int	id;
	char	name[10];
	char	sex[2];
};

int ifEqual(struct Student stu1, struct Student stu2)
{
	if (stu1.id != stu2.id) {
		return (-1);
	}
	if (strcmp(stu1.name, stu2.name)) {
		return (-1);
	}
	if (strcmp(stu1.sex, stu2.sex)) {
		return (-1);
	}
	return (1);
}


int delete(struct Student stu[], int del_id, int n)
{
	int i;

	for (i = del_id; i < n-1; i++)
	{
		stu[i] = stu[i+1];
	}

	return (n-1);
}


void display(struct Student stu[], int n, char c)
{
	int i;

	printf("%c:\n", c);
	printf("ID\tNAME\tSEX\n");
	for (i = 0; i < n; i++)
	{
		printf("%d\t%s\t%s\n", stu[i].id, stu[i].name, stu[i].sex);
	}
}


int insert(struct Student stu[], struct Student stu1, int ins_id, int n)
{
	int i;

	for (i = n; i > ins_id; i--)
	{
		stu[i] = stu[i-1];
	}
	stu[i] = stu1;

	return (n+1);
}


int merge(struct Student stu1[], int n1, struct Student stu2[], int n2)
{
	int i, j;

	for (i = 0; i < n1; i++)
	{
		for (j = 0; j < n2; j++)
		{
			if (ifEqual(stu1[i], stu2[j]) == 1) {
				break;
			}
			if (j == n2-1) {
				n2 = insert(stu2, stu1[i], n2, n2);
				break;
			}
			if (stu1[i].id < stu2[0].id) {
				n2 = insert(stu2, stu1[i], 0, n2);
				break;
			}

			if ((stu1[i].id < stu2[j+1].id) && (stu1[i].id > stu2[j].id)) {
				n2 = insert(stu2, stu1[i], j+1, n2);
				break;
			}
		}
	}

	return (n2);
}


void sort(struct Student stu[], int stu_sum)
{
	int i, j;
	struct Student temp;

	for (i = 0; i < stu_sum-1; i++)
	{
		for (j = 0; j < stu_sum-i-1; j++)
		{
			if (strcmp(stu[j].name, stu[j+1].name) > 0) {
				temp = stu[j];
				stu[j] = stu[j+1];
				stu[j+1] = temp;
			}
		}
	}
}


int main()
{
	int i, j;
	int a_sum = 5, b_sum = 2;
	struct Student a[10] = { { 101, "tom",	 "m" },
				 { 103, "mary",	 "f" },
				 { 104, "mark",	 "m" },
				 { 105, "julia", "f" },
				 { 106, "sara",	 "f" } };
	struct Student b[10] = { { 102, "mark", "m" },
				 { 104, "mark", "m" } };

	// 显示a,b数组中数据(显示数组数据调用display函数完成，下同)
	display(a, a_sum, 'a');
	display(b, b_sum, 'b');
	// 调用delete函数从a数组中删除在b数组中重复出现的联系人信息，显示a数组中数据
	for (i = 0; i < a_sum; i++)
	{
		for (j = 0; j < b_sum; j++)
		{
			if (ifEqual(a[i], b[j]) == 1) {
				a_sum = delete(a, i, a_sum);
			}
		}
	}
	display(a, a_sum, 'a');
	// 调用merge函数将a数组中全部联系人信息合并到b数组，显示b数组中数据
	b_sum = merge(a, a_sum, b, b_sum);
	display(b, b_sum, 'b');
	// 调用sort函数对a数组中数据排序，显示a数组中数据
	sort(a, a_sum);
	display(a, a_sum, 'a');

	return (0);
}
