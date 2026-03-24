#include <stdio.h>

int main(){
	
	int n_mes;
	
	
	printf("digite um numero de 1 a 12 para ver o mes correspodente");
	scanf(" %d", &n_mes);
 
 	
	 if(  n_mes == 1 ){
		printf("janeiro");
	}else if(n_mes == 2){
		printf("fevereiro");
	}else if(n_mes == 3){
		printf("marco");
	}else if(n_mes == 4){
		printf("abril");
	}else if(n_mes == 5){
		printf("maio");
	}else if(n_mes == 6){
		printf("junho");
	}else if(n_mes == 7){
		printf("julho");
	}else if(n_mes == 8){
		printf("agosto");
	}else if(n_mes == 9){
		printf("setembro");
	}else if(n_mes == 10){
		printf("outrubro");
	}else if(n_mes == 11){
		printf("novembro");
	}else if(n_mes == 12){
		printf("dezembro");
	}else{
		printf("valor nao corresponde a nenhum mes");
	}

}