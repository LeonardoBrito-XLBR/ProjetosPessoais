#include <stdio.h>
#include <locale.h>
#include <string.h>

//A mesma variavel não funciuonam nas mesmas funções diferentes 
float inflacaoDoPreco (float precoProduto){
	float inflacao;
	
	//Pode usar sem chaves na mesma linha de cada
	if (precoProduto < 100)
		inflacao = (precoProduto) + precoProduto * 0.10; // ou use 1.1
	else 
		inflacao=  (precoProduto) + precoProduto * 0.20; // ou use 1.2
	
	
	return inflacao;
}


int main(){
	setlocale(LC_ALL, "");
	
	
	float preco;
	float final;
	
	
	printf ("Digite o seu preço: ");
	scanf ("%f", &preco);
	
	final = inflacaoDoPreco(preco);
	
	printf ("O TOTAL: %.2f", final);
}
