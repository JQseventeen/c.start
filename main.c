#include<stdio.h>
/*int main(void)//����д�� 
{
	int q;
	int b;
	printf("����������\n");
	int ch[20] = getchar();
	b=getchar();
	printf("��ȷ������(1/2)\n");
	q = getchar();
	switch(q)
	{
		case 1:
			printf("ȷ�ϳɹ�\n");
			break;
		case 2:
			printf("ȷ��ʧ��\n");
			break;
		default:
			printf("�������\n");
			break;
	}
	return 0;
}*/
/*int main(void)//��һ 
{
	int ch = 0;
	char passward[20];
	printf("����������\n");
	scanf("%s",&passward);//%S��Ӧ�ַ�����%c��Ӧ�ַ� 
	getchar();//����\n 
	printf("��ȷ��(Y/N)\n");
	 ch = getchar();
	
		if(ch == 'Y')//��ס�ַ�Ҫ�����ţ� 
			printf("ȷ�ϳɹ�\n");
		else if(ch == 'N')
			printf("ȷ��ʧ��\n");
		else
			printf("�������\n");
	
return 0;
}*/
int main(void)//��� 
{
	int ch =0;
	int tet = 0;
	char passward[20] = {0};
	printf("����������\n");
	scanf("%s",&passward);
	/*ch = getchar();
	while((ch) != '\n')//Ϊʲô (ch = getchar()һ��Ҫд���������ֿ��ͳ�bug?? 
	{
		;
	}*/
	while((ch = getchar()) != '\n')//ֱ�������ַ�����\n������ѭ��   
	{
	   ;
	}
	printf("��ȷ��(Y/N)");
	tet = getchar();
	if(tet == 'Y')//��ס�ַ�Ҫ�����ţ� 
			printf("ȷ�ϳɹ�\n");
		else if(tet == 'N')
			printf("ȷ��ʧ��\n");
		else
			printf("�������\n");
	return 0;
 } 
