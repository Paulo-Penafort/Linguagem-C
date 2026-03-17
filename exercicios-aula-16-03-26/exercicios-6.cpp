#include <stdio.h>

int main (){
	 float dolar, cotacao , resultado;
	 
	 printf("Quantidade de dolares guardados:\n");
	 scanf("%f", &dolar);
	 
	 
	 printf("Cotacao do dolar:\n");
	 scanf("%f", &cotacao);
	 
	 resultado = dolar * cotacao; 
	 
	 
	 printf("quantidade de dolar guardado em reais e: %.2f \n", resultado );
	 
	 return 0;
}