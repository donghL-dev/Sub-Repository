#include <stdio.h>
#define MAX 30


int main() {
	int m1[MAX][MAX];
	int m2[MAX][MAX];
	
	int result[MAX][MAX];
	
	int n,m,i,j, yn;
	
	printf("�� �Է� : ");
	scanf("%d", &n);
	
	printf("�� �Է� : ");
	scanf("%d", &m);
	
	while(1)
	{
		for(i=0; i<n; i++) {
			printf("%d ��\n", i+1);
			for(j=0; j<m; j++) {
			scanf("%d", &m1[i][j]);
		}
		}
		for(i=0;i<n; i++) {
		for(j=0; j<m; j++)
		   printf("%3d", m1[i][j]);
		printf("\n");   
	}
	
		printf("�� ����� �½��ϱ�?  : O [1]");
		scanf("%d", &yn);
		if(yn == 1)
		break;
	}
	
	
	
	while(1)
	{
		for(i=0; i<n; i++) {
			printf("%d ��\n", i+1);
			for(j=0; j<m; j++)
			  scanf("%d", &m2[i][j]);
		}
		for(i=0;i<n; i++) {
		for(j=0; j<m; j++)
		   printf("%3d", m2[i][j]);
		printf("\n");   
	}
		printf("�� ����� �½��ϱ�?  : O [1]");
		scanf("%d", &yn);
		if(yn == 1)
		break;
	}
	 printf(" �� ����� �� ��� : ");
	 
	 for(i=0; i<n; i++) {
	 	for(j=0; j<m; j++) {
	 		result[i][j]=m1[i][j]+m2[i][j];
		 }
		 }
	 
	 
	 for(i=0;i<n; i++) {
		for(j=0; j<m; j++)
		   printf("%3d", result[i][j]);
		printf("\n");   
	}
	 
	 
	 
	 
}
