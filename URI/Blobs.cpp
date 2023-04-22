#include <iostream>

using namespace std;
int main(){
  int n, dias;
  float c;

  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> c;
    dias = 0;
    while(true){
      c = c/2;
      dias++;
      if(c <= 1){
        printf("%d dias\n", dias);
        break;
      }
    }
  }
  return 0;
}