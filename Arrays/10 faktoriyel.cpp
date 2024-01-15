#include <stdio.h>

int faktoriyel(int sayi){
	
	int fact=1;
	for(;sayi>0;sayi--){
		fact *= sayi;
	}
	return fact;
}

int main(){
	int n;
	printf("faktoriyel istediðiniz sayi: ");
	scanf("%d", &n);
	printf("faktroiyeli: %d", faktoriyel(n));
}
