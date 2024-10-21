/* Escreva um programa que, dados dois inteiros n e m, onde 1 ≤ n,m ≤ 1000, leia uma
matriz A de ordem n×m e verifique se a matriz A é simétrica. Lembre-se que uma matriz é simétrica
se e somente se Ai, j = Aj,i.
*/

#include <stdio.h>

#define NMAX 100

void le_matriz(double M[NMAX][NMAX], int n, int m);
void printa_matriz(double M[NMAX][NMAX], int n, int m);
void verifica_matriz(double M[NMAX][NMAX], int n, int m);

int main()
{   
    
    int numero, numero1;
    double matriz[NMAX][NMAX];
    
    printf("Entre com dois números inteiros entre 0 e 100 que será o tamanho de suas matrizes:\n");
    scanf("%d %d", &numero,&numero1);
    printf("\n");

    le_matriz(matriz, numero, numero1);
    verifica_matriz(matriz, numero, numero1);

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

//Essa função recebe 1 matrizes e verifica se ela é simetrica
void verifica_matriz(double M[NMAX][NMAX], int n, int m){
    
    int isSimetrica = 1;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if(M[i][j] != M[j][i]){
                isSimetrica = 0;
            }
        }
    }

    if(isSimetrica){
        printf("A matriz é simétrica \n");
    }else{
        printf("A matriz não é simétrica \n");
    }

}