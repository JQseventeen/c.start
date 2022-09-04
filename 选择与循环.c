#include <stdio.h>
#include <stdlib.h>
//选择
/*int main()
{
	int input = 0;
	printf("升入大学\n");
	printf("你要好好读书吗？(1/0)>;\n");
	scanf("%d",&input);
	if(input=1)
	printf("VERY GOOD\n");
	else
	printf("THINK AGAIN\n");
	return 0;
 } */
 //循环
int main()
{
	int day =0;
	printf("何时英语进步?\n");
	while(day<100)
	{
	printf("坚持背单词%d天\n",day);
	day++;
}
	if(day >=100)
	printf ("你离梦想更进一步了!\n");
	return 0;
 } 
