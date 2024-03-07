#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"");
	
	int i,num, par = 0, impar= 0; 
	
	for(i =1; i<=5; i++ ){
		printf ("Digite o seu %iª numero:", i);
		scanf ("%i",&num);
			
			
		if (num %2 == 0){
			par = par + 1;
	
		}else{ 
			impar++; 
		} 
	} 
	
	printf ("Quantiudade de pares %i: ", par);
	printf ("Quantidade de impar %i", impar);
} 
