/*
Created on 2017/05/02
@author: jiang
*/
#include <stdio.h>
/*
统计输入的字符计数：v1.0
*/
main()
{
	long nc;

	nc = 0;
	while(getchar() != EOF)
		++nc;
	printf("%ld\n",nc );
}
