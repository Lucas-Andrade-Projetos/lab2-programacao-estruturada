/* Escreva um programa que, dados dois inteiros n e m, onde 1 ≤ n,m ≤ 1000, e duas
matrizes A e B de ordem n×m, calcule a matriz C = A+B, onde a entrada Ci, j = Ai, j +Bi, j.
*/

#include <stdio.h>

#define NMAX 100

void le_matriz(double M[NMAX][NMAX], int n, int m);
void printa_matriz(double M[NMAX][NMAX], int n, int m);
void soma_matrizes(double M[NMAX][NMAX], double M1[NMAX][NMAX], double M2[NMAX][NMAX],int n, int m);

int main()
{   
    
    int numero, numero1;
    double matriz[NMAX][NMAX], matriz2[NMAX][NMAX], mSoma[NMAX][NMAX];
    
    printf("Entre com dois números inteiros entre 0 e 100 que será o tamanho de suas matrizes:\n");
    scanf("%d %d", &numero,&numero1);
    printf("\n");

    le_matriz(matriz, numero, numero1);
    le_matriz(matriz2, numero, numero1);
    soma_matrizes(mSoma,matriz, matriz2, numero, numero1);

    printa_matriz(mSoma, numero, numero1);

    return 0;
}

//essa função recebe uma matriz vazia e preenche com valores 
void le_matriz(double M[NMAX][NMAX], int n, int m) {
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            printf("Entre com um número:\n");
            scanf("%lf", &M[i][j]);
        }    
    }
    printf("\n");
}

//essa função recebe uma matriz e imprime seus valores
void printa_matriz(double M[NMAX][NMAX], int n, int m) {
    
    printf("Essa é a sua matriz: \n");
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            printf("%.2f ", M[i][j]);
        }
        printf("\n");
    }

}

//Essa função recebe 3 matrizes com a primeira sendo uma vazia e a preenche com o resultado da soma das duas matrizes seguintes
void soma_matrizes(double M[NMAX][NMAX], double M1[NMAX][NMAX], double M2[NMAX][NMAX],int n, int m) {
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            M[i][j] = M1[i][j] + M2[i][j];
        }
    }
    printf("\n");

}