#include<stdio.h>

int main(){
	float peso, altura, imc;
	
	printf("digite seu peso \n");
	scanf(" %f", &peso);
	
	printf("digite sua altura \n");
	scanf(" %f", &altura);
	
    imc = peso /(altura*altura);
	
	if( imc <=18.5){
		printf("Abaixo do peso");
	}else if(imc >=18.5 && imc < 25){
		printf("normal");
	}else if( imc >= 25 && imc < 30){
		printf("pre-obeso");
	}else if( imc >= 30 && imc < 35){
		printf("obeso classe I");
	}else if( imc >= 35 && imc < 40){
		printf("obeso classe II");
	}else if( imc >= 40){
		printf("obeso classe III");
	}
	
	return 0;


}
