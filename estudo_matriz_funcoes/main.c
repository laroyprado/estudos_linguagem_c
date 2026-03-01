#include <stdio.h>
#include <stdlib.h>
#include <time.h>



void desenhaMatriz(char b[][10]);
void gerarNumerosAleatorios();
unsigned converteColunaParaLetra(char col);


void gerarNumerosAleatorios() {
    unsigned long capture;
    time(&capture);
    srand(((unsigned)capture));
}


void desenhaMatriz(char b[][10]) {
    putchar('\n');

    // Cabeçalho com as letras
    printf("     A   B   C   D   E   F   G   H   I   J \n");
    printf("   -----------------------------------------\n");

    for (int i = 0; i < 8; i++) {
        printf(" %d |", i + 1);

        for (int j = 0; j < 10; j++) {
            printf(" %c |", b[i][j]);
        }

        printf("\n   -----------------------------------------\n");
    }

    putchar('\n');
}


unsigned converteColunaParaLetra(char col) {

    switch (col) {
        case 'A':
        case 'a': return 0;break;
        case 'B':
        case 'b': return 1;break;
        case 'C':
        case 'c': return 2;break;
        case 'D':
        case 'd': return 3;break;
        case 'E':
        case 'e': return 4;break;
        case 'F':
        case 'f': return 5;break;
        case 'G':
        case 'g': return 6;break;
        case 'H':
        case 'h': return 7;break;
        case 'I':
        case 'i': return 8;break;
        case 'J':
        case 'j': return 9;break;
    }

}



int main(int argc, char *argv[]) {

    char    botes[8][10] = {0},
            opt = 'j',
            sort = 1,
            col = 0;


    unsigned    num,
                linhas = 0,
                acertos = 0,
                erros = 0;

    register int i,j;

    do {
        if (sort) {
            system("clear");
            gerarNumerosAleatorios();

            for (i=0;i<8;i++) {
                for (j=0;j<10;j++) {

                    num = rand()%100+1;

                    if (num%2) botes[i][j] = '@';
                    else botes[i][j] = 0x20;

                }
            }
            desenhaMatriz(botes);
        }
        else {
            printf("Opção invalida\n");
            sort = 1;
        }

        printf("(s) sortear novamente \n");
        printf("(j) jogar!\n>>> ");
        scanf("%c", &opt);

        if (opt!='s' && opt!='S') sort = 0;


    }while (opt !='j' && opt !='J');
    system("clear");
    desenhaMatriz(botes);
    printf("ALVOS ATINGIDOS: %3d | ERROS: %3d\n", acertos,erros);
    while(1){

        printf("Digite a posição para o: ");
        scanf(" %c%d",&col,&linhas);

        system(("clear"));


        if (botes[linhas - 1][converteColunaParaLetra(col)] == '@') {

            botes[linhas - 1][converteColunaParaLetra(col)] = '*';
            acertos++;
            putchar('\a');

        }
        else {
            erros++;
            putchar('\a');
            putchar('\a');
            putchar('\a');

            if (erros > 5) {
                printf("FOMOS DERROTADOS");
                for (i=0;i<5;i++) {
                    putchar('\a');
                }
                system("pause");
                exit(0);
            }
        }

        desenhaMatriz(botes);
        printf("ALVOS ATINGIDOS: %3d | ERROS %3d\n",acertos,erros);

    }

}

