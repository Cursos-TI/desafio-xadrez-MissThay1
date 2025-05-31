#include <stdio.h>

int main() {
    int numero;
    int direcao;
    int casas = 0;
    
    
    printf("bem vindo! Jogador(a), ao jogo de xadrez!\n");
    printf("Você está jogando com as peças brancas.\n");
    printf("\n");
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
            printf("\n");
            printf("1 - Para cima\n");
            printf("2 - Para baixo\n");
            printf("3 - Para a esquerda\n");
            printf("4 - Para a direita\n");
            printf("\n");
            printf("Digite o número da direção desejada:\n");
            scanf("%d", &direcao);
            printf("Quantas casas você deseja mover a Torre?\n");
            scanf("%d", &casas);

            if (casas < 1 || casas > 8) {
                printf("Movimento inválido! A torre só pode se mover de 1 a 8 casas.\n");
                break;
            }

            switch (direcao) {
                case 1:
                   printf("Você moveu a torre %d casas para cima.\n", casas);
                    for (int i = 0; i < casas; i++) {
                   printf("Cima\n");
                    }
                    break;
                case 2:
                    printf("Você moveu a torre %d casas para a baixo\n", casas);
                    for (int i = 0; i < casas; i++) {
                        printf("Baixo\n");
                    }
                    break;
                case 3:
                    printf("Você moveu a torre %d casas para a esquerda\n", casas);
                    for (int i = 0; i < casas; i++) {
                        printf("Esquerda\n");
                    }
                    break;
                 case 4:
                    printf("Você moveu a torre %d casas para a direita\n", casas);
                    for (int i = 0; i < casas; i++) {
                        printf("Direita\n");
                    }
                    break;
                default:
                    printf("Direção inválida! A torre só pode se mover para cima, baixo, esquerda ou direita.\n");
                    break;
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