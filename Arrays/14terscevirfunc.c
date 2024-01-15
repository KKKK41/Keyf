#include <stdio.h>
void terscevir(char dizi[]){
	int i,uzunluk,gecici;
	uzunluk = strlen(dizi);
	for(i=0;i<uzunluk/2;i++){
		gecici =dizi[i];
		dizi[i] = dizi[uzunluk-1-i];
		
		dizi[uzunluk-1-i]=gecici;
	}
}

int main(){
	char isim[200];
	scanf("%s", isim);
	terscevir(isim);
	printf("%s", isim);
	return 0;
}
