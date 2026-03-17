#include <stdio.h>

int main (){
	 float distancia, velocidade, tempo, velocidademts;
	 
	 printf("Digite a distancia:\n");
	 scanf("%f", &distancia);
	 
	 
	 printf("Digite a velocidade: \n");
	 scanf("%f", &velocidade);
	 
	 tempo = distancia / velocidade;
	 
	 velocidademts = velocidade * 3.6;
	 
	 printf("tempo medio de chegada %.2f: \n", tempo);  
	 printf("velocidade metros por segundo: %.2f: \n", velocidademts);
	 
	 return 0;
}
