#include<stdio.h>

int m = 2,n = 2;

void main() {
	int A[n][m],B[m][n],i,j,k;
	for(i=0;i<n;i++) {
		for(j=0;j<m;j++) {
			printf("A[%d][%d] : ",i,j); scanf("%d",&A[i][j]);
		}
	}
	for(i=0;i<m;i++) {
		for(j=0;j<n;j++) {
			printf("B[%d][%d] : ",i,j); scanf("%d",&B[i][j]);
		}
	}
	int C[n][n];
	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) {
			C[i][j] = 0;
			for(k=0;k<m;k++) {
				C[i][j] += A[i][k]*B[k][j];
			}
			printf("%d ",C[i][j]);
		}
		printf("\n");
	}
}
