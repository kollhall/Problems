#include <iostream>

using namespace std;

int main(){
    int valor, maior,posi;
    maior = 0;
    for(int i = 1; i <= 10; i++){
        cin >> valor;

        if(valor > maior){
            maior = valor;
            posi = i;
        }
    }
    cout << maior << endl;
    cout << posi << endl;

    return 0;
}