

//================================================================
// 			 O programa calcula e mostra o en�simo termo
//            		da sequ�ncia Fibonacci 
//================================================================
 
// Bibliotecas
#include <stdio.h>
#include <stdlib.h>
 
//fun��o fibonacci
int fibonacci(int n);
 
//main ()
int main(int argc, char** argv) {
    int n;
 
    printf("Digite a posicao: ");
    scanf("%d", &n);
    printf("O termo: %d\n", fibonacci(n));
    system("pause");
    return 0;
}
 
// Fun��o Fibonacci
int fibonacci(int n) {
    int anterior = 0,
        proximo = 1,
        aux,
        i;
 
    if(n == 1) {
        return 0;
    } else if(n == 2) {
        return 1;
    } else {
        for(i = 3; i <= n; i++) {
            aux = proximo;
            proximo = anterior + proximo;
            anterior = aux;
        }
        return proximo;
    }
}
