#include<stdlib.h>
#include<stdio.h>
#define SWAP(x, y, t) ((t)=(x), (x)=(y), (y)=(t))


void bubble_sort(int list[], int n)
{
	int i, j, temp; // ������ ���� ���ְ� 
	for(i=n-1; i>0; i--) { // i�� n-1���� 0���� �۾����� 
		for(j=0; j<i; j++) // j�� 0���� n-1 ���� �����ȴ�. 
		  if(list[j]>list[j+1]) // ���⼭ list[j]�� list[j+1]���� ũ�ٸ� ��ü���ش�.
		                        // �� ���� ���ڰ� �ڿ����ں��� ũ�ٸ� ��ü���ش�. 
		    SWAP(list[j], list[j+1], temp); // j�� temp�� �ٲ��ְ� j+1�� j�� �ٲ��ְ� 
	}                                       // temp�� j+1 �� �ٲ��ִϱ� �ᱹ j�� J+1�� �ڸ��� �ٲ��. 
}

int main() 
{
	int i, j; // for���� ����  i, j ���� 
	int *p = NULL; // ������ ���� p�� NULL �� �Ҵ� 
	int size = 0; // size ���� ���� �� �ʱ�ȭ 
	
	
	printf("������ �ϴ� �޸� �Է� : ");
	scanf("%d", &size); // ������ �ϴ� �޸��� ũ�⸦ �Է¹ް� 
	printf("\n"); 
	p = (int*)malloc(sizeof(int)*size); // ���� �޸� �Ҵ��� �Ѵ�. 
	
	for(i=0; i<size; i++) {   
		printf("���� �ϰ��� �ϴ� �� �Է� : ");
	    scanf("%d", &p[i]);
	} // �Ҵ��� �޸𸮷� �迭�� ����� ���� ���� �Է� �޴´�. 
	
	
	printf("\n"); 
	bubble_sort(p, size); // ���� ���� �Լ��� ���� ���Ľ�Ų��. 
	
	printf("���ĵ� �� : ");   
	for(i=0; i<size; i++)
	  printf("%d ", p[i]);
	  // ���ĵ� ���� ������ش�. 
	free(p); // ���� �޸� �Ҵ��� �������ش�. 
}	

