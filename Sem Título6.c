#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"");
	
	int i, num, soma = 0;
	float media = 0;
	
	for (i =1; i <=3; i++){
	
	printf ("Digite o seu %iª numero: ", i);
	scanf ("%i", &num);
	
	soma = soma + num;
	media = soma / 3;
	}
	
if (media > 7){
	printf ("Aprovado");
	
} else if (media < 7 &&  media > 4){

	 printf ("Recuperaç]ão");
	 
} else {

	printf ("Reprovado");
}
		
}














































































































































































