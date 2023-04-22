#include <iostream>

using namespace std;
int main(){
  int n, menor, pos;

  cin >> n;
  int x[n];

  for(int i = 0; i < n; i++){
    cin >> x[i];
    if(i == 0){
      menor = x[0];
      pos = i;
    }else{
      if(x[i] < menor){
        menor = x[i];
        pos = i;
      }    
    }
  }
  printf("Menor valor: %d\n", menor);
  printf("Posicao: %d\n", pos);

  return 0;
}