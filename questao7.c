/* Escreva um programa que:
• leia os inteiros n e m, onde 1 ≤ n,m ≤ 1000;
• leia uma matriz A de ordem n×m;
• leia dois inteiros i e j, com 1 ≤ i, j ≤ n;
• compute uma nova matriz A′
formada pela troca da i-ésima linha com a j-ésima linha de A.
*/

#include <stdio.h>

#define NMAX 100

void le_matriz(double M[NMAX][NMAX], int n, int m);
void printa_matriz(double M[NMAX][NMAX], int n, int m);
void copia_matriz(double M[NMAX][NMAX], double M1[NMAX][NMAX], int n, int m);
void inverte_linha(double M[NMAX][NMAX], double M1[NMAX][NMAX], int n, int m, int k, int l);

int main()
{   
    
    int numero, numero1, numero2, numero3;
    double matriz[NMAX][NMAX], mInvertida[NMAX][NMAX];
    
    printf("Entre com dois números inteiros entre 0 e 100 que será o tamanho de suas matrizes:\n");
    scanf("%d %d", &numero,&numero1);
    printf("\n");

    le_matriz(matriz, numero, numero1);
    printa_matriz(matriz, numero, numero1);

    printf("Entre com dois números inteiros que serão suas linhas invertidas:\n");
    scanf("%d %d", &numero2,&numero3);
    printf("\n");

    inverte_linha(mInvertida, matriz, numero, numero1, numero2, numero3);
    printa_matriz(mInvertida, numero, numero1);

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
    printf("\n");
}

//Essa função inverte a linha k da matriz pela linha l
void inverte_linha(double M[NMAX][NMAX], double M1[NMAX][NMAX], int n, int m, int k, int l) {
    
    copia_matriz(M, M1, n, m);

    for (int i = 0; i < m; i++){
        int troca = M[k - 1][i];
        M[k - 1][i] = M[l - 1][i];
        M[l - 1][i] = troca;
    }

}

//Copia matriz
void copia_matriz(double M[NMAX][NMAX], double M1[NMAX][NMAX], int n, int m) {
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            M[i][j] = M1[i][j];
        }
    }

}