#include <stdio.h>

#define TAM 10

typedef struct {
    int senha;
    int prioridade;
} Cliente;

int main() {
    Cliente fila[TAM];
    int inicio = 0;
    int fim = 0;
    int opcao;
    int proximaSenha = 1;
 printf("\nBANKERS GAME!!!!\n");
    do {
        printf("\n1 - Entrar cliente\n");
        printf("2 - Atender cliente\n");
        printf("3 - Mostrar proximo cliente\n");
        printf("4 - Listar clientes\n");
        printf("0 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            if (fim == TAM) {
                printf("Fila cheia!\n");
            } else {
                int prioridade;
                printf("Informe a prioridade (1 a 5, onde 1 e o mais urgente): ");
                scanf("%d", &prioridade);

                if (prioridade < 1 || prioridade > 5) {
                    printf("Valor invalido, siga as regras! :|\n");
                } else {
                    fila[fim].senha = proximaSenha;
                    fila[fim].prioridade = prioridade;

                    printf("Cliente entrou! :D\n",
                           proximaSenha, prioridade);
                    fim++;
                    proximaSenha++;
                }
            }
        }

        else if (opcao == 2) {
            if (inicio == fim) {
                printf("Tem ninguem nao ( ' ')\n");
            } else {
                int indice = inicio;

                for (int i = inicio + 1; i < fim; i++) {
                    if (fila[i].prioridade < fila[indice].prioridade) {
                        indice = i;
                    }
                }

                printf("Atendendo cliente %d :D", fila[indice].senha);

                for (int i = indice; i < fim - 1; i++){
                    fila[i] = fila[i + 1];
                }

                fim--;
            }
        }

        else if (opcao == 3) {
            if (inicio == fim) {
                printf("Nao tem ninguem :P\n");
            } else {
                int indice = inicio;

                for (int i = inicio + 1; i < fim; i++) {
                    if (fila[i].prioridade < fila[indice].prioridade) {
                        indice = i;
                    }
                }

                printf("Proximo cliente:\n");
                printf("Senha: %d | Prioridade: %d\n",
                       fila[indice].senha,
                       fila[indice].prioridade);
            }
        }

        else if (opcao == 4) {
            if (inicio == fim) {
                printf("Fila vazia.\n");
            } else {
                Cliente aux[TAM];
                int total = fim - inicio;

                for (int i = 0; i < total; i++) {
                    aux[i] = fila[inicio + i];
                }

                for (int i = 0; i < total - 1; i++) {
                    for (int j = 0; j < total - 1 - i; j++) {
                        if (aux[j].prioridade > aux[j + 1].prioridade) {
                            Cliente temp = aux[j];
                            aux[j] = aux[j + 1];
                            aux[j + 1] = temp;
                        }
                    }
                }

                printf("\nClientes:\n");
                for (int i = 0; i < total; i++) {
                    printf("Senha: %d | Prioridade: %d\n", aux[i].senha, aux[i].prioridade);
                }
            }
        }

    } while (opcao != 0);

    printf("\nbye bye\n");
    return 0;
}