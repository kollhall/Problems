#include <iostream>
using namespace std;

int primo(int num){
  int totdiv = 0;
  for(int i = 1; i <= num; i++){
    if(num % i == 0){
      totdiv += 1;
    }
  }
  if(totdiv == 2) return 1;
  else return 0;
}
int main(){
  int x, n_vezes;

  cin >> n_vezes;
  for(int i = 0; i < n_vezes; i++){
    cin >> x;
    if(primo(x) == 1){
      printf("%d eh primo\n", x);
    }else{
      printf("%d nao eh primo\n", x);
    }
  } 
  return 0;
}