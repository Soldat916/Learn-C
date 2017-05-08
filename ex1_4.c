/*
Created on 2017/05/01
@author: jiang
*/
#include <stdio.h>
#define lower 0	 	/*表的下限*/
#define upper 300  /*表的上限*/
#define step 20	  /*表的步长*/
/*打印华氏温度和摄氏温度对照表 */
main()
{
/*倒序输出*/
	int fahr;
	for (fahr = upper;fahr >= lower;fahr = fahr - step)
		printf("%3d %6.1f\n",fahr, (5.0/9.0)*(fahr-32));

}
