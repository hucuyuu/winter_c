// 68.
// 编程题
// 定义一个结构体类型，名称为 Student
// struct Student
// {
//     int id;           //学号
//     char name[20];    //姓名
//     float score;      //成绩
// };
// 编写一个程序，从键盘输入2个学生的学号、姓名和成绩分别保存，
// 再将2个学生的信息分行（每个学生信息占1行）输出到屏幕和“students.txt”文本文件中。
// 请认真测试程序的正确性。将源代码以文本方式提交，不要直接提交文件。

#include <stdio.h>
#include <stdlib.h>

struct Student {
	int	id;             //学号
	char	name[20];       //姓名
	float	score;          //成绩
};

int main()
{
	int i;


	struct Student stu[2];

	FILE *fp;

	if ((fp = fopen("students.txt", "w")) == NULL) {
		printf("Can not open file %s\n", "students.txt");
		exit(1);
	}

	printf("please input stu[%d].id:", 0);
	scanf("%d", &stu[0].id);
	printf("please input stu[%d].name:", 0);
	scanf("%s", stu[0].name);
	printf("please input stu[%d].score:", 0);
	scanf("%f", &stu[0].score);
	printf("please input stu[%d].id:", 1);
	scanf("%d", &stu[1].id);
	printf("please input stu[%d].name:", 1);
	scanf("%s", stu[1].name);
	printf("please input stu[%d].score:", 1);
	scanf("%f", &stu[1].score);

	for (i = 0; i < 2; i++)
	{
		printf("%d,%s,%.1f\n", stu[i].id, stu[i].name, stu[i].score);
		fprintf(fp, "%d,%s,%.1f\n", stu[i].id, stu[i].name, stu[i].score);
	}



	if (fclose(fp)) {
		printf("Can not close file %s\n", "students.txt");
	}

	return (0);
}
