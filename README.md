Este trabalho consiste no desenvolvimento de dois jogos na linguagem C como atividade avaliativa da disciplina de Estrutura de Dados. O principal objetivo é aplicar os conceitos estudados em sala sobre as estruturas de dados Pilha e Fila, demonstrando seu funcionamento por meio de jogos interativos executados no terminal.

Cada jogo foi projetado para evidenciar as operações básicas das estruturas utilizadas, como inserção, remoção, controle de limites e organização dos dados.

//
Estruturas de Dados Utilizadas

Foram utilizadas duas estruturas de dados fundamentais:

Pilha (LIFO – Last In, First Out), aplicada no jogo Math Game, onde os pontos do jogador são empilhados e desempilhados conforme seu desempenho.

Fila com Prioridade, aplicada no jogo Bankers Game, simulando um sistema de atendimento bancário em que clientes com maior prioridade são atendidos primeiro.

//
Funcionamento dos jogos
Jogo 1 – Math Game (Pilha)

O Math Game é um jogo de perguntas matemáticas cujo objetivo é alcançar cinco pontos antes do término das quinze perguntas disponíveis. Cada pergunta respondida corretamente adiciona um ponto, enquanto cada erro remove um ponto, caso exista algum ponto acumulado. A pontuação do jogador é representada por uma pilha implementada por meio de um vetor de tamanho fixo. O controle da pilha é feito pela variável topo, que indica o elemento no topo da estrutura. Sempre que o jogador acerta uma pergunta, um novo elemento é empilhado, representando um ponto. Em caso de erro, ocorre o desempilhamento de um ponto, respeitando os limites da pilha. Após cada pergunta, o estado atual da pilha é exibido, mostrando os pontos do topo até a base. O jogador vence ao atingir cinco pontos acumulados na pilha. Caso não alcance esse valor após responder todas as perguntas, o jogo é encerrado com derrota.

Jogo 2 – Bankers Game (Fila com Prioridade)

O Bankers Game simula um sistema de atendimento bancário utilizando uma fila com prioridade. Cada cliente que entra na fila recebe uma senha sequencial e informa um nível de prioridade, variando de um a cinco, sendo um o mais urgente. A fila é implementada utilizando um vetor de estruturas do tipo Cliente, que armazenam a senha e a prioridade. O atendimento não segue apenas a ordem de chegada, mas sim a prioridade, garantindo que clientes mais urgentes sejam atendidos primeiro. Quando um cliente é atendido, ele é removido da fila e os demais elementos são reorganizados. O sistema também permite visualizar o próximo cliente a ser atendido e listar todos os clientes presentes na fila ordenados por prioridade. O jogo possui controle de fila cheia e fila vazia, evitando operações inválidas.

//
Funcionalidades Implementadas

No Math Game:
Menu interativo com opções de iniciar o jogo, visualizar instruções e sair.
Validação das entradas do usuário.
Sistema de pontuação baseado em pilha.
Exibição da pilha após cada rodada.
Condições claras de vitória e derrota.

No Bankers Game:
Inserção de clientes na fila.
Atendimento do cliente com maior prioridade.
Exibição do próximo cliente a ser atendido.
Listagem de todos os clientes ordenados por prioridade.
Controle de erros como fila cheia ou vazia.

//
Conclusão

Este trabalho demonstra a aplicação prática das estruturas de dados Pilha e Fila por meio de jogos interativos, facilitando a compreensão de seu funcionamento interno. A implementação permite visualizar claramente as operações realizadas em cada estrutura, reforçando os conceitos fundamentais estudados na disciplina de Estrutura de Dados.

Integrantes: Pedro Henrique Monteiro de Vasconcelos
