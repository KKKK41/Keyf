#include <stdio.h>

int main(){
	int secretNumber=41,guess,attempts=3;
	
	printf("Bir say� giriniz");	
	do{
		scanf("%d", &guess);

		if(guess==secretNumber){
			printf("helallagardas");
			break;
			
		}
		else{
			printf("yanl�skardes\n");
			if(attempts>=0){
				printf(" %d kadar hakk�n kald�", attempts);
			}
			else{
				printf("hakk�nbitti.");
			}
		}
		attempts--;
	}while(attempts>=0);
	return 0;
}
