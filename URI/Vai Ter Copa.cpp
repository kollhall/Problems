#include <iostream>

using namespace std;

int main() {
    int num;

    while(cin >> num) {
        if (num > 0)
        {
            printf("vai ter duas!\n");
        } else {
            printf("vai ter copa!\n");
        }
    }
    return 0;
}