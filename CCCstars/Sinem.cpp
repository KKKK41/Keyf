#include <stdio.h>
int main(){
	int i,j,k,l,m;
	
	
	//s
	for(i=0;i<=8;i++){
		for(j=0;j<=9;j++){
			if(j==0){
				if(i<=5){
					printf("*");
				}
			}
			else if(j==9){
				if(i>=6){
					printf("*");
			}
		}
			else if(i==0||i==5||i==8){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
	printf("\n\n");
	
	//I
	for(i=0;i<=8;i++){
		for(j=0;j<=8;j++){
			if(j==4){
				printf("*");
				}
			else{
				printf(" ");
			}
		}
	printf("\n");
	}
	printf("\n\n");
	
	//N
	for(i=0;i<=8;i++){
		for(j=0;j<=8;j++){
			if(j==0||j==8||(i==j)){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		
		printf("\n");
	}
	printf("\n\n");
	
	//E
	for(i=0;i<=8;i++){
		for(j=0;j<=8;j++){
			if(j==0||i==0||i==5||i==8){
				printf("*");
			}
		}
		printf("\n");
	}
	printf("\n\n");
	
	//M
	for(i=0;i<=8;i++){
		for(j=0;j<=8;j++){
			if(j==0||j==8){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
}













