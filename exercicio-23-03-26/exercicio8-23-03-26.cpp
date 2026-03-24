#include <stdio.h>

int main(){
	
	char letra, vogais;
	
	
	printf("digite uma letra para seaber se e vogal ou nao");
	scanf(" %c", &letra);
 	
 	
	  
	  if(letra == 'a' || letra =='e' || letra == 'i' || letra == 'o' || letra == 'u' ){
		printf("e uma vogal");
	}else{
		printf("nao e uma vogal");
	}
		
	
	
	
}