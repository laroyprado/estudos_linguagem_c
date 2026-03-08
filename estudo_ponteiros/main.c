#include <stdio.h>
int valorA,valorB ,varDecisao,novoValor;
int *valorPonteiro = NULL;

int main(void) {

    int vector[3] = {1,2,3};
    int *prt;

    prt = vector;
    printf("%d\n",*prt);
    *(prt+1) = 134;
    printf("%d\n",vector[1]);



    while (1) {


        printf("==================================== \n");
        printf("var 1 -- %d -- %p \n",valorA,&valorA);
        printf("var 2 -- %d -- %p \n",valorB, &valorB);
        printf("ponteiro -- %d -- %p \n",valorPonteiro,&valorPonteiro);
        printf("==================================== \n");

        printf("valor da variavel 1 \n");
        scanf("%d",&valorA);

        printf("valor da variavel 2 \n");
        scanf("%d",&valorB);

        printf("Qual variavel o ponteiro vai apontar? \n");
        scanf("%d",&varDecisao);

        if (varDecisao == 1) {
            valorPonteiro = &valorA;
        }
        else if (varDecisao == 2) {
            valorPonteiro = &valorB;
        }
        printf("valor do ponteiro é %d",*valorPonteiro);

        printf("==================================== \n");
        printf("var 1 -- %d -- %p \n",valorA,&valorA);
        printf("var 2 -- %d -- %p \n",valorB, &valorB);
        printf("ponteiro -- %p -- %p \n",valorPonteiro,&valorPonteiro);
        printf("==================================== \n");

        printf("Novo valor da variavel %d\n",varDecisao);
        scanf("%d",&novoValor);
        *valorPonteiro = novoValor;

        printf("==================================== \n");
        printf("var 1 -- %d -- %p \n",valorA,&valorA);
        printf("var 2 -- %d -- %p \n",valorB, &valorB);
        printf("ponteiro -- %d -- %p \n",valorPonteiro,&valorPonteiro);
        printf("==================================== \n");
    }




}