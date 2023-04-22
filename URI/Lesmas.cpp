#include <iostream>

using namespace std;

int veloc(int vel) {
    if(vel < 10) {
        return 1;
    } else if (vel >= 10 && vel < 20) {
        return 2;
    } else {
        return 3;
    }
}

int main() {
    int num, x ,maior;
    while(cin >> num) {
        maior = -1;
        for(int i = 0; i < num; i++) {
            cin >> x;
            if(x > maior) {
                maior = x;
            }
        }
        cout << veloc(maior) << endl;
    }
    return 0;
}
