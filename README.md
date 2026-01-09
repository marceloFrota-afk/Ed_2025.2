
# Estruturas de Dados em C - Jogos Pilha/Fila

**Este projeto foi desenvolvido para fins acadêmicos**, como parte da disciplina de **Estruturas de Dados**.  
Ele contém dois jogos interativos em terminal, implementados em linguagem C, com o objetivo de demonstrar na prática o funcionamento de estruturas de dados fundamentais:

- **Pilha (Stack)**
- **Fila com Prioridade (Priority Queue)**


## Visão Geral

O **projeto** consiste em **dois jogos em modo texto**, cada um projetado para explorar uma estrutura de dados específica de forma prática e interativa:

1. **Math Game** — Utiliza uma **Pilha (LIFO)** para controle de pontuação.
2. **Bankers Game** — Simula o atendimento de clientes usando uma **Fila com Prioridade**.

Ambos os jogos permitem observar claramente operações como inserção, remoção, consulta e organização interna dos dados, reforçando conceitos teóricos por meio da prática.

---

##  Fundamentação Técnica

### Pilha (Stack — LIFO)

- Estrutura do tipo **Last In, First Out**.
- O último elemento inserido é o primeiro a ser removido.
- Implementada no **Math Game** para controlar a pontuação do jogador.
- Cada resposta correta empilha um ponto; respostas incorretas desempilham.

**Principais operações:**
- `push` — Inserção
- `pop` — Remoção
- `top` — Consulta do elemento no topo

---

### Fila com Prioridade (Priority Queue)

- Estrutura onde cada elemento possui um **nível de prioridade**.
- O elemento com maior prioridade é atendido primeiro, independentemente da ordem de chegada.
- Implementada no **Bankers Game**, simulando o atendimento bancário.

Cada cliente possui:
- Nome
- Prioridade (1 a 5)

Clientes com prioridade mais alta são processados antes dos demais.

---

## Jogos Implementados

### Math Game — Pilha

**Descrição:**
- O jogador responde perguntas matemáticas.
- Cada acerto adiciona um ponto à pilha.
- Erros removem pontos.
- O jogo termina ao atingir a pontuação final ou ao exceder o número de tentativas.

**Objetivo educacional:**
- Demonstrar claramente o comportamento LIFO da pilha.

---

### Bankers Game — Fila com Prioridade

**Descrição:**
- Simula um sistema de atendimento bancário.
- Clientes são adicionados com diferentes níveis de prioridade.
- O atendimento ocorre sempre pelo cliente de maior prioridade disponível.

**Objetivo educacional:**
- Mostrar como filas com prioridade diferem das filas tradicionais (FIFO).

---

## Funcionalidades

-  Implementação completa em **C**
-  Jogos interativos em terminal
-  Uso prático de estruturas de dados
-  Código organizado e didático
-  Ideal para estudo e avaliação acadêmica

---

##  Compilação

O projeto utiliza apenas bibliotecas padrão da linguagem C.

### Compilar com GCC:

```bash
gcc main.c -o ed_2025_2
```
---

## Créditos

Projeto desenvolvido por:

- **Francisco Natan Araújo Queiroz**
- **Marcelo Flávio de Carvalho Frota Porto**
- **Pedro Henrique Monteiro de Vasconcelos**

No contexto da disciplina **Estrutura de Dados — 2025.2**.
