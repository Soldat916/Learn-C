/*
Created on 2017/05/09
@author: jiang
*/
#include <stdio.h>
#define IN 1
#define OUT 0
/*
统计输入的行数，单词数和字符数
 */
main()
{
	int c,nl ,nw ,nc, state;
	state = OUT;
	nl = nw =nc = 0;
	while((c = getchar()) != EOF)
	{
		++nc;	
		if (c == '\n')
			++nl;	
		if (c == ' ' || c == '\t'|| c == '\n')
			state = OUT;  //单词标志位
		else if (state == OUT){
			state = IN;
			++nw;
		}
	}
	printf("%d\n", nl );   //输出行数
	printf("%d\n", nw );  //输出单词数	
	printf("%d\n", nc ); //输出字符数
}
