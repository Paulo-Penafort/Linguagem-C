#include<stdio.h>
//Fazer um algoritmo que leia valores para as variáveis hora, minuto e segundo;
//verificando e escrevendo se elas correspondem a um horário válido ou não. Para um
//horário ser válido, a hora deve estar no intervalo de 0 a 23, o minuto e o segundo no
//intervalo de 0 a 59.

int main(){
	int hora, minuto, segundo;
	
	printf("digite hora:");
	 scanf(" %d", &hora);
	
	printf("digite minuto:");
     scanf(" %d", &minuto);
	
	printf("digite segundo:");
	 scanf(" %d", &segundo);	
	
	if(hora >= 0 && hora < 23 && minuto >= 0 && minuto < 59 &
	  segundo >= 0 && segundo < 59){
	printf("Hora valida");
	}else{
		printf("hora invalida");
	}
	return 0;
}


