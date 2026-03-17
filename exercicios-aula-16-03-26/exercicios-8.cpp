#include <stdio.h>

int main (){
	 float salario, reajuste, aumento, novoSalario;
	 
	 printf("Digite seu salario:\n");
	 scanf("%f", &salario);
	 
	 
	 printf("Digite a porcetagem de reajuste: \n");
	 scanf("%f", &reajuste);
	 
	 aumento = salario * (reajuste/100);  
	 
	 novoSalario = aumento + salario;
	 
	 printf("O reajuste  do seu salario vai ser de: %.2f \n",  aumento);
	 printf("seu Salario atual e:%.2f \n", salario);
	 printf("seu novo salario e: %.2f \n",  novoSalario);
	 
	 return 0;
}
