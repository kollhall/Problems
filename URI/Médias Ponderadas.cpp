#include <iostream>
#include <iomanip>

using namespace std;
int main(){
    int N; 
    float v1,v2,v3;

    cin >> N;

    cout << fixed << setprecison(1);
    for(int i = 0; i < N; i++){
        cin >> v1 >> v2 >> v3;
        cout << (v1 * 2 + v2 * 3 + v3 * 5)/10 << endl;
    }

    return 0;
}