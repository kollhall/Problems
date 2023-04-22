#include <stdio.h>

int main(){
    int valor[20], inversor;

    for (int i = 0; i < 20; i++)
    {
        scanf("%d", &valor[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        inversor = valor[i];
        valor[i] = valor[19-i];
        valor[19-i] = inversor;
    }
    for (int i = 0; i < 20; i++)
    {
        printf("N[%d] = %d\n", i, valor[i]);
    }
    return 0;
}