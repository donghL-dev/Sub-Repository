#include <stdio.h>
void arr(int a[3][3]) {
	int i, j;
	for(i=0; i<3; i++) {
		for(j=0; j<3; j++)
		printf("%3d", a[i][j]);
		printf("\n");
	}
}

void add(int a[3][3], int b[3][3])
{
	int i,j;
	int c[3][3];
	
	for(i=0; i<3; i++) {
		for(j=0; j<3; j++)
		 c[i][j] = a[i][j] + b[i][j];
	}
	arr(c);
}

int main() {
	int a[3][3], b[3][3];
	int i, j, yn;
	
	printf("����� �����մϴ�. \n");
	
	while(1) {
		for(i=0; i<3; i++) {
			printf("%d �� \n", i+1);
			for(j=0; j<3; j++) {
				scanf("%d", &a[i][j]);
			}
		}
		printf(" �Է��� ����� ��Ÿ���� ������ ����. \n"); 
		arr(a);
		printf(" �ش� ����� �´°� �´ٸ� 1�� �Է� : ");
		scanf("%d", &yn);
		if(yn == 1)
		break;
	} 
	
	printf("B ����� �����մϴ�. \n");
	
	while(1) {
		for(i=0; i<3; i++) {
			printf("%d �� \n", i+1);
			for(j=0; j<3; j++) {
				scanf("%d", &b[i][j]);
			}
		}
		printf(" �Է��� ����� ��Ÿ���� ������ ����. \n"); 
		arr(b);
		printf(" �ش� ����� �´°� �´ٸ� 1�� �Է� : ");
		scanf("%d", &yn);
		if(yn == 1)
		break;
	}
	
	printf(" ������ �� ����� ���� ���� �մϴ�. \n");
	
	add(a, b); 
	 
}
