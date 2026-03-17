#include <stdio.h>

int main (){
	int ano, idade;
	 
	printf("Digite o ano que voce nasceu\n");
	scanf("%d", &ano);
	
	idade = 2026 - ano;
	
	printf("Sua idade e: %d", idade);
	
	return 0;
}