#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main (){
	setlocale(LC_ALL,"");
	
	int i;
	int num;
	
	printf ("Digite o seu numero: ");
	scanf ("%i", &num);
	
	
	printf ("Tabuada de multiplicação do número: 5\n");
	for (i=1; i <=10; i++){
		printf ("%i X %i = %i \n", num, i, num*i);
	}

}
