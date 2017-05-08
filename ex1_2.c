/*
Created on 2017/05/01
@author: jiang
 */
#include <stdio.h>
main()
{
	int fahr,celsius;
	int lower, upper,step;

	lower = 0; 	 /*温度表的下限*/
	upper = 300; /*温度表的上限*/
	step = 20;	 /*	步长*/

	fahr = lower;
	while (fahr <= upper){
		celsius = 5 *(fahr-32) / 9;
		printf("%d\t%d\n",fahr,celsius );
		fahr = fahr + step;
	}
	return 0;
}
