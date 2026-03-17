#include <stdio.h>

int main (){
	 float area, base, altura;
	 
	 printf("Digite a base: ");
	 scanf("%f", &base);
	 
	 printf("Digite a altura: ");
	 scanf("%f", &altura);
	 
	 area = (base * altura)/2;
	 
	 printf("area do triangulo e : %2.f", area);
	 
	 return 0;
}