/* Escreva um programa que leia uma sequência de n números inteiros, 1 ≤ n ≤ 100, e imprima esses números em ordem não decrescente. Para isso, você deve obrigatoriamente implementar
a seguinte função

// @valores é um vetor contendo os n números que deverão ser ordenados
// @n é a variável que diz quantos valores estão no vetor
*/

#include <stdio.h>

void prencheVetor(int lista[], int n);
void imprimeVetor(int lista[], int n);
void ordena(int valores[], int n);

#define NMAX 1000

int main()
{
    int numero;
    
    printf("Entre com um número inteiro entre 0 e 100 que será o tamanho de seu vetor:\n");
    scanf("%d", &numero);
    
    int lista1[NMAX]; 
    prencheVetor(lista1, numero);
    
    ordena(lista1, numero);

    return 0;
}

/*Essa função popula um vetor de tamanho n*/
void prencheVetor(int lista[], int n) {
    
    for (int i = 0; i < n; i++) {
        printf("Entre com um número:\n");
        scanf("%d", &lista[i]);
    }

}

/*Essa função lê o vetor e um numero e ordena o vetor em ordem crescente*/
void ordena(int valores[], int n) {
    
    int valor, i, j;
    
    for (i = 1; i < n; i++)
    {
        j = i;
        while ((j != 0) && (valores[j] < valores[j - 1]))
        {
            valor = valores[j];
            valores[j] = valores[j - 1];
            valores[j - 1] = valor; 
            j--;
        }      
    }

    imprimeVetor(valores, n);

}

/*essa função imprime um vetor*/
void imprimeVetor(int lista[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\n%d", lista[i]); 
    }
}