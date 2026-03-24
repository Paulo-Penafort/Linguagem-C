#include <stdio.h>
int main(){

float temperatura, v_base;

printf("digite a temperatura");
scanf(" %f", &temperatura);

v_base = 37.5;

if( temperatura >= v_base){
	printf("esta com febre");
}else{
	printf("nao esta com febre");
}
 
 }
