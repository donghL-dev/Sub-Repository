#include <stdio.h>
#include <stdlib.h> // malloc, free function

int main() {
	int *p = NULL; // *p�� NULL �����ͷ� ���� 
	int size = 0; // size �Է¹޴� �������� �� �ʱ�ȭ 
	int i; // for���� ���� ���� i ���� 
	
	printf("input the size : "); // size �Է� �� ��� 
	scanf("%d", &size); // size ũ�� ���� 

	p = (int*)malloc(sizeof(int)*size); // size ��ŭ�� �޸� �Ҵ�

	for(i = 0; i < size; i++) // size ��ŭ �Է�
		scanf("%d", &p[i]);

	for(i = 0; i < size; i++) // �Էµȸ�ŭ ���
		printf("%d ", p[i]);
	
	printf("\n");
	free(p); // �������� �Ҵ�� �޸� ���� 
}
