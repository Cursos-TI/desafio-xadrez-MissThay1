#include <stdio.h>

int main() {
    int numero;

    printf("Bem-vindo(a) jogador de xadrez, escolha uma peça para jogar!\n");
    printf("Você é o jogador das peças brancas.\n");
    printf("Qual peça você escolhe?\n");

    printf("Escolha uma opção:\n");
    printf("1 - Torre\n");
    printf("2 - Bispo\n");
    printf("3 - Rainha\n");
    
    scanf("%d", &numero);

    switch (numero) {
        case 1: {
            printf("Você escolheu a Torre!\n");
            printf("A Torre se move em linha reta, tanto na horizontal quanto na vertical.\n");
            printf("Em qual direção você deseja mover a Torre?\n");
            printf("1 - Horizontal\n");
            printf("2 - Vertical\n");

            int direcao;
            scanf("%d", &direcao);

            if (direcao == 1) {
                printf("Você moveu a Torre horizontalmente.\n");
            } else if (direcao == 2) {
                printf("Você moveu a Torre verticalmente.\n");
            } else {
                printf("Direção inválida!\n");
            }
            break;
        }
        case 2:
            printf("Você escolheu o Bispo!\n");
            printf("O Bispo se move pelas diagonais do tabuleiro.\n");
            break;
        case 3:
            printf("Você escolheu a Rainha!\n");
            printf("A Rainha é a peça mais poderosa, pois ela se move em qualquer direção: horizontal, vertical ou diagonal.\n");
            break;
        default:
            printf("Opção inválida!\n");
            break;
    }
          
    return 0;
}