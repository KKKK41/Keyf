#include <stdio.h>

/* 3 5 matrix yap sonra sütunlarý topla */

int main(){
	int matrix[3][5]= {{3,5,1,3,2}, {4,4,4,5,5}, {9,8,9,7,7}};
	int i, j, toplamIndexZero;
	
	for(i=0;i<3;i++){
		for(j=0;j<5;j++){
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<3;i++){
		for(j=0;j<1;j++){
			
		printf("%d\n", matrix[i][j]); //hangi sayýlarýn geldiðini denetlemek için
		toplamIndexZero += matrix[i][j];
		}
	}
	//toplamIndexZero = matrix[0][0] + matrix[1][0] + matrix[2][0];
	printf("%d", toplamIndexZero);l
}
