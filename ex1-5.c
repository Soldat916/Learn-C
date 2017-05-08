/*
Created on 2017/05/01
@author: jiangzheng
*/
#include <stdio.h>
/* 字符的输入与输出 */
main()
{
	int c;
	c = getchar();  //读入一个字符
	while(c != EOF)//不是特殊字符，而是一个定义在头文件stdio.h的常量，一般等于-1。
	{
		putchar(c); // 输出刚读入的字符
		c = getchar();// 读下一个字符
		putchar(c);
	}
}
