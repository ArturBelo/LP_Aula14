#include <stdio.h>

void comissao(float *ptr);

int main(void)
{
    float precos[5];
    float *ptr;

    for (int i = 0; i < 5; i++)
    {
        printf("Digite o preco %d: ", i + 1);
        scanf("%f", &precos[i]);

        ptr = &precos[i];

        comissao(ptr);
    }
    for (int j = 0; j < 5; j++){
        printf("Valor do produto com aumento de 10%%: %.2f\n", precos[j]);
    }
    return 0;
}

void comissao(float *ptr)
{
    *ptr = ((10.0 / 100.0) * (*ptr)) + (*ptr);
}