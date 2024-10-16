/* Implemente a seguinte função 
@valores é um vetor contendo os n números
@n é a variável que diz quantos valores estão no vetor
@chave é um número inteiro
Retorno: Sua função deve retornar i se valores[i] == chave.
Se o valor 'chave' não está no vetor, então sua função
deve retornar -1
*/
#include <stdio.h>

void prencheVetor(int lista[], int n);
int busca(int valores[], int n, int chave);

#define NMAX 1000

int main()
{
    int numero, chave, resultado;
    
    printf("Entre com um número inteiro que será o tamanho de seu vetor:\n");
    scanf("%d", &numero);
    
    int lista1[NMAX]; 
    prencheVetor(lista1, numero);
    
    printf("Entre com um número inteiro que será a chave que você está verificando:\n");
    scanf("%d", &chave);
    
    resultado = busca(lista1, numero, chave);
    printf("%d\n", resultado);
    
    return 0;
}

/*Essa função popula um vetor de tamanho n*/
void prencheVetor(int lista[], int n) {
    
    for (int i = 0; i < n; i++) {
        printf("Entre com um número:\n");
        scanf("%d", &lista[i]);
    }

}

/*Essa função lê o vetor e um numero chave e verifica se a chave está no vetor*/
int busca(int valores[], int n, int chave) {
    
    for (int i = 0; i < n; i++) {
        if (valores[i] == chave) {
            return i;  
        }
    }

    return -1;  

}
