// 63.
// 编程题
// 有10个学生，每个学生数据包括学号、姓名和成绩，前8个学生的数据采用初始化，
// 后2个学生键盘输入。编写一个程序，将这10个学生的信息按成绩由高到低的顺序排序并保存后输出所有学生的全部信息。
// 请认真测试程序的正确性。将源代码以文本方式提交，不要直接提交文件。

#include <stdio.h>

struct Student {
	int	id;
	char	name[20];
	float	score;
};

int main()
{
	int i, j, temp = 0;
	int range[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	struct Student stu[10] = { { 1, "yigubigu",    86.0 },
				   { 2, "wucibici",    99.0 },
				   { 3, "makabaka",    78.0 },
				   { 4, "tomblin",     12.5 },
				   { 5, "spongebob",   59.5 },
				   { 6, "squarepants", 60.5 },
				   { 7, "tom",	       99.5 },
				   { 8, "jerry",       86.5 } };

	printf("please input stu[%d].id:", 8);
	scanf("%d", &stu[8].id);
	printf("please input stu[%d].name:", 8);
	scanf("%s", stu[8].name);
	printf("please input stu[%d].score:", 8);
	scanf("%f", &stu[8].score);
	printf("please input stu[%d].id:", 9);
	scanf("%d", &stu[9].id);
	printf("please input stu[%d].name:", 9);
	scanf("%s", stu[9].name);
	printf("please input stu[%d].score:", 9);
	scanf("%f", &stu[9].score);


	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9-i; j++)
		{
			if (stu[range[j]].score < stu[range[j+1]].score) {
				temp = range[j];
				range[j] = range[j+1];
				range[j+1] = temp;
			}
		}
	}

	for (i = 0; i < 10; i++)
	{
		printf("%d,%s,%.1f\n", stu[range[i]].id, stu[range[i]].name, stu[range[i]].score);
	}
}
