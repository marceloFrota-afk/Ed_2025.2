#include <stdio.h>
#include <math.h>
#include <string.h>

#define MAX_PERGUNTAS 15
#define OBJETIVO 5

int main() {

    char entrada[50];
    int escolha;

    do {
        printf("MATH GAME\n");
        printf("1 - Iniciar jogo\n");
        printf("2 - Instrucoes\n");
        printf("0 - Sair\n");
        printf("Escolha: ");

        while (1) {
            fgets(entrada, sizeof(entrada), stdin);
            if (sscanf(entrada, "%d", &escolha) == 1 &&
                (escolha == 0 || escolha == 1 || escolha == 2)) {
                break;
            } else {
                printf("Opcao invalida. Digite 0, 1 ou 2: ");
            }
        }

        if (escolha == 0) {
            printf("bye bye\n");
            break;
        }

        if (escolha == 2) {
            printf("\nBem vindo ao Math Game! O jogo funciona da seguinte forma:\nVoce tera 15 questoes de matematica, que devem ser resolvidas. Leia as contas igual como as programamos em nossos trabalhos, resolva cada uma delas assumindo o papel da maquina! Cada acerto adiciona 1 ponto, e cada erro retira 1 ponto.\nAcumulando 5 pontos voce vence. Caso contrario, its over :D\n\n");
            continue;
        }

        if (escolha == 1) {
            int pilha[OBJETIVO];
            int topo = -1;

            char *perguntas[MAX_PERGUNTAS] = {
                "10 - 3 * 2 + 1",
                "(10 - 3) * (2 + 1)",
                "pow(2, 3) + 10 % 4",
                "sqrt(64) + 20 / 3",
                "pow(2 + 1, 3) - 5",
                "15 % 4 * 2",
                "sqrt(81) + 2 * 3 - 1",
                "20 / (2 + 3) * 4",
                "pow(3, 2) + 18 / 5",
                "25 % (3 + 2)",
                "sqrt(100) / 2 + 3",
                "pow(2, 4) % 6",
                "30 / 4 + 2 * 3",
                "sqrt(49 + 15)",
                "pow(2, 3 + 1) / 4"
            };

            int respostasCorretas[MAX_PERGUNTAS] = {
                5, 21, 10, 14, 22, 6, 14, 16, 12, 0, 8, 4, 13, 8, 4
            };

            int respostaUsuario;

            printf("\nMATH GAME!!!!\n");
            printf("Objetivo: acumule 5 pontos e torne-se um so com o computador!\n\n\n\n");

            for (int i = 0; i < MAX_PERGUNTAS; i++) {

                printf("Pergunta %d: quanto e %s ? ", i + 1, perguntas[i]);

                while (1) {
                    fgets(entrada, sizeof(entrada), stdin);
                    if (sscanf(entrada, "%d", &respostaUsuario) == 1) {
                        break;
                    } else {
                        printf("Entrada invalida. Digite um numero inteiro: ");
                    }
                }

                if (respostaUsuario == respostasCorretas[i]) {
                    if (topo < OBJETIVO - 1) {
                        topo++;
                        pilha[topo] = i + 1;
                    }
                    printf("Acertou!! Ponto empilhado :)\n");
                } else {
                    if (topo >= 0) {
                        topo--;
                    }
                    printf("Errou, meu filho :( Ponto removido (se havia algum)\n");
                }

                printf("Pontuacao atual: %d\n", topo + 1);

                /* ===== MOSTRA A PILHA (TOPO -> BASE) ===== */
                printf("Pilha de pontos (topo -> base): ");
                if (topo == -1) {
                    printf("[vazia]");
                } else {
                    for (int j = topo; j >= 0; j--) {
                        printf("[P%d]", pilha[j]);
                    }
                }
                printf("\n\n");

                if (topo + 1 == OBJETIVO) {
                    printf("AEEEEEE :D VOCE VENCEU! Alcancou os 5 pontos!!\nReiniciando o jogo...\n\n");
                    break;
                }
            }

            if (topo + 1 < OBJETIVO) {
                printf("Deu ruim meu nobre :( Voce nao alcancou os 5 pontos\n");
            }
        }

    } while (1);

    return 0;
}