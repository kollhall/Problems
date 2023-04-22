#include <iostream>

using namespace std;
int main(){
  float s = 0;
  int n = 1;
  for(int i = 1; i <= 39; i+= 2){
    s += (float)i/(float)n;
    n *= 2;
  }
  printf("%.2f\n", s);
  return 0;
}
