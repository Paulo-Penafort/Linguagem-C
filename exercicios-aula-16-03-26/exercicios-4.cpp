#include <stdio.h>

int main (){
	 float nota1, nota2, resultado;
	 
	 printf("Digite sua primeira nota:\n");
	 scanf("%f", &nota1);
	 
	 printf("Digite sua segunda nota: \n");
	 scanf("%f", &nota2);
	 
	 resultado = (nota1 + nota2)/2;
	 
	 printf("sua media e: %2.f", resultado);
	 
	 return 0;
}