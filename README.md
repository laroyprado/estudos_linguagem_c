# Estudo de Matrizes em C

Exercício prático de manipulação de **matrizes 2D** em C.

---

## O que o programa faz

- Cria uma matriz de tamanho `LINHAS x COLUNAS`.
- Permite que o usuário adicione números de 0 a 999 em qualquer célula.
- Mostra a matriz organizada com linhas e colunas bem delimitadas.
- Valida input para evitar valores fora do intervalo.

---

## Conceitos aplicados

- **Matrizes 2D:** armazenamento e acesso via `box[linha][coluna]`.
- **Funções:** `exibirMatriz()`, `adicionarNumero()`, `validacaoUsuario()`.
- **Enum:** `enum Opcao { LINHA_ETAPA, COLUNA_ETAPA, NUMERO_ETAPA }` para controlar etapas de input.
- **Validação de input:** impede que o usuário digite linha, coluna ou número inválidos.
- **Loops e impressão:** `for` aninhados para percorrer e imprimir a matriz, alinhando os números.

---

## Estrutura geral

1. Exibe a matriz.
2. Pergunta linha, coluna e número.
3. Valida cada valor.
4. Adiciona número na matriz se válido.
5. Repete o processo.

---

## Aprendizados

- Como criar e percorrer matrizes em C.
- Como imprimir de forma organizada.
- Como validar input do usuário.
- Como usar enum e switch para controlar fluxo de programa.# estudos_linguagem_c
# estudos_linguagem_c
