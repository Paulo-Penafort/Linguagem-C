#include <stdio.h>


//Cáulculo IMC

int main (){
	float peso, altura, valor;
  
   printf("Digite seu peso:\n");
   scanf("%f", &peso);
   
   printf("Digite sua altura:\n");
   scanf("%f", &altura);
   
   valor = peso / (altura*altura); 
   
   printf("Seu IMC e: %4.f", valor);
   
   return 0;
}
