#include <stdio.h>

int main(){
	
	char sexo;
	
	
	printf("digite iniciado do seu sexo m ou f");
	scanf(" %c", &sexo);
 
 	
	 if( sexo == 'm' || sexo == 'M'){
		printf("Masculino");
	}else if(sexo == 'f' || sexo == 'F'){
		printf("Feminino");
	}

}