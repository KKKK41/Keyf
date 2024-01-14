#include <stdio.h>
int toplam(int x,int y){
	return (x + y);   //dýþ dünyaya yani maine býrakýyor
}

int main(){
	int sayi1, sayi2;
	scanf("%d%d", &sayi1,&sayi2);
	toplam(sayi1,sayi2);

	printf("%d", toplam(sayi1,sayi2));
}
