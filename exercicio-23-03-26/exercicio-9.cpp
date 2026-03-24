#include<stdio.h>

int main(){
	float nota1, nota2, nota3, media;
	int faltas;
	
	printf("digite sua primeira nota\n");
	scanf(" %f", &nota1);
	
	printf("digite sua primeira nota \n");
	scanf(" %f", &nota2);
	
	printf("digite sua primeira nota \n");
	scanf(" %f", &nota3);
	
	printf("total de faltas \n");
	scanf(" %d", &faltas);
	
	
	media = (nota1+nota2+nota3) / 3;
	
	if(faltas > 5 ){
		printf("conceito 0, reprovado por falta");
	}else if(media  < 6 ){
		printf("conceito 0");
	}else if( media <= 7 ){
		printf("conceito 1");
	}else if( media <= 8 ){
		printf("conceito 2");
	}else if( media <= 9 ){
		printf("conceito 3");
	}else if( media >= 9 ){
		printf("conceito 4");
	}
	
	printf(" sua media e: %2.f \n", media);


     return 0;


}
