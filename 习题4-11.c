#include"stdio.h"
int main()
{
	int z1,z2,z3,z4;
    int max;

	printf("�������һ��������");
	scanf("%d",&z1);
	printf("������ڶ���������");
	scanf("%d",&z2);
	printf("�����������������");
	scanf("%d",&z3);
	printf("��������ĸ�������");
	scanf("%d",&z4);

	if(z1>z2)
	{
		max=z1;
		z1=z2;
		z2=max;
	}
	if(z1>z3)
	{
		max=z1;
		z1=z3;
		z3=max;
	}
	if(z1>z4)
	{
		max=z1;
		z1=z4;
		z4=max;
	}
	if(z2>z3)
	{
		max=z2;
		z2=z3;
		z3=max;
	}
	if(z2>z4)
	{
		max=z2;
		z2=z4;
		z4=max;
	}
	if(z3>z4)
	{
		max=z3;
		z3=z4;
		z4=max;
	}
	printf("%d,%d,%d,%d",z1,z2,z3,z4);

	return 0;
}