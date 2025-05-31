#include <stdio.h>

int main() {
    int numero;
    int direcaoTorre;
    int direcaoBispo;
    int direcaoRainha;
    int casasTorre = 0;
    int casasBispo = 0;
    int casasRainha = 0;
    
    
    printf("bem vindo! Jogador(a), ao jogo de xadrez!\n");
    printf("Você está jogando com as peças brancas.\n");
    printf("\n");
    printf("Qual peça você escolhe? Escolha uma dessas opção\n");
    printf("\n");
    printf("1 - Torre\n");
    printf("2 - Bispo\n");
    printf("3 - Rainha\n");
    priintf("Oplção inválida, você deve escolher uma das opções acima.\n");
    printf("\n");    
    scanf("%d", &numero);
    printf("\n");

    switch (numero) {
        case 1: {
            printf("Você escolheu a torre!\n"); // Texto verde no terminal,e  depois reseta a cor
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
                printf("Movimento inválido! A torre só pode se mover de 1 a 8 casas.\n");
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
                   printf("Você escolheu o Bispo!\n");//mude o texto para verde e depois resete para a cor original
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

                   if (casasBispo || casasBispo> 8) {
                       printf("Movimento inválido! O bispo só pode se mover de 1 a 8 casas, pelas diagonais.\n");
                       break;
                   }
                                               
                    int i = 0;
                    while (i < casasBispo) {
                         switch (direcaoBispo) {
                          case 1:
                            printf("Movendo o bispo para %d casas na diagonal esquerda (Cima-Esquerda).......\n", casasBispo);
                            printf("Diagonal Cima-Esquerda\n");
                            }
                            break;
                          case 3:
                            printf("Movendo o bispo %d casas na diagonal esquerda da parte de baixo ( Baixo-Esquerda)......\n", casasBispo);
                            printf("Diagonal Baixo-Esquerda\n");
                            break;
                          case 4:
                            printf("Movendo o bispo %d casas na diagonal direita (Cima-Direita).......\n", casasBispo);
                            printf("Cima-Direita\n");
                            break;
                          case 5:
                            printf("Movendo o bispo %d casas na diagonal direita da parte de baixo (Baixo-Direita)......\n", casasBispo);
                            printf("(Baixo-Direita\n");
                            break;
                          default:
                            printf("Direção Diagonal Inválida! O bispo só pode se mover para cima e esquerda, baixo e esquerda, cima e direita ou baixo e direita.\n");
                            break;
                     }
                          i++;
                    }
                    break;
                    

    return 0;
}