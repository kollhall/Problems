#include <iostream>

using namespace std;

int main() {
    unsigned int r1, r2;
    int t;

    cin >> t;

    for(int i = 0; i < t; i++) {
        cin >> r1 >> r2;
        printf("%d\n", r1 + r2);
    } 
    return 0;
}