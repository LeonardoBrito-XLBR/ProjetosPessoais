#include <stdio.h>
#include <locale.h>
#include <string.h>

//Função acima
float conversao (float num1){

	//OPEREÇÃO
	float centimentro;
	
	//sempre retorna para o main o principal
	return centimentro = num1 * 100;
}

int main (){
	
	float metro; 
	float resultado;
	
	printf ("Digite quanto metros vc quer: ");
	scanf ("%f", &metro);
	
	//simulando a função acima 
	resultado = conversao (metro);
	
	printf ("O resultado da conversão foi: %.3f ", resultado);
	
	return 0;
	
	
}
