#include <stdio.h>
#include <stdlib.h>
#include "estruturas.h"
#include "funcoes.h"

enum menu_principal{
    ORESERVAR = 1,
    OPESQUISAR,
    OADICIONAR,
    OEDITAR,
    ODELETAR,
    OMOSTRAR,
    OSAIR,// OpcaoSAIR
};

int main(){
    // criar lista de Filmes
    FILMES *head_filmes = NULL;

    // criar vetor de Bilhetes
	BILHETES *vBilhetes;
    int tam_vet = 5;
    vBilhetes = malloc(tam_vet * sizeof(BILHETES));

    int opMenu, respMenu;
    do{
        LimpaTela();
        printf("Menu Principal\n\n");
        printf("1) Reservar bilhete\n");
        printf("2) Pesquisar bilhete\n");
        printf("3) Adicionar novo filme\n");
        printf("4) Editar filme\n");
        printf("5) Deletar filme\n");
        printf("6) Mostrar lista de filmes\n");
        printf("7) Sair\n\n");
        printf("Escolha uma das opcoes acima: ");
        scanf("%d", &opMenu);

        switch(opMenu){
            case ORESERVAR:
                LimpaTela();
                printf("Reservar bilhete\n\n");
                Imprimir(head_filmes);
                Reservar(vBilhetes, tam_vet, head_filmes);
            break;
            case OPESQUISAR:
                LimpaTela();
                printf("Pesquisar bilhete\n\n");
                Pesquisar(vBilhetes);
            break;
            case OADICIONAR:
                LimpaTela();
                printf("Adicionar novo filme\n\n");
                Inserir(&head_filmes);   
            break;
            case OEDITAR:
                LimpaTela();
                printf("Editar filme\n\n");
                Imprimir(head_filmes);
                Editar(head_filmes);
            break;
            case ODELETAR:
                LimpaTela();
                printf("Deletar filme\n\n");
                Imprimir(head_filmes);
                Deletar(&head_filmes);
            break;
            case OMOSTRAR:
                LimpaTela();
                printf("Mostrar lista de filmes\n\n");
                Imprimir(head_filmes);
                continuar = 1; //recebe 1 pois eu ja sei que quando eu terminar de mostrar toda a lista de filmes eu quero continuar (voltar) para o Menu
            break;
            case OSAIR:
                printf("Saindo do programa...\n");
            break;
            default:
                printf("Opcao invalida!");
        }

    if(continuar == 0){// indica que eu quero voltar direto para o Menu
        respMenu = 1;// entao, respMenu == 1, que quer dizer que eu quero voltar para o menu
    } else{// continuar == 1, é para quando a funcao for terminada, ela NAO volte para o menu e pergunte se o usuario gostaria de sair do programa
        if(opMenu != OSAIR){
            printf("\nDigite [1] para voltar ao Menu e [0] para Sair do programa: ");
            scanf("%d", &respMenu);
        }
    }
    }while((respMenu == 1) && (opMenu != OSAIR));
    
    free(head_filmes);
    free(vBilhetes);
    return 0;
}