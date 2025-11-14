# Desafio Batalha Naval - Nível Novato

**Feito por:** Luiz Fellipe Rodrigues da Silva

---

Mais um desafio! Esse agora é de Batalha Naval.

Meu foco principal de estudos é em Python, então fazer esse trabalho em C foi mais um desafio legal. Dessa vez, a maior dificuldade foi aprender a usar **matrizes** (que são arrays dentro de arrays) para criar o tabuleiro.

### O que o código faz:

O programa `batalha_naval.c` é um código bem simples que só desenha o tabuleiro inicial:

* Primeiro, ele cria uma matriz 10x10.
* Ele usa dois loops `for` (um dentro do outro) para encher o tabuleiro com `0` (que é a "água").
* Depois, ele usa um loop `for` para colocar um navio (valor `3`) na **horizontal**.
* E usa outro loop `for` para colocar o segundo navio (valor `3`) na **vertical**.
* No final, ele usa os loops de novo para "desenhar" o tabuleiro 10x10 no terminal, mostrando onde ficaram a água e os navios.

### Para testar

É só usar os comandos abaixo no terminal:

**Compilar o código:**
`gcc batalha_naval.c -o programa`

**Rodar o programa:**
`./programa`

---
---

## Descrição Original do Desafio (Nível Novato)

### Desafio: nível novato

Posicionando Navios no Tabuleiro

Neste primeiro desafio, você dará o primeiro passo na construção do seu jogo de Batalha Naval. Você utilizará seus conhecimentos de vetores (arrays unidimensionais) em C para representar um tabuleiro simplificado e posicionar dois navios nele: um na vertical e outro na horizontal. Continue o desenvolvimento no mesmo programa iniciado anteriormente.

**O que você vai fazer**

- **Represente o Tabuleiro:** Utilize uma matriz (array bidimensional) para representar o tabuleiro do Batalha Naval. Neste nível novato, o tabuleiro terá um tamanho fixo 10x10. Inicialize todas as posições do tabuleiro com o valor 0, representando água.
- **Posicione os Navios:** Declare e inicialize dois vetores (arrays unidimensionais) para representar os navios. Cada navio ocupará um número fixo de posições no tabuleiro (defina esse tamanho, por exemplo, 3 posições). Um navio será posicionado horizontalmente e o outro verticalmente. Represente as posições ocupadas pelos navios na matriz do tabuleiro com o valor 3. Você deverá escolher as coordenadas iniciais de cada navio e garantir que eles estejam completamente dentro dos limites do tabuleiro e não se sobreponham.
- **Dica:** O posicionamento do navio pode ser feito copiando o valor 3 de cada posição do vetor do navio para as posições correspondentes na matriz do tabuleiro, de acordo com a orientação (horizontal ou vertical) do navio.
- **Exiba o Tabuleiro:** Utilize loops aninhados e o comando printf para exibir o tabuleiro no console. Mostre a matriz completa, com 0s representando água e 3s representando as partes dos navios. A saída deve ser clara e organizada, permitindo visualizar easily a posição dos navios.
- **Dica:** Imprima um espaço ou outro caractere separador entre os elementos da matriz para facilitar a visualização.

**Requisitos funcionais**

- O programa deve receber as coordenadas iniciais (linha e coluna) de cada navio como entrada (pode ser definido diretamente no código).
- O programa deve validar se as coordenadas e o tamanho dos navios são válidos dentro dos limites do tabuleiro.
- O programa deve garantir que os navios não se sobreponham.
- O programa deve exibir o tabuleiro no console com os navios posicionados corretamente.

**Requisitos não funcionais**

- **Performance:** O programa deve executar de forma eficiente, sem causar atrasos perceptíveis.
- **Documentação:** O código deve ser bem documentado, com comentários claros explicando a lógica e o propósito de cada parte do programa. Utilize comentários para explicar a função de cada variável, loop e bloco de código.
- **Legibilidade:** O código deve ser escrito de forma clara, organizada e fácil de entender, com nomes de variáveis descritivos e indentação consistente.

**Simplificações para o nível básico**

- O tamanho do tabuleiro e dos navios é fixo (10x10).
- Os navios têm tamanho fixo igual a 3.
- As coordenadas dos navios são definidas diretamente no código, sem input do usuário.
- Não é necessário implementar a lógica do jogo (ataques, acertos, etc.) neste nível.
- A validação de sobreposição de navios pode ser simplificada.

**Entregando seu Projeto**

- **GitHub:** Hospede seu projeto em um repositório no GitHub. Isso facilitará o versionamento do seu código e o compartilhamento com o professor.
- **SAVA:** Envie o link do seu repositório GitHub na plataforma SAVA, na atividade correspondente ao Desafio Nível Básico. Certifique-se de que o repositório seja público ou que o professor tenha acesso a ele. O link do repositório deve ser a única forma de entrega do projeto, garantindo que o professor possa acessar seu código para avaliação.

Lembre-se: este desafio foca nos fundamentos de vetores e matrizes. Concentre-se em escrever um código claro, funcional e bem documentado, demonstrando sua compreensão dos conceitos aprendidos.