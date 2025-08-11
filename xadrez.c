#include <stdio.h>

//estrutura de movimentação da torre com recurso
void torre(int mtorre) {
    if(mtorre > 0) {
        printf("Direita!\n");
        torre(mtorre - 1);        
        } 
        
}

//estrutura de movimentação do bispo com recurso
void bispo(int mbispo) {
    if(mbispo > 0) {         
        printf("Cima, Direita!\n"); 
        bispo(mbispo - 1); 
        } 
            
    }      

//estrutura de movimentação da rainha com recurso
void rainha (int mrainha) {
    if(mrainha > 0) {
        printf("Esqueda!\n");
        rainha(mrainha - 1);
        } 
        
}

/* 
O jogo está em fase inicial e por enquanto deve fazer a movimentação das tres peças abaixo:

Torre: Movendo 05 casas para direita
Bispo: movendo 05 casas na diagonal
rainha: movendo 08 casas a esquerda 
*/

int main () {


    //declaracao de variaveis
    int movtorre = 5, movbispo1 = 5, movrainha = 8, movcavalo1 = 0;
    


printf("Bem vindo ao teste de xadrez!\n"); // tela de bem vindo
printf("A movimentação das peças será automatica\n"); //explicação do teste
printf("pois ainda estamos em fase de teste!\n\n");

//movimentação das peças


//estrutura de movimento definida na função void torre
printf("MOVIMENTAÇÃO DA TORRE:\n");
torre(movtorre);
printf("\n");



//estrutura de movimento definida na função void bispo
printf("MOVIMENTAÇÃO DO BISPO:\n");
bispo(movbispo1);
printf("\n");

    
//estrutura de movimento definida na função void rainha
printf("MOVIMENTAÇÃO DA RAINHA!\n");
rainha(movrainha);   
printf("\n");

//estrutura de loop aninhada para movimentação do cavalo

printf("MOVIMENTAÇÃO DO CAVALO!\n");

    for (movcavalo1; movcavalo1 < 2; movcavalo1++) { //loop externo 
        
        if (movcavalo1 < 1) { //loop interno 
            printf("Direita!\n"); //impressão do loop interno      
        }
        printf("Cima!\n"); //impressão do loop externo
    }

    return 0;

}

