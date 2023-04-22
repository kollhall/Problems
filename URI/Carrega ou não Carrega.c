#include <stdio.h>

int main(){
    unsigned long a,b,s;
    //Long: inteiro de 32 Bits; Unsigned: sem sinal

    while(scanf("%u %u", &a, &b) != EOF){
        s = a ^ b;
        printf("%u\n", s);
    }
    return 0;
}