#include <stdio.h>
int primo(int n){
    if(n<2){
        return 0;
    }
    for (int i=2; i*i <= n; i++){ //checar se o numero é primo
        if(n%i == 0){
            return 0; 
        }
    }
    return 1;
}
int main(){
    int numero;
    do{
        printf("Digite um numero inteiro positivo:\n");
        scanf("%d", &numero);
        if(numero <=1){
            printf("Entrada invalida! Deve ser maior que 1.\n");
        }
        }while(numero<=1);
        
    //exibir os numeros primos menores que variavel "numero"
        printf("\n Numeros primos menores que %d:\n", numero);
        for(int i=2; i<numero; i++){
            if(primo(i)){
                printf("| %d |", i);
            }
    }
    
    return 0;
}