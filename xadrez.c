#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

/* 
O jogo está em fase inicial e por enquanto deve fazer a movimentação das tres peças abaixo:

Torre: Movendo 05 casas para direita
Bispo: movendo 05 casas na diagonal
rainha: movendo 08 casas a esquerda 
*/
    int movtorre = 0, movbispo1 = 0, movbispo2 = 0, movrainha = 8;


printf("Bem vindo ao teste de xadrez!\n"); // tela de bem vindo
printf("A movimentação das peças será automatica\n"); //explicação do teste
printf("pois ainda estamos em fase de teste!\n\n");

//movimentação das peças

printf("MOVIMENTAÇÃO DA TORRE:\n");

 while (movtorre <= 5) {  // while deve conter uma condição que caso seja falsa interrompe a repetição do codigo
        if (movtorre > 0) { 
            printf("Direita!\n");
        }
        movtorre++; // variavel para evitar loop infinito no codigo
    }
    printf("\n"); // linha de separação

    //a partir daqui esta o comando de movimentação do bispo

    printf("MOVIMENTAÇÃO DO BISPO:\n");

    do {   //executa o codigo ao menos um vez, mesmo que a condição seja falsa  

    if (movbispo1 > 0 && movbispo2 > 0)   

    printf("Direita, cima!\n");

    movbispo1++;
    movbispo2++;

    } while (movbispo1 <= 5 && movbispo2 <= 5); //condição para execução do codigo

    printf("\n"); // linha de separação

    printf("MOVIMENTAÇÃO DA RAINHA!\n");

    /*for (variavel, condição, incremento), a variavel pode ser criada dentro do FOR
    mas só pode ser usada nessa parte do codigo se for criada aqui, para usar a variavel em 
    outros lugares do codigo a variavel deve ser criada fora do FOR*/

    for (movrainha; movrainha > 0; movrainha--) { // usar ; como separador. EXEMPLO for (a; b == 0; c++)

        if (movrainha <= 8)
        printf("Esquerda!\n");      
    }

    return 0;

}


    return 0;
}
