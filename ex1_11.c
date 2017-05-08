/*
Created on 2017/05/07
@author: jiang
*/
#include <stdio.h>
#define NoBlank 'a'
/*
将输入复制到输出，并将连续的多个空格用一个空格代替
 */
main()
{
	int c ,lastic;
	lastic = NoBlank;
	while ((c = getchar()) != EOF){
		if (c != ' ')  //输出非空格字符
			putchar(c);
		else if (c == ' ') //输出空格字符，其中getchar()和putchar()都是一次读写一个字符的函数。
			if(lastic != ' ')
				putchar(c);
		lastic = c;
	}
}
