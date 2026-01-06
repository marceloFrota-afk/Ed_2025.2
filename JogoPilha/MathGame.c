#include <stdio.h>
#include <math.h>

#define MAX_PERGUNTAS 15
#define OBJETIVO 5


void push(int pilha[], int *topo) {
    (*topo)++;
    pilha[*topo] = 1;
}

void pop(int *topo) {
    if (*topo >= 0) {
        (*topo)--;
    }
}

int main() {

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

    printf("MATH GAME!!!!\n");
    printf("Objetivo: acumular 5 pontos\n\n");

    for (int i = 0; i < MAX_PERGUNTAS; i++) {

        printf("Pergunta %d: quanto e %s ? ", i + 1, perguntas[i]);
        scanf("%d", &respostaUsuario);

        if (respostaUsuario == respostasCorretas[i]) {
            push(pilha, &topo);
            printf("Acertou!! Ponto empilhado :)\n");
        } else {
            pop(&topo);
            printf("Errou, meu filho. Ponto removido (se havia algum)\n");
        }

        printf("Pontuacao atual: %d\n\n", topo + 1);

        if (topo + 1 == OBJETIVO) {
            printf("AEEEEEE :D VOCE VENCEU! Alcancou os 5 pontos!");
            return 0;
        }
    }

    printf("Deu ruim meu nobre :( Você não alcançou os 5 pontos");
    return 0;
}