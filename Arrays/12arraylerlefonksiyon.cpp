#include <stdio.h>
void bastir(int matriximiz[][4],int size){
	int i,j;   //different i and j value for the fuc.
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			printf("%d", matriximiz[i][j]);
	}
	printf("\n");
}
}


int main(){
	int matrix[3][4];
	int i,j;
	printf("matrixi doldunuz");
	
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			scanf("%d", &matrix[i][j]);
		}
		printf("\n");
	}
	bastir(matrix, 3);
}
	
