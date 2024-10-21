/* Escreva um programa que, dados dois inteiros n e m, onde 1 ≤ n,m ≤ 1000, leia uma
matriz A de ordem n×m e calcule a sua transposta.
*/

#include <stdio.h>

#define NMAX 100

void le_matriz(double M[NMAX][NMAX], int n, int m);
void printa_matriz(double M[NMAX][NMAX], int n, int m);
void inverte_matriz(double M[NMAX][NMAX], double M1[NMAX][NMAX], int n, int m);

int main()
{   
    
    int numero, numero1;
    double matriz[NMAX][NMAX], mTrans[NMAX][NMAX];
    
    printf("Entre com dois números inteiros entre 0 e 100 que será o tamanho de suas matrizes:\n");
    scanf("%d %d", &numero,&numero1);
    printf("\n");

    le_matriz(matriz, numero, numero1);
    inverte_matriz(mTrans, matriz, numero, numero1);
    printa_matriz(mTrans, numero1, numero);

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

//Essa função recebe 2 matrizes sendo a primeira vazia e a preenche com a transposta da segunda
void inverte_matriz(double M[NMAX][NMAX], double M1[NMAX][NMAX], int n, int m){
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            M[j][i] = M1[i][j];
        }
    }

}