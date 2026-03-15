#include <stdio.h>


//Peça ao usuário:

//um nome (char)

//uma idade (int)

//Depois mostre:

int main(){
	char nome [20];
	int idade;
	
	printf("Digite seu nome:\n");
	scanf("%s", &nome);
	
	printf("Digite sua idade:\n");
	scanf("%d", &idade);
	
	printf("Ola %s, voce tem %d anos", nome, idade );

    return 0;
	
}




