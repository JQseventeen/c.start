#include <stdio.h>
#include <stdlib.h>
/*int main()//��������һ������ͨͨ�� 
{
	int num1 = 0; 
	int num2 = 0;
	printf("������Ƚϵ�����%d  %d",num1, num2);
	scanf("%d%d",&num1 ,&num2);
	if(num1>num2)
		printf("���������%d",num1);
	    else
		printf("���������%d",num2);
	 return 0;
 } */
int MAX(int x,int y)//���� 
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
	printf("�������=%d",max);
	return 0;
}
