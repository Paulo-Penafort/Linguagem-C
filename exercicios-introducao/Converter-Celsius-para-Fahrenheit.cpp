#include <stdio.h>

//Converter Celsius para Fahrenheit

int main (){
	float celsius, resultado;
	
	printf("temperatura em celsius:");
	scanf ("%f", &celsius);
	
	resultado = (celsius * 9) /5 + 32;
       
    printf("Sua temperatura em Fahrenheit: %2.f", resultado );
    
    return 0;
	
}
