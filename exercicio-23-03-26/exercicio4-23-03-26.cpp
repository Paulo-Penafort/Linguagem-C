#include <stdio.h>

int main(){
	
	int numero;
	
	printf("digite um valor");
	scanf(" %d", &numero);
	
	
	
	if( numero % 2 == 0){
		printf("PAR");
	}else{
		printf("Nao e PAR");
	}

}