#include<stdio.h>

int main(){
	int n1, n2;
	
	printf("digite primeiro numero \n");
	scanf(" %d", &n1);
	
	printf("digite segundo numero \n");
	scanf(" %d", &n2);
	
    
	
	if( n1 < n2 ){
		printf("%d: ", n1);
		printf("%d: ", n2);
	}else{
		printf("%d: ", n2);
		printf("%d: ", n1);
	}
	
	return 0;


}
