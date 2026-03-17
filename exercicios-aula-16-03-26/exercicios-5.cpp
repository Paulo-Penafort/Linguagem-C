#include <stdio.h>

int main (){
	 float valor1, valor2, valor3, soma, produto;
	 
	 printf("Digite primeiro valor:\n");
	 scanf("%f", &valor1);
	 
	 printf("Digite segundo valor: \n");
	 scanf("%f", &valor2);
	 
	 printf("Digite terceiro valor: \n");
	 scanf("%f", &valor3);
	 
	 
	 soma = valor1 + valor2;
	 
	 produto = valor2 * valor3;
	 
	 printf("somar dos dois primeiro  valores e: %2.f", soma);
	 printf(" eo produto dos dois ultimos valores e: %2.f", produto);
	 
	 return 0;
}