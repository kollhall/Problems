#include <iostream>

using namespace std;

int main(){
  float nt1, nt2;
  int resp;

  do
  {
    while (true)
    {
      cin >> nt1;
      if(nt1 < 0 || nt1 > 10){
        cout << "nota invalida" << endl;
      }
      else{
        break;
      } 
    }
      
    while (true)
    {
      cin >> nt2;
      if(nt2 < 0 || nt2 > 10){
        cout << "nota invalida" << endl;
      }
      else{
        break;
      }
    }
    printf("media = %.2lf\n", (nt1 + nt2)/2);

    resp = -1;
    while(resp < 1 || resp > 2){
      
      cout << "novo calculo (1-sim 2-nao)" << endl;
      cin >> resp;
    }
  }while (resp == 1);

  return 0;
}