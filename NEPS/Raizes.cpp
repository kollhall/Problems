#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
int main(){
    int n;
    double x;
    cin >> n;
    cout << fixed << setprecision(4);
    for(int i = 0; i < n; i++){
        cin >> x;
        cout << sqrt(x) << endl;
    }
    return 0;
}