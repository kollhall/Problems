#include <iostream>

using namespace std;
int main(){
    int m,n,troca;

    while(true){
        int Sum = 0;
        cin >> m >> n;
        if(m <= 0 || n <= 0)break;
        if(m > n){
            troca = n;
            n = m;
            m = troca;
        }
        for(int i = m; i <= n; i++){
            cout << i <<" ";
            Sum += i;
        }
        cout << "Sum=" << Sum << endl;

    }

    return 0;
}