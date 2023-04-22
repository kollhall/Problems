#include <iostream>

using namespace std;
int main(){
  int x, z, soma = 0, ct = 0;

  cin >> x;
  do{
    cin >> z;
  }while(z <= x);

  while(z > soma){
    soma += x;
    x++;
    ct++;
  }
  cout << ct << endl;

  return 0;
}