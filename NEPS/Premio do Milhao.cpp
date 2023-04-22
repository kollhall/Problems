#include <bits/stdc++.h>

int main(){

    int n,a,i, qtd = 0, dia = 0;

    scanf("%d",&n);
    for (i = 1; i <= n; i++){
        scanf("%d",&a);
        qtd += a;

        if(qtd == 1000000){
            dia = i;
            break;
        }
    }
    printf("%d",dia);

    return 0;
}