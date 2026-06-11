#include <stdio.h>

int main(){
    int preco1 = 4, preco2 = 8;
    char produto[10];
    
    printf("Digite o nome do produto\n");
    scanf("%9s", produto);
    printf("Digite o preço para o supermercado 1\n");
    scanf("%d", &preco1);
    printf("Digite o preço para o supermercado 2\n");
    scanf("%d", &preco2);
    
    printf("Preço %s no supermercado 1 e:%d\n", produto, preco1);

    printf("Preço %s no supermercado 2 e:%d", produto, preco2);
}