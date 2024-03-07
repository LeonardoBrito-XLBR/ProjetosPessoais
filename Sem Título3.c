#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"");
	
	int i, num, soma; 
	float media;
	
	for (i =1; i <=4; i++){
	
	printf ("Digite o seu numero: ");
	scanf ("%i", &num);
	
	soma = soma + num;
	media = soma /4;
	}
	
	printf ("\nA media dos numero %1.f", media);
	
}
