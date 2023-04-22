#include <iostream>

using namespace std;
int main(){
    int senha;

    scanf("%d", &senha);
    while(true){
        if(senha == 2002 ){
        printf("Acesso Permitido\n");
        break;
        }
            else{
            printf("Senha Invalida\n");
            scanf("%d", &senha);
            }    
    }
    
    return 0;
}