#include <stdio.h>

int main(){
	int secretNumber=41,guess,attempts=3;
	
	printf("Bir sayı giriniz");	
	do{
		scanf("%d", &guess);

		if(guess==secretNumber){
			printf("helallagardas");
			break;
			
		}
		else{
			printf("yanlıskardes\n");
			if(attempts>=0){
				printf(" %d kadar hakkın kaldı", attempts);
			}
			else{
				printf("hakkınbitti.");
			}
		}
		attempts--;
	}while(attempts>=0);
	return 0;
}
