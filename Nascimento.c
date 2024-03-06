#include <stdio.h>
#include <locale.h>
#include <string.h>

//Calculo 
int Nascimento (int n1){
	
	return 2024 - n1; 

}



//Função Principal 
int main (){
	
	int ano, resultado;
	
	printf ("Digite o ano dE NASCER: ");
	scanf ("%i", &ano);
	
	resultado = Nascimento (ano); 
	
	printf ("O ano do seu %i", resultado);
	
	
}
