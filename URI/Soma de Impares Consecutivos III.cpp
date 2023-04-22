#include <iostream>

using namespace std;

int main(){
  int n, x, y,soma;

  cin >> n;

  //Cadastro, e verifica se o x é par, se ele for par, então soma +1 para transforma-lo em ímpar
  for(int i = 0; i < n; i++){
    cin >> x;
    cin >> y;
    if(x % 2 == 0){
        x++;
    }
    soma = 0;
    //somasse x até i ser igual a y
    for(int i = 0; i < y; i++){
      soma += x;
      x += 2;
    }
    cout << soma << endl;
  }
  return 0;
}