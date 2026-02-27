#include <stdio.h>


#define LINHAS 4
#define COLUNAS 6
#define TRACOS 1 + (COLUNAS * 4)
#define LARGURA 3

int box [LINHAS][COLUNAS];
int linha,coluna,numero;

void exibirLinhas() {

    for (int i = 0; i < TRACOS; i++) {
        printf("_");
    }
}


void exibirMatriz() {
    exibirLinhas();
    printf("\n");

    for (int i = 0; i < LINHAS; i++) {
        printf("|");

        for (int j = 0; j < COLUNAS; j++) {
            printf("%3d|", box[i][j]);
        }
        printf("\n");
        exibirLinhas();
        printf("\n");
    }
}


void adicionarNumero(int linha,int coluna,int numero) {
    box[linha][coluna] = numero;
}

enum Opcao {
    LINHA_ETAPA,
    COLUNA_ETAPA,
    NUMERO_ETAPA
};

int validacaoUsuario(int etapa,int valor) {
    switch (etapa) {
        case LINHA_ETAPA:
            if (valor < 0 || valor >LINHAS) {
                printf("Informou um valor acima do que existe de linhas");
                return 0;
            }
            break;
        case COLUNA_ETAPA:
            if (valor < 0 || valor >COLUNAS) {
                printf("Informou um valor acima do colunas");
                return 0;
            }
            break;
        case NUMERO_ETAPA:
            if (valor < 0 || valor > 999) {
                printf("Informou um valor acima do numero");
                return 0;
            }
            break;
    }
    return 1;
}

void perguntasAoUsuário() {
    printf("Linha de 0 a %d: ",LINHAS -1);
    scanf("%d", &linha);
    printf("\n");

    printf("Coluna de 0 a %d: ",COLUNAS-1);
    scanf("%d", &coluna);
    printf("\n");

    printf("Numero de 0 a 999: ");
    scanf("%d", &numero);
    printf("\n");


}



int main(void) {
    //
    // int mat[3][4] = {0};
    // mat[0][0] = 3;
    // mat[0][1] = 2;
    //
    // printf("%d\n", mat[0][0]);
    // printf("%d\n", mat[0][1]);
    //
    // int nova_mat[4][3] ={
    //     {5,2,3},
    //     {2,3,5},
    //     {4,8,5},
    //     {14,28,35}
    // };
    // for(int i = 0;i < 4;i++){
    //     for(int j=0;j < 3;j++){
    //         printf("| %d",nova_mat[i][j]);
    //     }
    //         printf("\n");
    //         printf("___________");
    //         printf("\n");
    // }


    while (1) {
        printf("\n");
        exibirMatriz();
        perguntasAoUsuário();

        if (!validacaoUsuario(LINHA_ETAPA,linha)) continue;
        if (!validacaoUsuario(COLUNA_ETAPA,coluna)) continue;
        if (!validacaoUsuario(NUMERO_ETAPA,numero)) continue;

        adicionarNumero(linha,coluna,numero);
    }


    return 0;
}