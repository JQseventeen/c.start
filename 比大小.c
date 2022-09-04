#include <stdio.h>
#include <stdlib.h>
/*int main()//这是其中一种普普通通的 
{
	int num1 = 0; 
	int num2 = 0;
	printf("请输入比较的两数%d  %d",num1, num2);
	scanf("%d%d",&num1 ,&num2);
	if(num1>num2)
		printf("更大的数是%d",num1);
	    else
		printf("更大的数是%d",num2);
	 return 0;
 } */
int MAX(int x,int y)//函数 
{
	if(x> y)
	return x;
    else
	return y;
}
int main()
{
	int num1 =17;
	int num2 =69;
	int max =0;
	max =MAX(num1, num2);
	printf("最大数是=%d",max);
	return 0;
}
