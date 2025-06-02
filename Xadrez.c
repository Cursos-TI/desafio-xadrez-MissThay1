#include <stdio.h>

int main() {
    int numero;
    int direcaoTorre;
    int direcaoBispo;
    int direcaoRainha;
    int casasTorre = 0;
    int casasBispo = 0;
    int casasRainha = 0;
    
    
    printf("\033[32bem vindo! Jogador(a), ao jogo de xadrez!\033[0m\n");
    printf("Você está jogando com as peças brancas.\n");
    printf("\n");
    printf("Qual peça você escolhe? Escolha uma dessas opção\n");
    printf("\n");
    printf("1 - Torre\n");
    printf("2 - Bispo\n");
    printf("3 - Rainha\n");
    printf("Oplção inválida, você deve escolher uma das opções acima.\n");
    printf("\n");    
    scanf("%d", &numero);
    printf("\n");

    switch (numero) {
        case 1: {
            printf("\033[32mVocê escolheu a Torre!\033[0m\n");
            printf("A Torre se move em linha reta, tanto na horizontal quanto na vertical.\n");
            printf("Em qual direção você deseja mover a Torre?\n");
            printf("\n");
            printf("1 - Para cima\n");
            printf("2 - Para baixo\n");
            printf("3 - Para a esquerda\n");
            printf("4 - Para a direita\n");
            printf("\n");
            printf("Digite o número da opção desejada:\n");
            scanf("%d", &direcaoTorre);
            printf("Agora, quantas casas você deseja mover a Torre? (1 a 8)\n");
            scanf("%d", &casasTorre);

            if (casasTorre< 1 || casasTorre> 8) {
                printf("\033[31mMovimento inválido! A torre só pode se mover de 1 a 8 casas.\033[0m\n");
                break;
            }
           for (int i = 0; i < casasTorre; i++) { 

            switch (direcaoTorre) {
                        printf("Você moveu a torre %d casas para cima.\n", casasTorre);
                        printf("Cima\n");
                        break;
                    case 2:
                        printf("Você moveu a torre %d casas para baixo.\n", casasTorre);
                        printf("Baixo\n");
                        break;
                    case 3:
                        printf("Você moveu a torre %d casas para a esquerda.\n", casasTorre);
                        printf("Esquerda\n");
                        break;
                    case 4:
                        printf("Você moveu a torre %d casas para a direita.\n", casasTorre);
                        printf("Direita\n");
                        break;
                    default:
                        printf("Direção inválida! A torre só pode se mover para cima, baixo, esquerda ou direita.\n");
                        break;
            }
            break;
        }
              case 2:
                   printf("\033[32mVocê escolheu o Bispo!\033[0m\n");
                   printf("O Bispo se move pelas diagonais do tabuleiro.\n");
                   printf("Em qual direção você deseja se mover?\n");
                   printf("\n");
                   printf("1 - Cima e Esquerda\n");
                   printf("2 - Baixo e Esquerda\n");
                   printf("3 - Cima e Direita\n");
                   printf("4 - Baixo e Direita\n");
                   printf("\n");
                   printf("Digite o número da direção desejada:\n");
                   scanf("%d", &direcaoBispo);
                   printf("\n");

                   printf("Agora, quantas casas você deseja mover o Bispo?(1 a 8)\n");
                   scanf("%d", &casasBispo);

                   if (casasBispo < 1 || casasBispo > 8) {
                   printf("\033[31mMovimento inválido! O bispo só pode se mover de 1 a 8 casas, pelas diagonais.\033[0m\n");                       break;
                   }
                                               
                    int i = 0;
                    while (i < casasBispo) {
                         switch (direcaoBispo) {
                          case 1:
                        printf("Movendo o bispo %d casas na diagonal Cima-Esquerda...\n", casasBispo);
                        break;
                    case 2:
                        printf("Movendo o bispo %d casas na diagonal Baixo-Esquerda...\n", casasBispo);
                        break;
                    case 3:
                        printf("Movendo o bispo %d casas na diagonal Cima-Direita...\n", casasBispo);
                        break;
                    case 4:
                        printf("Movendo o bispo %d casas na diagonal Baixo-Direita...\n", casasBispo);
                        break;
                    default:
                        printf("Direção Diagonal Inválida!\n");
                        i = casasBispo;
                        break;
                     }
                          i++;
                    }
                    break;
                    
        case 5:
            printf("\033[32mVocê escolheu a Rainha!\033[0m\n");
            printf("A Rainha se move em linha reta, tanto na horizontal quanto na vertical, e também pelas diagonais.\n");
            printf("Em qual direção você deseja mover a Rainha?\n");
            printf("\n");
            printf("1 - Para cima\n");
            printf("2 - Para baixo\n");
            printf("3 - Para a esquerda\n");
            printf("4 - Para a direita\n");
            printf("5 - Cima e Esquerda\n");
            printf("6 - Baixo e Esquerda\n");
            printf("7 - Cima e Direita\n");
            printf("8 - Baixo e Direita\n");
            printf("\n");
            printf("Digite o número da opção desejada:");
            scanf("%d", &direcaoRainha);
            printf("\n");

            printf("Agora, quantas casas você deseja mover a Rainha? (1 a 8):\n");
            scanf("%d", &casasRainha);

            if (casasRainha < 1 || casasRainha > 8) {
                printf("\033[31Movimento inválido! A rainha só pode se mover de 1 a 8 casas.\033[0m\n");
                break;
            }

            int i = 0;
            do {
                switch (direcaoRainha) {
                    case 1:
                        printf("Você moveu a rainha %d casas para cima.\n", casasRainha);
                        break;
                    case 2:
                        printf("Você moveu a rainha %d casas para baixo.\n", casasRainha);
                        break;
                    case 3:
                        printf("Você moveu a rainha %d casas para a esquerda.\n", casasRainha);
                        break;
                    case 4:
                        printf("Você moveu a rainha %d casas para a direita.\n", casasRainha);
                        break;
                    case 5:
                        printf("Você moveu a rainha %d casas na diagonal Cima-Esquerda.\n", casasRainha);
                        break;
                    case 6:
                        printf("Você moveu a rainha %d casas na diagonal Baixo-Esquerda.\n", casasRainha);
                        break;
                    case 7:
                        printf("Você moveu a rainha %d casas na diagonal Cima-Direita.\n", casasRainha);
                        break;
                    case 8:
                        printf("Você moveu a rainha %d casas na diagonal Baixo-Direita.\n", casasRainha);
                        break;
                    default: 
                        printf("Direção inválida! Para a Rainha!\n");
                        i= casasRainha;
                        break;
            }
                        break; 
            i++;
            } while (i < casasRainha);
            break;               
            printf("\033[32mJogo concluído! Obrigado por jogar!\033[0m\n");
    return 0;
          }