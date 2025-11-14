# Desafio Batalha Naval - Nível Mestre

**Feito por:** Luiz Fellipe Rodrigues da Silva

---

Mais um desafio! Esse agora é de Batalha Naval, finalizado com o **Nível Mestre**.

Meu foco principal de estudos é em Python, então fazer esse trabalho em C foi mais um desafio legal. A dificuldade desse nível foi, com certeza, a lógica de **sobrepor uma matriz na outra**. Foi preciso "desenhar" as habilidades (Cone, Cruz e Octaedro) em matrizes 5x5 usando `if`, e depois calcular onde elas iriam aparecer no tabuleiro 10x10, checando as bordas. Foi a parte mais difícil, mas foi uma boa prática com matrizes.

### O que o código faz agora:

O programa `batalha_naval.c` é o mais complexo de todos:

* Ele cria a matriz 10x10 e enche de `0` ("água").
* Ele posiciona os 4 navios (horizontal, vertical e os dois diagonais).
* **[MESTRE]** Ele cria **3 novas matrizes 5x5** para as habilidades (Cone, Cruz, Octaedro).
* **[MESTRE]** Ele usa loops e `if` para "desenhar" o formato de cada habilidade (com o valor `1`) nessas matrizes.
* **[MESTRE]** Ele define 3 pontos de origem no tabuleiro 10x10 e "cola" as matrizes de habilidade por cima, marcando a área de efeito com o valor `5`.
* No final, ele "desenha" o tabuleiro todo no terminal, mostrando a água (`0`), os navios (`3`) e as áreas das habilidades (`5`).

### Para testar

É só usar os comandos abaixo no terminal:

**Compilar o código:**
`gcc batalha_naval.c -o programa`

**Rodar o programa:**
`./programa`

---
---

## Descrição Original do Desafio (Nível Mestre)

### Desafio: nível mestre

Habilidades especiais e áreas de efeito

Neste desafio final, você adicionará um toque estratégico ao seu jogo de Batalha Naval, implementando habilidades especiais com áreas de efeito distintas. Você continuará trabalhando no mesmo projeto iniciado nos níveis anteriores, adicionando a lógica para representar e exibir essas habilidades no tabuleiro.

**O que você vai fazer**

Você deve modificar o seu programa em C para:

- **Definir o Tabuleiro:** Mantenha o tabuleiro 10x10 que você criou no nível anterior. Ele servirá como base para visualizar as áreas de efeito das habilidades.
- **Criar Matrizes de Habilidade:** Crie três matrizes separadas, cada uma representando a área de efeito de uma habilidade especial:
  - **Cone:** Uma matriz que represente uma área em forma de cone, com o ponto de origem no topo e expandindo-se em direção à base. Imagine um cone apontando para baixo. A matriz deve representar essa forma, com o ponto de origem (o topo do cone) na parte superior e a área se expandindo para baixo.
  - **Cruz:** Uma matriz que represente uma área em forma de cruz, com o ponto de origem no centro.
  - **Octaedro:** Uma matriz que represente a vista frontal de um octaedro (imagine como se estivesse olhando diretamente para ele), resultando em um formato que se assemelha a um losango, com o ponto de origem no centro.
- As matrizes de habilidade devem indicar quais posições são afetadas pela habilidade com o valor 1, e quais não são afetadas com o valor 0. Defina um tamanho razoável para as matrizes de habilidade (por exemplo, 5x5 ou 7x7).
- **Integrar Habilidades ao Tabuleiro:**
  - Defina um ponto de origem para cada habilidade no tabuleiro (coordenadas linha e coluna). Este ponto de origem será o centro da habilidade, a partir do qual a área de efeito será calculada.
  - Crie a lógica para sobrepor a matriz de habilidade ao tabuleiro, centrando a matriz de habilidade no ponto de origem definido.
  - As posições do tabuleiro que estiverem dentro da área de efeito da habilidade (valor 1 na matriz de habilidade) devem ser marcadas visualmente. Utilize um valor diferente de 0 e 3 para representar as posições afetadas pela habilidade (por exemplo, o valor 5).
- **Exibir o Tabuleiro com Habilidade:** Utilize loops aninhados e o comando printf para exibir o tabuleiro no console, mostrando as áreas afetadas pelas habilidades. Utilize caracteres diferentes para representar:
  - Água (0)
  - Navio (3)
  - Área afetada pela habilidade (5)
- **Utilizar Condicionais:** As matrizes de habilidades devem ser construídas de forma dinâmica, utilizando condicionais dentro de loops aninhados. A sobreposição das habilidades no tabuleiro também deve utilizar condicionais para garantir que a área de efeito permaneça dentro dos limites do tabuleiro.

**Requisitos funcionais**

- O programa deve criar as matrizes de efeito para as habilidades Cone, Cruz e Octaedro.
- As matrizes de habilidade devem utilizar os valores 0 e 1 para indicar as áreas não afetadas e afetadas, respectivamente.
- O programa deve permitir definir um ponto de origem para cada habilidade no tabuleiro.
- O programa deve sobrepor as matrizes de habilidade ao tabuleiro, marcando as áreas afetadas.
- A saída do programa deve exibir o tabuleiro com os navios e as áreas de efeito das habilidades, utilizando diferentes caracteres para cada elemento.
- A construção das matrizes de habilidade e a sobreposição no tabuleiro devem obrigatoriamente utilizar estruturas de repetição aninhadas e condicionais.

**Requisitos não funcionais**

- **Performance:** O programa deve executar de forma eficiente, sem causar atrasos perceptíveis.
- **Documentação:** O código deve ser bem documentado, com comentários claros explicando a lógica e o propósito de cada parte do programa. Utilize comentários para explicar como as áreas de efeito das habilidades são calculadas.
- **Legibilidade:** O código deve ser escrito de forma clara, organizada e fácil de entender, com nomes de variáveis descritivos e indentação consistente.

**Simplificações para o nível avançado**

- A posição das habilidades no tabuleiro é definida diretamente no código, sem input do usuário.
- Não é necessário implementar a lógica de dano ou efeito das habilidades nos navios (apenas a visualização da área de efeito).
- O tamanho das matrizes de habilidade pode ser fixo.
- A validação de limites do tabuleiro durante a sobreposição da habilidade pode ser simplificada.

**Entregando seu Projeto**

- **GitHub:** Dê um push das suas alterações para o seu repositório no GitHub.
- **SAVA:** Envie o link do seu repositório GitHub na plataforma SAVA, na atividade correspondente ao Desafio Nível Avançado. Certifique-se de que o repositório seja público ou que o professor tenha acesso a ele. O link do repositório deve ser a única forma de entrega do projeto, garantindo que o professor possa acessar seu código para avaliação.

Este desafio é a culminação do seu aprendizado sobre vetores e matrizes. Demonstre sua capacidade de manipular essas estruturas de dados de forma criativa e eficiente, integrando as habilidades especiais ao tabuleiro do jogo. Um código bem documentado e uma exibição clara das matrizes de habilidade sobrepostas ao tabuleiro são essenciais para o sucesso neste desafio!