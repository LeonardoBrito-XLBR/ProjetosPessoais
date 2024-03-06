#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h> // use para ultilizar o strcpy = mobiliza os dados para dentro da variavel 

char* verificacao(int numero){
	
	char resposta [200];
	
	if (numero % 2 == 0) {
		strcpy (resposta, "O seu numero é PAR");
	} else {
		strcpy (resposta, "O seu numero é IMPAR");
	}
	
	return resposta;
}

int main (){
	setlocale(LC_ALL, "");
	
	int numero;
	char resultado [200];
		
	printf ("Digite seu numero para o análise: ");
	scanf ("%i", &numero);
	
	strcpy (resultado, verificacao );
	
	printf ("Resultado: %s \n", resultado);
	
	return 0;
	
	
	
}
