#include <iostream>
using namespace std;

int perfeito(int num){
  int soma = 0;
  for(int i = 1; i < num; i++){
    if(num % i == 0){
      soma += i;
    }
  }
  if(soma == num) return 1;
  else return 0;
}

int main(){
  int x, rep;

  cin >> rep;
  for(int i = 0; i < rep; i++){
    cin >> x;
    if(perfeito(x) == 1){
      printf("%d eh perfeito\n", x);
    }
    else{
      printf("%d nao eh perfeito\n", x);
    } 
  }
  return 0;
}