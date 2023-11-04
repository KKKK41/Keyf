#include <stdio.h>

int main()
{
	int a,b,c,d;
	d=6;
	for(a=0;a<=11;a++){
		for(b=0;b<=2;b++){
			printf("*");
		}
		for(c=0;c<=11;c++){
			if(c==d){
				printf("***");
				}
			else{
				printf(" ");
			}		
	}
		if(a<6){
			d--;
		}
		else if(a<12){
			d++;
		}
	printf("\n");
	}
	printf("\n");
	for(a=0;a<=11;a++){
		for(b=0;b<=2;b++){
			printf("*");
		}
		for(c=0;c<=11;c++){
			if(c==d){
				printf("***");
				}
			else{
				printf(" ");
			}
		}
		if(a<6){
			d--;
		}
		else if(a<12){
			d++;
		}
	printf("\n");
	}
}
