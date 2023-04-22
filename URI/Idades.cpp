#include <iostream>

using namespace std;

int main(){

  int idade,soma_idade = 0;
  float media, cont = 0;

  while(true){
    cin >> idade;
    if(idade < 0){
      break;
    }
    else{
      soma_idade += idade;
      cont++;
    }
  }
  media = soma_idade/cont;
  printf("%.2f", media);
  return 0;
}