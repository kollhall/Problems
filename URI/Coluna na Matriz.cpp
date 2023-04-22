#include <iostream>

using namespace std;

int main() {
    double m[12][12], sum = 0;
    char opc;
    int coluna, ct = 0;

    cin >> coluna;
    cin >> opc;

    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            cin >> m[i][j];
        }
    }
    for (int i = 0; i < 12; i++)
    {
        sum += m[i][coluna];
        ct++;
    }
    if(opc == 'M') {
        sum = sum/ct;
    }
    printf("%.1lf\n", sum);
    return 0;
}
