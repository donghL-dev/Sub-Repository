#include<stdio.h>
int main() {
	int n;
	int score[1000];
	double average[1000]; 
	
	scanf("%d", &n);
	for(int i=0; i<n; i++) {
		int sum = 0;  // ��ü �� 
		int average1 = 0; // ��� 
		int sum1 = 0; // ��պ��� ���� �л��� 
		int c;    // �л���
		
		scanf("%d", &c); // �л��� �Է� 
		for(int j=0; j<c; j++) { 
			scanf("%d", &score[j]); // ���� �Է� 
		}
		for(int k=0; k<c; k++) {
			sum += score[k]; // ��ü ���� 
		}
		average1 = sum / c; // ��� ����
		for(int m=0; m<c; m++) {
			if(score[m]>average1)
			  sum1++;
		} 
		average[i] = ((double)sum1 / (double)n)*100; // ���� ����ȯ�� �������� �Ҽ��� 100�� ����. 
	}
	for(int i=0; i<n; i++)
	  printf("%.3lf%%\n", average[i]); // %%�� %�� ��Ÿ���� .3lf�� �Ҽ��� 3���� ���ڱ���  
}
