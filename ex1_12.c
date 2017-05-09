/*
Created on 2017/05/09
@author: jiang
*/
#include <stdio.h>
/*
编写一个将输入复制到输出的程序，将制表符替换为\t,回退符替换为\b,
反斜杠替换为\\。
 */
main()
{
	int c;
	while((c = getchar()) != EOF){
		if (c == '\t')
			printf("\\t");
		if (c == '\b')
			printf("\\t");
		if (c == '\\')
			printf("\\\\");
		if (c != '\b')
			if(c != '\\')
				putchar(c);
	}
}

			
