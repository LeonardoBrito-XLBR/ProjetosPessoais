#include <stdio.h>
#include <locale.h>

void verificaNumeroDigitiao (int num1){
	
	if ( num1 == 0){
		printf ("Zero � um numero Neutro");
		
	} else if (num1 > 0  ){
	 	printf ("O Numero � Positivo");
	
	
	} else {
		printf ("O numero � negativo");
	}
}



int main (){
	int numero;
	
	
	printf ("Digite um n�mero]: ");
	scanf ("%i", &numero);
	
	verificaNumeroDigitiao(numero);
	
	return 0;
}
