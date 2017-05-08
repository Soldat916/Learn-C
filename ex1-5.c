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
	while(c != EOF)
	{
		putchar(c); // 输出刚读入的字符
		c = getchar();// 读下一个字符
		putchar(c);
	}
}
