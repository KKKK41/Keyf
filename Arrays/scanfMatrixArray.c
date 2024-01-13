#include <stdio.h>

int main(){
	int matrix[3][3];
	int i,j;
	
	for(i=0; i<3 ; i++){
		for(j=0; j<3 ; j++){
			printf("tek tek deðer gir: "); 
			scanf("%d ", &matrix[i][j]);
		}
	}
	
	for(i=0; i<3 ; i++){
		for(j=0; j<3 ; j++){
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
//= {{1,2,3}, {4,5,6}, {7,8,9}}
