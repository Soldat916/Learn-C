/*
Created on 2017/05/03
@author: jiang
*/
#include <stdio.h>
/*
统计输入的字符计数：v2.0
*/
main()
{	
	double nc;
	for(nc = 0;getchar() != EOF;++nc)
		;
	printf("%.0f\n",nc);
}
