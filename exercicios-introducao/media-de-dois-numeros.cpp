#include <stdio.h>

int main (){
	float nota1, nota2, media;
	
	printf("Digite sua primneira nota:\n");
	scanf("%f", &nota1);
	
	printf("Digite sua segunda nota:\n");
	scanf("%f", &nota2);
	
	media = (nota1+nota2)/2;
	
	printf("Sua media e %2.f", media );
	
	return 0;
}
