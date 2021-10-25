#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int linhas, colunas;
int menorPar(int array[linhas][colunas]);
void produtoColunas(int array[linhas][colunas], int *arr);
int mediaAritmetica (int array[linhas][colunas]);
int mediaPonderada (int array[linhas][colunas]);
double mediaGeometrica (int array[linhas][colunas]);

int main (void) {

    printf ("Quantidade de linhas: ");
    scanf ("%d", &linhas);
    printf ("Quantidade de colunas: ");
    scanf ("%d", &colunas);

    int array[linhas][colunas];
    int vector[colunas];
    int mediaA;
    int mediaP;
    double mediaG;

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf ("array[%d][%d]: ", i, j);
            scanf ("%d", &array[i][j]);
        }
    }

    printf ("============================================\n");

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf ("\t%d", array[i][j]);
        }
        printf ("\n");
    }

    printf ("============================================\n\n");

    produtoColunas(array, vector);
    printf ("Menor elemento par = %d\n", menorPar(array));

    for (int i = 0; i < colunas; i++) {
        printf ("Produto da colunas %d = %d\n", i, vector[i]);
    }

    mediaA = mediaAritmetica(array);
    printf ("Media aritmetica dos elementos internos = %d\n", mediaA);

    mediaP = mediaPonderada (array);
    printf ("Media ponderada dos elementos abaixo da diagonal principal = %d\n", mediaP);

    mediaG = mediaGeometrica(array);
    printf ("Media geometrica dos elementos X = %.2lf\n", mediaG);

    return 0;
}

int menorPar(int array[linhas][colunas]) {

    int menorElemento = array[0][1];

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            if (array[i][j] % 2 == 0) {
                if (array[i][j] < menorElemento) {
                    menorElemento = array[i][j];
                }
            }
        }
    }
    return menorElemento;
}

void produtoColunas(int array[linhas][colunas], int *arr) {

    int temporaria = 1;

    for (int i = 0; i < colunas; i ++) {
        for (int j = 0; j < linhas; j++) {
            temporaria *= array[j][i];
        }
        arr[i] = temporaria;
        temporaria = 1;
    }

}

int mediaAritmetica (int array[linhas][colunas]) {

    int quantidade = 0;
    int media = 0;
    int soma = 0;

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            if (!((i == 0 || i == linhas-1) || (j == 0 || j == colunas-1))) {
                soma += array[i][j];
                quantidade++;
            }
        }
    }
    media = soma/quantidade;
    return media;
}

int mediaPonderada (int array[linhas][colunas]) {

    int mediaP = 0;
    int peso = 0;
    int pesoP = 0;

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            if (i > j && i != j) {
                mediaP += array[i][j] * ++peso;
                pesoP += peso;
            }
        }
    }
    return mediaP / pesoP;
}

double mediaGeometrica (int array[linhas][colunas]) {

    int mediaG1 = 1;
    int mediaG2 = 1;
    int mediaFinal;
    int quantidade = 0;
    double resultado;

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            if (i == j) {
                mediaG1 *= array[i][j];
                quantidade++;
            }
            if (i + j == 2) {
                mediaG2 *= array[i][j];
                quantidade++;
            }
        }
    }

    mediaFinal = mediaG1 * mediaG2;
    resultado = pow (mediaFinal, 1.0 / quantidade);
    return resultado;
}
