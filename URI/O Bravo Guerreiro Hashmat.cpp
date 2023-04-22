#include <iostream>
using namespace std;

int main(){
  long long qtd_a, qtd_i;

  while(cin >> qtd_a){
    cin >> qtd_i;   
    if(qtd_a >= qtd_i){
      cout << qtd_a - qtd_i << endl;
    }else{
      cout << qtd_i - qtd_a << endl;
    }
  }
  return 0;
}