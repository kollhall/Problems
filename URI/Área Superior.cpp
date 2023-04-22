#include <iostream>

using namespace std;

int main() {
    double val[12][12];
    char opc;
    double sum = 0;
    int aux = 1;
    int ct = 0;


    cin >> opc;
    for(int i = 0; i < 12; i++) {
        for(int j = 0; j < 12; j++) {
            cin >> val[i][j];
        }
    }
    for(int i = 0; i < 5; i++) {      
        for(int j = aux; j < 12 - aux; j++) {
            sum += val[i][j];
            ct++;
        }
        aux++;
    }
    if(opc =='S') {
        printf("%.1lf\n", sum);
    }
    if(opc == 'M'){
        printf("%.1lf\n", sum/ct);
    }
    return 0;
}