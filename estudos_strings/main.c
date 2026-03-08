#include <stdio.h>



int strlen(char *str) {

    register int i = 0;
    while (str[i] != '\0') i++;
    return i;
}

int strvowel(char *str) {
    register int i = 0,
             vowel = 0;
    while (str[i] != '\0') {
        switch (str[i]) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
            vowel++;
        }
        i++;
    }
    return vowel;
}

int main(void) {

    char paises[100];



    while (1) {
        printf("Digite o pais: \n");
        gets(paises);

        printf("%d\n", strlen(paises));
        printf("%d\n", strvowel(paises));

        if (paises[0] == '\0') break;
        else printf("País digitado >>>> %s\n",paises);

    }

    void func(char *str); // retorno vazio, porém temos que colocar o ponteiro para dizer que é uma String, diferente de quanto é um char
    char *sret(char *str); // mesma coias, mas agora estamos colocando que é um retorno de STRING

}




