#include <stdio.h>

int main(){
	
	int valor, resultado;
	
	printf("digite um valor");
	scanf(" %d", &valor);
	
	resultado = valor;
	
	if( resultado > 7){
		printf(" seu numero e maior que 7");
	}else{
		printf(" seu numero nao e maior que 7");
	}

}