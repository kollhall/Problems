#include <iostream>

using namespace std;
int main() {
    double m[12][12];
    double sum = 0;
    int count = 0;
    char opc;
    
    cin >> opc;
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            cin >> m[i][j];
        }      
    }
    for (int i = 1; i < 12; i++)
    {
        for (int j = 0; j < i; j++)
        {
            sum += m[i][j];
            count++;
        }
    }
    if(opc == 'M') {
        sum = sum/count;
    }

    printf("%.1lf\n", sum);
    return 0;
}