/*
Created on 2017/05/07
@author: jiang
*/
#include <stdio.h>
/*
统计空格，制表符，和换行符的个数。
 */
main()
{
	int c, nt, nl, nb;
	nt = 0;
	nl = 0;
	nb = 0;

	while(( c = getchar()) != EOF )
		if (c == '\n')
			++nl;
		else if (c == '\t')
			++nt;
		else if (c == ' ')
			++nb;

	printf("%d%d%d\n", nl, nt, nb );
}
