#include <stdio.h>

int main(){
	int i,j,k,l;
	
	for(i=0;i<=8;i++){
		for(j=0;j<=8;j++){
			if(i==0&&j==8||i==8&&j==8){
				printf(" ");
			}
			else if(i==0||i==8||j==0||j==8){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
