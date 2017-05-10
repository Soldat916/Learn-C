/*
Created on 2017/05/01
@author: jiang
*/
#include <stdio.h>
/* 字符的输入与输出 */
main()
{
	int c;
	c = getchar();  //读入一个字符
	while(c != EOF)
/* 
 EOF不是特殊字符，而是一个定义在头文件stdio.h的常量，一般等于-1。Linux中，在新的一行的开头，按下Ctrl-D，
就代表EOF（如果在一行的中间按下Ctrl-D，则表示输出"标准输入"的缓存区，所以这时必须按两次Ctrl-D）；Windows中，
Ctrl-Z表示EOF。
*/
	{
		putchar(c); // 输出刚读入的字符
		c = getchar();// 读下一个字符
		putchar(c);
	}
}
