#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <time.h>

//CRIANDO ALGUNS TITULOS DO CODIGO

void inicio (){
	printf ("========================================");
	printf ("\n===== SAUDA��ES VIAJANTE DO TEMPO =====");
	printf ("\n========================================");
	}

void fim (){

	printf ("========================================");
	printf ("\n===== AT� MAIS CEDO VIAJANTE DO TEMPO =====");
	printf ("\n========================================");
	}	


	int main (){
		setlocale (LC_ALL, "portuguese"); //APLICANDO A BIBLIOTECA DAS ACENTUA��ES
		
		inicio ();
		
		char nomes [200][5]; //DECLARANDO VETOR = A QUANTIDADE DE CARACTERES E QUANTOS VARIAVEIS TEM 5
		int i;
		
		for (i=0; i<5; i++){
			printf ("\n\nDigite o nome do %d� Piloto: ", i+1);
			scanf ("%d", &nomes[i]);
			fflush (stdin);
		}
		
	}	
