# Desafio Batalha Naval - Nível Aventureiro

**Feito por:** Luiz Fellipe Rodrigues da Silva

---

Mais um desafio! Esse agora é de Batalha Naval, atualizado para o **Nível Aventureiro**.

Meu foco principal de estudos é em Python, então fazer esse trabalho em C foi mais um desafio legal. A dificuldade agora foi entender como fazer a lógica para posicionar os navios na diagonal, mas foi uma boa prática com os loops.

### O que o código faz agora:

O programa `batalha_naval.c` ainda desenha o tabuleiro, mas agora com mais navios:

* Ele cria a matriz 10x10 e enche de `0` ("água").
* Ele ainda posiciona os dois navios de antes (um na **horizontal** e um na **vertical**).
* A novidade é que agora ele também coloca **dois novos navios na diagonal** (um em cada direção), usando a lógica de aumentar a linha e a coluna (ou diminuir) ao mesmo tempo.
* No final, ele "desenha" o tabuleiro todo no terminal, mostrando os 4 navios (`3`) e a água (`0`).

### Para testar

É só usar os comandos abaixo no terminal:

**Compilar o código:**
`gcc batalha_naval.c -o programa`

**Rodar o programa:**
`./programa`

---
---

## Descrição Original do Desafio (Nível Aventureiro)

### Desafio: nível aventureiro

Tabuleiro Completo e Navios Diagonais

Nesta etapa, você irá aprimorar o seu jogo de Batalha Naval adicionando a complexidade de navios posicionados na diagonal. Dê continuidade ao código que você desenvolveu no Desafio do Nível Novato.

**O que você vai fazer**

Você deve modificar o seu programa em C para:

- **Criar um Tabuleiro 10x10:** Declare uma matriz (array bidimensional) de tamanho 10x10 para representar o tabuleiro do Batalha Naval. Inicialize todas as posições com o valor 0, representando água.
- **Posicionar Quatro Navios:** Posicione quatro navios no tabuleiro.
  - Dois navios devem estar posicionados horizontalmente ou verticalmente (como no nível anterior).
  - Os outros dois navios devem ser posicionados na diagonal. Considere que um navio diagonal ocupa posições onde a linha e a coluna aumentam ou diminuem simultaneamente (ex: tabuleiro[i][i] ou tabuleiro[i][9-i] para um tabuleiro 10x10).
  - Represente as posições ocupadas pelos navios com o valor 3.
  - Escolha as coordenadas iniciais.
  - Valide que as posições dos navios estejam dentro dos limites do tabuleiro e que eles não se sobreponham.
- **Exibir o Tabuleiro:** Utilize loops aninhados e o comando printf para exibir o tabuleiro completo no console. A saída deve mostrar a matriz 10x10, com 0s representando água e 3s representando as partes dos navios. Utilize espaços para alinhar a saída e facilitar a visualização do tabuleiro.

**Requisitos funcionais**

- O programa deve utilizar uma matriz 10x10 para representar o tabuleiro.
- O programa deve permitir o posicionamento de quatro navios, sendo dois na diagonal.
- O programa deve validar se as coordenadas e o tamanho dos navios são válidos dentro dos limites do tabuleiro.
- O programa deve garantir que os navios não se sobreponham.
- O programa deve exibir o tabuleiro completo no console com os navios posicionados corretamente.

**Requisitos não funcionais**

- **Performance:** O programa deve executar de forma eficiente, sem causar atrasos perceptíveis.
- **Documentação:** O código deve ser bem documentado, com comentários claros explicando a lógica e o propósito de cada parte do programa. Utilize comentários para explicar a função de cada variável, loop e bloco de código.
- **Legibilidade:** O código deve ser escrito de forma clara, organizada e fácil de entender, com nomes de variáveis descritivos e indentação consistente.

**Simplificações para o nível intermediário**

- As coordenadas e tamanhos dos navios são definidos diretamente no código, sem entrada do usuário.
- Os navios têm tamanho fixo igual a 3.
- A validação de sobreposição de navios pode ser simplificada, mas deve cobrir os casos diagonais.
- Não é necessário implementar a lógica do jogo (ataques, acertos, etc.) neste nível.

**Entregando seu Projeto**

- **GitHub:** Dê um push das suas alterações para o seu repositório no GitHub.
- **SAVA:** Envie o link do seu repositório GitHub na plataforma SAVA, na atividade correspondente ao Desafio Nível Intermediário. Certifique-se de que o repositório seja público ou que o professor tenha acesso a ele. O link do repositório deve ser a única forma de entrega do projeto, garantindo que o professor possa acessar seu código para avaliação.

Lembre-se: Este desafio visa fortalecer suas habilidades em manipulação de matrizes e loops. Concentre-se em produzir um código bem estruturado e comentado, demonstrando sua compreensão dos conceitos. A visualização clara do tabuleiro é essencial para verificar se o seu posicionamento dos navios está correto!