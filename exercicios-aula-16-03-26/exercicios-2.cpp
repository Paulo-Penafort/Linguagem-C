#include <stdio.h>

int main (){
	 int numero, sucessor, antecessor;
	 
	 printf("Digite um numero\n");
	 scanf("%d", &numero);
	 
	 sucessor = numero + 1;
	 antecessor = numero -1;
	 
	 printf("seu sucessor e: %d", sucessor);
	 printf(" antecessor e: %d", antecessor);
	 
	
	return 0;
}