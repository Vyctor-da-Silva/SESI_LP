#include <stdio.h>

int main() {

    char continuar = 's';
// titulo do jogo
printf("\n |-=================-|JOGO DOS TORCEDORES DO SANTOS|-=================-|\n");
    //armazenamento de vitorias e empates
    int vitoriasX = 0;
    int vitoriasO = 0;
    int empates = 0;
    // repetidor
    while(continuar == 's' || continuar == 'S') {
        // armazenamento de jogadas
        char v[3][3] = {
            {' ',' ',' '},
            {' ',' ',' '},
            {' ',' ',' '}
        };

        int l, c;
        char jogador = 'X';
        int venceu = 0;
        // formação do tabuleiro
        for(int jogada = 0; jogada < 9; jogada++) {

            printf("\n");

            for(int i = 0; i < 3; i++) {

                for(int j = 0; j < 3; j++) {

                    printf(" %c ", v[i][j]);

                    if(j < 2)
                        printf("|");
                }

                printf("\n");

                if(i < 2)
                    printf("-----------\n");
            }
            // selecao de jogada
            printf("\nJogador %c\n", jogador);
            printf("Linha e coluna: ");
            scanf("%d %d", &l, &c);

            if(v[l][c] != ' ') {

                printf("Posicao ocupada!\n");
                jogada--;
                continue;
            }

            v[l][c] = jogador;
            // checa a vitoria 
            for(int i = 0; i < 3; i++) {

                if(v[i][0] == jogador &&
                   v[i][1] == jogador &&
                   v[i][2] == jogador) {

                    venceu = 1;
                }

                if(v[0][i] == jogador &&
                   v[1][i] == jogador &&
                   v[2][i] == jogador) {

                    venceu = 1;
                }
            }

            if(v[0][0] == jogador &&
               v[1][1] == jogador &&
               v[2][2] == jogador) {

                venceu = 1;
            }

            if(v[0][2] == jogador &&
               v[1][1] == jogador &&
               v[2][0] == jogador) {

                venceu = 1;
            }
            //  faz um novo tabuleiro com a jogada
            if(venceu) {

                printf("\n");

                for(int i = 0; i < 3; i++) {

                    for(int j = 0; j < 3; j++) {

                        printf(" %c ", v[i][j]);

                        if(j < 2)
                            printf("|");
                    }

                    printf("\n");

                    if(i < 2)
                        printf("-----------\n");
                }
                // procura um vencedor 
                printf("\nJogador %c deu uma de neymar!\n", jogador);

                if(jogador == 'X')
                    vitoriasX++;
                else
                    vitoriasO++;

                break;
            }
            // troca os jogadores
            if(jogador == 'X')
                jogador = 'O';
            else
                jogador = 'X';

            // empate
            if(jogada == 8 && !venceu) {

                printf("\ndeu veia!\n");
                empates++;
            }
        }
        // placar
        printf("\n|-===-| PLACAR |-===-|\n");
        printf("X: %d vitorias\n", vitoriasX);
        printf("O: %d vitorias\n", vitoriasO);
        printf("veia: %d\n", empates);
        // controlador de repetições
        printf("\nrevanche? (s/n): ");
        scanf(" %c", &continuar);
    }
    // final
    printf("\nacabou!\n");

}