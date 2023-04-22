#include <iostream>

using namespace std;
int main() {
    double m[12][12],  sum = 0;
    char opc;
    int controladorCol = 0, cont = 0;

    cin >> opc;

    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            cin >> m[i][j];
        }
    }
    for (int i = 0; i < 11; i++)
    {
        for (int j = 0; j < 11 - controladorCol; j++)
        {
            sum += m[i][j];
            cont++;
        }
        controladorCol++;
    }
    if (opc == 'M')
    {
        sum = sum/cont;
    }
    printf("%.1lf\n", sum);
    return 0;
}