#include <stdio.h>

int main(){
	int i,j,attempts=2;
	
	do{
	for(i=0;i<=8;i++){
		for(j=0;j<=8;j++){
			if(j==0||i==0||i==8){
				printf("*");
			}
		}
		printf("\n");
	}
	printf("\n\n");
	attempts--;
	}while(attempts>=0);
	
	return 0;
}
