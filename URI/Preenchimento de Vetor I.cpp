#include <iostream>

using namespace std;

int main(){
  int val[10];

  cin >> val[0];

  for(int i = 1; i <= 9; i++){
    val[i] = val[i - 1] * 2;
  }
  for(int i = 0; i <= 9; i++){
    printf("N[%d] = %d\n", i, val[i]);
  }
  return 0;
}