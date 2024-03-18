#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <time.h>

//CRIANDO ALGUNS TITULOS DO CODIGO

void inicio (){
	printf ("========================================");
	printf ("\n===== SAUDAÇÕES VIAJANTE DO TEMPO =====");
	printf ("\n========================================");
	}

void fim (){

	printf ("========================================");
	printf ("\n===== ATÉ MAIS CEDO VIAJANTE DO TEMPO =====");
	printf ("\n========================================");
	}	


	int main (){
		setlocale (LC_ALL, "portuguese"); //APLICANDO A BIBLIOTECA DAS ACENTUAÇÕES
		
		inicio ();
		
		char nomes [200][5]; //DECLARANDO VETOR = A QUANTIDADE DE CARACTERES E QUANTOS VARIAVEIS TEM 5
		int i;
		char nomeNave [200];
		
		
		printf ("Sejam Muitos bem vindos");
		printf ("Digite o nome da Nave: "); //NAVE
		scanf ("%s",&nomeNave);
		
		
		for (i=0; i<5; i++){
			printf ("\n\nDigite o nome do %dª Piloto: ", i+1);
			scanf ("%d", &nomes[i]);
			fflush (stdin);
		}
		
	}	
