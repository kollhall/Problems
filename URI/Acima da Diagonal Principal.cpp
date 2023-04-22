#include <iostream>

using namespace std;

int main() {
    double m[12][12], sum = 0;
    char opc;
    int count = 1, ct = 0;
    
    cin >> opc;

    for(int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++){
            cin >> m[i][j];
        }
    }
    for (int i = 0; i < 11; i++)
    {
        for (int j = count; j < 12; j++)
        {
            sum += m[i][j];
            ct++;
        }
        count++;
    }
    if(opc == 'S') {
        printf("%.1lf\n", sum);
    }
    if(opc == 'M') {
        printf("%.1lf\n", sum/ct);
    }
    return 0;
}