#include <stdio.h>
int max(int x, int y, int z){
	int maximum = x;
	if(y>maximum){
		maximum = y;
	}
	
	if(z>maximum){
		maximum = z;
	}
	
	return maximum;
}

int main(){
	int sayi1, sayi2, sayi3,maximumSayi;
	
	printf("Enter 3 number");
	scanf("%d%d%d", &sayi1, &sayi2, &sayi3);
	maximumSayi = max(sayi1, sayi2, sayi3);
	
	
	printf("your max num %d", maximumSayi);
	
	
	
	return 0;
}
