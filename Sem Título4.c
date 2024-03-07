#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"");
	
	int i, num, soma, quant; 
	float media;
	
	for (i =1; i <=4; i++){
	
	printf ("Digite o seu numero: ");
	scanf ("%i", &num);
	
	quant = quant + num;
	soma = soma + num;
	media = soma /num;
	}
	
	printf ("\nA media dos numero %1.f", media);
	
}

