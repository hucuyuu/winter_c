// 54.
// 程序改错：
// 【程序功能】
// 输入一个字符串，按字符串中包含的算式完成整数四则运算，输出运算结果。若运算符错误（除“+，-，*，/”外的其他字符），则输出“operator error!”。
// 【测试数据与运行结果】
// 输入1234+567时，输出应为：1234+567=1801
// 输入12/2时，输出应为：12/2=6
// 【含有错误的程序】
// #include<stdio.h>
// #include<stdlib.h>
// #include<ctype.h>
// void stoi(char *s,int *i)
// {
// 	long n=0;
// 	while(isdigit(s[*i]))
// 		n=n*10+s[(*i)++];
// 	return n;
// }
// long add(char *s)
// {
// 	int i=0,*pi;
// 	char op;
// 	long a=0,b=0,c;
// 	a=stoi(s,pi);
// 	op=s[i++];
// 	b=stoi(s,pi);
// 	switch(op)
// 	{
// 		case '+':return a+b;
// 		case '-':return a-b;
// 		case '*':return a*b;
// 		case '/':if(b==0) printf("div!0");exit(0);
//                  return a/b;
// 		default: printf("operator error!");exit(0);
// 	}
// }
// int main(void)
// {
// 	char s[80];
// 	gets(s);
//     	printf("%s=",s);
// 	printf("%ld\n",add(s));
// 	return 0;
// }
// 请改正并认真测试程序的正确性。将源代码以文本方式提交，不要直接提交文件。
