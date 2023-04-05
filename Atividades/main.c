#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int  sel, local, selection;

char ret;

char openArq [10] = {"start "}, arquivo [20], type [4] = {".exe"};

bool booleana;


void main(){

    system("cls");

    printf("\n\n"

    "######          /*/   ###     ######  ######## #### ##     ## #### ######## #### ########  ######  \n"
    "##    ##       /*/   ## ##   ##    ##    ##     ##  ##     ##  ##     ##     ##  ##       ##    ## \n"
    "##            /*/   ##   ##  ##          ##     ##  ##     ##  ##     ##     ##  ##       ##       \n"
    "##           /*/   ##     ## ##          ##     ##  ##     ##  ##     ##     ##  ######    ###### \n"
    "##          /*/    ######### ##          ##     ##   ##   ##   ##     ##     ##  ##             ## \n"
    "##    ##   /*/     ##     ## ##    ##    ##     ##    ## ##    ##     ##     ##  ##       ##    ## \n"
    "######    /*/      ##     ##  ######     ##    ####    ###    ####    ##    #### ########  ###### \n\n "


    "Selecione o que deseja executar: \n\n"
    "1 - Participantes e organizacao \n"
    "2 - Atividades \n"
    "3 - Sair \n\n"
    "LEMBRE-SE - PARA SELECIONAR A ATIVIDADE ESCREVA O NOME COMPLETO DELA. EX: 'exercicio-1'\n\n");

    scanf("%d", &selection);

    if(selection == 1){
        participantes();
    } else if (selection == 2){
        booleana = true;
        atividades(booleana);
    } else if (selection == 3){
        booleana = false;
        atividades(booleana);
    } else {
        error();
    }


}

void participantes(){
        system("cls");
        printf("A divisao dos trabalhos foi a seguinte:\n\n"
               "Participantes do trabalho: \n\n"
               "  - Joao Igor Moura Martins - Exe. 1 ao 3; \n "
               " - Jose Octavio Lachi Pinhero - Exe. 4 e 5; \n "
               " - Gabriel dos Santos Sousa Exe. 6 ao 8 \n\n "
               "Cada um dos integrantes concordou em realizar uma quantidade de atividades dentre as entregues pelo professor. Apos a resolucao, foi-se explicado por cada um dos integrantes do grupo como se foi realizado cada linha do script criado para a resolucao do problema proposto. Apos isso, ainda se foi realizado cada um dos exercicios da tabela por cada um dos integrantes de maneira singular, na total intensao de testar seus conhecimentos de logica e codificacao! \n\n"
               "Deseja voltar ao inicio? (S/N): ");
        scanf("%s", &ret);
        returnState();

}

void atividades(booleana){
    if(booleana == true){


        system("cls");
        printf("*******************************************************************\n"
               "**          NOSSO SETUP SO FUNCIONA COM ARQUIVOS .EXE            **\n"
               "**  CERTIFIQUE-SE DE QUE TODOS OS EXERCICIOS ESTEJAM COMPILADOS! **\n"
               "*******************************************************************\n\n"
               "LEMBRE-SE - PARA SELECIONAR A ATIVIDADE ESCREVA O NOME COMPLETO DELA. EX: 'exercicio-1'\n\n"
               "Selecione a atividade que deseja executar:\n\n");

        system("dir *.exe");
        printf("\n\n - Caso deseje voltar ao inicio, digite 'return' - \n\n"
              "LEMBRE-SE - PARA SELECIONAR A ATIVIDADE ESCREVA O NOME COMPLETO DELA! EX: 'exercicio-1'\n\n");
        scanf("%s", &arquivo);

        if(strcmp(arquivo,"return") == 0){
            main();
        } else {
            strcat(arquivo, type);
            strcat(openArq, arquivo);
        }

        system(openArq);

        strcpy(openArq, "start ");
        arquivo[0] = "\0";
        strcpy(type, ".exe");

        atividades();
    } else if (booleana == false){
        system("PAUSE");
    }
}


void error(){
    system("cls");

    printf("ERRO: Voce digitou uma opcao invalida! \n\n"
        "Retornar ao inicio? (S/N): ");
    scanf("%s", &ret);
    returnState();
}

void returnState(){
    if(ret == 's' || ret == 'S'){
        main();
    } else if(ret == 'n' || ret == 'N'){
        system("exit");
    } else {
        error();
    }
}
