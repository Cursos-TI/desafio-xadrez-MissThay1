#include <stdio.h>

int main() {

    const int casasTorre = 5;
    const int casasBispo = 5;
    const int casasRainha = 8;
    int contadorBispo = 0; 
    int contadorRainha = 0;
     
    printf("\033[32mBem vindo ao simulador de movimento das peças de xadrez!\033[0m\n");
    
    printf("\033[34mMovimentos da Torre\033[0m\n");
    for (int i = 0; i < casasTorre; i++) {
    printf("➡️ Direita!\n");
    }
    printf("\n"); 
    printf("\033[31mMovimentos do Bispo\033[0m\n");

     while (contadorBispo < casasBispo) {
    printf("↗️ Cima Direita!\n");
        contadorBispo++;
    }
    printf("\n");
    printf("\033[33mMovimentos da Rainha\033[0m\n");  
    do {
    printf("⬅️ Esquerda!\n");
        contadorRainha++;
    } while (contadorRainha < casasRainha);
    printf("\n");

    printf("Simulação Concluída :>\n");
    printf("\033[32mObrigada por usar o simulador!\033[0m\n");
    return 0;
}
