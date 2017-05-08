/*
Created on 2017/05/07
@author: jiang
*/
#include <stdio.h>
/*
统计输入的行数
*/
main()
{	
	int c,nl;
	nl = 0;

	while((c=getchar()) != EOF )
		if (c == '\n')
			++nl;
	printf("%d\n",nl );
}
