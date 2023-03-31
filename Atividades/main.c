#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int  sel, local, selection;

char ret;

char openArq [10] = {"start "}, arquivo [20], type [4] = {".exe"};


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
    "3 - Sair \n\n");

    scanf("%d", &selection);

    if(selection == 1){
        participantes();
    } else if (selection == 2){
        atividades();
    } else if (selection == 3){
        system("exit");
    } else {
        error();
    }

}

void participantes(){
        system("cls");
        printf("Participantes do trabalho: \n\n"
               "  - Joao Igor Moura Martins \n "
               " - Jose Octavio Lachi Pinhero \n "
               " - Gabriel dos Santos Sousa \n\n "
               "A divisao dos trabalhos foi a seguinte:\n\n"
               "Cada um dos integrantes concordou em realizar uma quantidade de atividades dentre as entregues pelo professor. Apos a resolucao, foi-se explicado por cada um dos integrantes do grupo como se foi realizado cada linha do script criado para a resolucao do problema proposto. Apos isso, ainda se foi realizado cada um dos exercicios da tabela por cada um dos integrantes de maneira singular, na total intensao de testar seus conhecimentos de logica e codificacao! \n\n"
               "Deseja voltar ao inicio? (S/N): ");
        scanf("%s", &ret);
        returnState();

}

void atividades(){
    system("cls");
    printf("*******************************************************************\n"
           "**          NOSSO SETUP SO FUNCIONA COM ARQUIVOS .EXE            **\n"
           "**  CERTIFIQUE-SE DE QUE TODOS OS EXERCICIOS ESTEJAM COMPILADOS! **\n"
           "*******************************************************************\n\n"
           "Selecione a atividade que deseja executar:\n\n");

    system("dir *.exe");
    printf("\n\n - Caso deseje voltar ao inicio, digite 'return' - \n");
    scanf("%s", &arquivo);

    if(strcmp(arquivo,"return") == 0){
        main();
    } else {
        strcat(arquivo, type);
        strcat(openArq, arquivo);
    }

    system(openArq);
    atividades();

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