#include <stdio.h>
#include <stdbool.h>

void pertence(int valor){
    
    int v1 = 0, v2 = 1, aux = 0; 
    bool flag = false;
    while(1){
        aux = v1 + v2;
        v1 = v2;
        v2 = aux;
        if(valor == v1 || valor == v2 || valor == aux){
            flag = true;
            break;
        }
        if(valor < v1 && valor < v2 && valor < aux){
            break;
        }
    }
    
    if(flag){
        printf("O valor pertence a sequencia de Fibonacci");
    }else{
        printf("O valor nao pertence a sequencia de Fibonacci");
    }
    
}


int main()
{
    int valor;
    printf("Informe um valor: ");
    scanf("%d",&valor);
    
    pertence(valor);

    return 0;
}