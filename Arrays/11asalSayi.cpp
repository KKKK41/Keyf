#include <stdio.h>
int prime_number(int sayi){
	int i;
	for(i=2;i<sayi;i++){
		if(sayi%i==0){
			return 0;
		}
	}
	return 1;
}

int main(){
	int n;
	printf("Bir sayi giriniz: ");
	scanf("%d", &n);
	if(prime_number(n)==0){
		printf("Bu sayi asal deðil");
	}
	else{
		printf("Bu sayi asal sayidir");
	}
}
