#include <stdio.h>

int main(){
    int valor, soma, ct;
    
    while(1){
        scanf("%d", &valor);
        if (valor != 0)
        {
            soma = 0;
            ct = 1;
            for (int i = valor; ct <= 5; i++)
            {
                if (i % 2 == 0)
                {
                    soma += i;
                    ct++;
                }
            }
            printf("%d\n", soma); 
        } else {
            break;
        } 
    }
    return 0;
}