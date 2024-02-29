programa {
  funcao inicio() {

    //Declarando as variavies para opÃ§Ãµes 
    cadeia nome, pagamento, sabor, inicio
    inteiro opcao

    //Variavies desviadas
    cadeia confirmacao, final
    inteiro troco

    //Solicitando os dados do comprador 
    escreva ("\n\b ==== OlÃ¡ Bem Vindo a Pizzaria FNAF ==== \b")
    escreva ("\n\n\t\tComo se chama? ")
    leia(nome)
    escreva ("\t\t\t\t\nEsperamos que você sinta-se satisfeito com nossos serviços.")
    escreva ("\nMuito prazer fique a vontade.")

    //Confirmando para a proxima etapa
    escreva ("\n\nPronto para uma experiência inesquecível? ")
    leia (inicio)

   //Exibindo as informaÃ§Ãµes do Menu da Pizzaria 
   limpa ()
    escreva ("\n\n\t\t\t\t\t\t======== Menu do FNAF Pizza ========")
    escreva ("\n\t\t\t1 - Pizza de Calabresa (Clássica) \t\t\t\t R$ 25,00")
    escreva ("\n\t\t\t2 - Pizza de Frango (Nordestino) \t\t\t\t\t R$ 20,00")
    escreva ("\n\t\t\t3 - Pizza de Queijo (Elegante) \t\t\t\t\t\t R$ 23,00")
    escreva ("\n\t\t\t4 - Pizza de Carne (Dinossauro) \t\t\t\t\t R$ 24,00")
    escreva ("\n\t\t\t5 - Pizza de Chocolate (Fofo) \t\t\t\t\t\t R$ 27,00")
    escreva ("\n\t\t\t6 - Pizza de doce de Leite (Apaixonado) \t R$ 28,00")
    escreva ("\n\t\t\t\t\t\t=========== Fim do Menu =============")

    //Solitando a opÃ§Ã£o que ele deseja
    escreva ("\n\nCaso esteja com duvida, selecione de 7 - 10")
    escreva ("\nQual a sua opção de Hoje: ")
    leia (opcao)
  
    //Atribuindo valores a opÃ§Ã£o desejada atravÃ©s do menu
    limpa ()
    escreva ("Boa Escolha - Estamos preparando: ")

    escolha (opcao){
      caso 1:
      sabor = "\nPizza de Calabresa (Clássica) - R$ 25,00"

      pare
      caso 2:
      sabor = "\nPizza de Frango (Nordestino) - R$ 20,00"

      pare 
      caso 3:
      sabor = "\nPizza de Queijo (Elegante) - R$ 23,00"

      pare
      caso 4:
      sabor = "\nPizza de Carne (Dinossauro) - R$ 24,00"

      pare
      caso 5:
      sabor = "\nPizza de Chocolate (Fofo) - R$ 27,00"

      pare
      caso 6:
      sabor = "\nPizza de Doce de Leite (Apaixonado) - R$ 28,00"

      pare
      caso 7:
      sabor = "\nPizza de Hot-Dog - R$ 32,00"

      pare
      caso 8:
      sabor = "\nPizza de Strogonoff - R$ 34,00"

      pare
      caso 9: 
      sabor = "\nPizza de Susshi - R$ 30,00"

      pare
      caso 10: 
      sabor = "\nPizza de Rosas - R$ 38,00"
    }
    

 
    escreva ("", sabor)

    //Aplicando uma condiÃ§Ã£o caso o cliente nÃ£o goste
    escreva ("\nPodemos começar a preparar? ")
    leia (confirmacao)
   
    //Perguntando qual a sua forma de pagamento em numero

    
    escreva ("\t\t\n======= FORMA DE PAGAMENTO =======")
    escreva ("\n Aceitamos as seguintes formas de pagamento")
    escreva ("\n 1- Pix ")
    escreva ("\n 2- Cartão")
    escreva ("\n 3- Dinheiro")
    escreva ("\n\n Escolha uma forma de pagamento: ")
    leia (pagamento)

    se (pagamento == "Dinheiro" ou "dinheiro"){
    escreva ("\tDeseja troco para quanto? ")
    leia (troco)
    }
    

    //Finalizano pedido 
    limpa ()
    escreva ("===== Ultimas Etapas do Pedido =====")
    escreva ("\n\nNome do comprador: ", nome)
    escreva ("\nForma de Pagamento escolhida: ", pagamento)

    se (pagamento == "Pix"){
      escreva ("\nNossa chave Pix: pizzariafnaf1973@gmail.com")
    }
    
    se (pagamento == "Dinheiro"){
      escreva ("\nTroco para: R$ ",troco)
    }
    escreva ("\nO sabor escolhido foi: ", sabor)
    escreva ("\nPodemos confirmar: ")
    leia(final)

    limpa ()
    escreva("\b ===== Pizzaria FNAF deste 1973 ===== \b")
    escreva("\n\nObrigado por escolher nosso serviço, faça um bom apetite.")
    
  }
}
