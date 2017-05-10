/*
Created on 2017/05/10
@author: jiang
*/
#include <stdio.h>
#define OUT 0
#define IN 1
/*
编写一个程序，以每行一个单词的形式打印其输入
 */
main()
{	
	int c,state;

	state = OUT;
	while((c = getchar()) != EOF )
		if (c == ' '||c == '\n'|| c == '\t'){
			if(state == IN){
				putchar('\n');
				state = OUT;
			}
		}else if(state == OUT){
			state = IN;
			putchar(c);
		}else
			putchar(c);
}
