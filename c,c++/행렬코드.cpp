#include <stdio.h>
#include <stdlib.h>

void arr(int a[][3]);			//��� ���
void add(int a[][3],int b[][3]);	//����

int main()
{
	int a[3][3],b[3][3];	//�迭 �ʱ�ȭ
	int i,j,yn;			//i,j�� for�� cho�� ������ ���� yn�� ��İ� Ȯ�ν� ���

	printf("a����� �Է��Ͻÿ�\n"); //a��� �Է�

	while(1)//���� ���� - ��İ� �Է��� �ٸ� �� �ٽ� �Է�
	{

	for(i=0;i<3;i++)
	{
		printf("%d ��: \n",i+1);
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}

	printf("a ����� ������ �����ϴ�. \n");
	arr(a);

	printf("�Է��� ���� �½��ϱ�? O[1], X[2]");
	scanf("%d",&yn);

	if(yn==1)				//���� �� break
		break;
	}


	printf("\n\n");


	printf("b����� �Է��Ͻÿ�\n"); //b��� �Է�

	while(1)//���� ���� - ��İ� �Է��� �ٸ� �� �ٽ� �Է�
	{

	for(i=0;i<3;i++)
	{
		printf("%d ��: \n",i+1);
		for(j=0;j<3;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}

	printf("b ����� ������ �����ϴ�. \n");
	arr(b);

	printf("�Է��� ���� �½��ϱ�? O[1], X[2]");
	scanf("%d",&yn);

	if(yn==1)				//���� �� break
		break;
	}

	printf("\n\n");
	
	printf("��� �� ���� ��� : \n\n");

	add(a,b);

}

void arr(int a[3][3])
{
	int i,j;

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%3d",a[i][j]);
		}
		printf("\n");
	}
}
void add(int a[3][3],int b[3][3])
{
	int c[3][3];
	int i,j;

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}

	arr(c);
}
