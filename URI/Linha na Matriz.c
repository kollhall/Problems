#include <stdio.h>

int main(){
    float M[12][12];
    int linha;
    char opc[2];
    float resul = 0.0;

    scanf("%d", &linha);
    scanf("%s", &opc);
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            scanf("%f", &M[i][j]);
        }    
    }
    for (int j = 0; j < 12; j++)
    {
        resul += M[linha][j];
    }  
    if (opc[0] == 'M')
    {
        resul = resul/12;
    }
    printf("%.1f\n", resul);
    
    return 0;
}