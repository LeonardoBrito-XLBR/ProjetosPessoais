#include <stdio.h>
#include <locale.h>

void verificaNumeroDigitiao (int num1){
	
	if ( num1 == 0){
		printf ("Zero é um numero Neutro");
		
	} else if (num1 > 0  ){
	 	printf ("O Numero é Positivo");
	
	
	} else {
		printf ("O numero é negativo");
	}
}



int main (){
	int numero;
	
	
	printf ("Digite um número]: ");
	scanf ("%i", &numero);
	
	verificaNumeroDigitiao(numero);
	
	return 0;
}
