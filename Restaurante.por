programa {
  funcao inicio() {
    //Declarando as funções 
    cadeia opcao
  
    //IMPLEMENTAÇÃO DE PROJETO 
    cadeia nome, cpf, telefone, email, pagamento

    //Solicitando os dados do comprador 
    escreva ("\n ==== Olá seja muito bem vindo ====")
    escreva ("\n\t\t\t\tQual o seu nome: ")
    leia(nome)
    escreva (" \t\t\t\tQual seu CPF: ")
    leia (cpf)
    escreva (" \t\t\t\tQual o seu email: ")
    leia (email)

   //Exibindo as informações 
    escreva ("\n\n\t\t\t==== Menu do Ratatuille =====")
    escreva ("\n\t\t\t1 - Picanha \t\t\t\t R$ 25,00")
    escreva ("\n\t\t\t2 - Lasanha \t\t\t\t R$ 20,00")
    escreva ("\n\t\t\t3 - Strogonoff \t\t\t R$ 18,00")
    escreva ("\n\t\t\t4 - Bife Acebolado \t R$ 15,00")
    escreva ("\n\t\t\t5 - Pão com Ovo \t\t R$ 5,00")
    escreva ("\n\t\t\t======== Fim do Menu ==========")
    escreva ("\n\n Qual a sua opção de hoje? ")
    leia (opcao)
    
    //Escolhendo os pratos para a pessoa
    limpa ()
    escreva ("\n Boa Escolha Saindo agora ...")
    escolha (opcao){
      caso "1":
      escreva ("\n\n\tPicanha por 25,00")
     
      pare
      caso "2":
      escreva ("\n\tLasanha - 20,00")

      pare 
      caso "3":
      escreva ("\n\tStrogonoff - 18,00")

      pare
      caso "4":
      escreva ("\n\tBife Acebolado - 15,00")

      pare
      caso "5":
      escreva ("\n\tPão com Ovo - 5,00")

    }


    //Forma de pagamento
    escreva ("\n\n === FORMA DE PAGAMENTO ===")
    escolha (pagamento){

      caso "pix":
      leia (pagamento)

      pare 
      caso "cartão":
      leia (pagamento)

      pare
      caso "dinheiro":
      leia (pagamento)

      pare
      caso contrario:
      escreva ("\n Demais forma de pagamento: ")
      leia (pagamento)

    }

    //Finalizano pedido 
    escreva ("\n\n===== Ultimas Etapas do Pedido =====")
    escreva ("\n Nome do comprador: ", nome)
    escreva ("\n CPF do compradror: ", cpf)
    escreva ("\n Email do comprador: ", email)
    escreva ("\n Forma de Pagamento ecolhida: ", pagamento)
    escreva("\n\n ===== Fim do Pagamento, aproveite =====")
    
  }
}