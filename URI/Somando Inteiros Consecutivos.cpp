#include <iostream>

using namespace std;

int main(){
  int a, n, tot = 0;

  cin >> a;
  do{
    cin >> n;
  }while(n <= 0);

  for(int i = 0; i < n; i++){
    tot += a + i;
  }
  cout << tot << endl;
  return 0;
}