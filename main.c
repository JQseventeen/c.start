#include<stdio.h>
/*int main(void)//错误写法 
{
	int q;
	int b;
	printf("请输入密码\n");
	int ch[20] = getchar();
	b=getchar();
	printf("请确认密码(1/2)\n");
	q = getchar();
	switch(q)
	{
		case 1:
			printf("确认成功\n");
			break;
		case 2:
			printf("确认失败\n");
			break;
		default:
			printf("输入错误\n");
			break;
	}
	return 0;
}*/
/*int main(void)//其一 
{
	int ch = 0;
	char passward[20];
	printf("请输入密码\n");
	scanf("%s",&passward);//%S对应字符串，%c对应字符 
	getchar();//收容\n 
	printf("请确认(Y/N)\n");
	 ch = getchar();
	
		if(ch == 'Y')//记住字符要单引号！ 
			printf("确认成功\n");
		else if(ch == 'N')
			printf("确认失败\n");
		else
			printf("输入错误\n");
	
return 0;
}*/
int main(void)//其二 
{
	int ch =0;
	int tet = 0;
	char passward[20] = {0};
	printf("请输入密码\n");
	scanf("%s",&passward);
	/*ch = getchar();
	while((ch) != '\n')//为什么 (ch = getchar()一定要写在这样，分开就成bug?? 
	{
		;
	}*/
	while((ch = getchar()) != '\n')//直到输入字符不是\n才跳出循环   
	{
	   ;
	}
	printf("请确认(Y/N)");
	tet = getchar();
	if(tet == 'Y')//记住字符要单引号！ 
			printf("确认成功\n");
		else if(tet == 'N')
			printf("确认失败\n");
		else
			printf("输入错误\n");
	return 0;
 } 
