#include <iostream>

using namespace std;
int main(){
    int x,y,troca,soma = 0;
    scanf("%d %d", &x,&y);
    if(x > y){
        troca = y;
        y = x;
        x = troca;
    }
    for(int i = x; i <= y; i++){
        if(i % 13 != 0)
            soma += i;
    }
    printf("%d\n", soma);
    return 0;
}