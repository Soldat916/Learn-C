/*
Created on 2017/05/02
@author: jiangzheng
验证表达式getchar() != EOF 的值是0还是1
打印EOF的值
*/
#include <stdio.h>
main()
{
	int c;
	while(c= getchar() != EOF )
		printf("%d\n",c );
	printf("%d - EOF\n", c );
	printf("EOF is %d\n",EOF );
}
