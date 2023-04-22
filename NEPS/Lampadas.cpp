#include <bits/stdc++.h>
using namespace std;
int main(){

    int N,estado_botoes,a = 0,b = 0;
    scanf("%d", &N);
    for(int i = 0; i < N; i++)
    {
       cin >> estado_botoes;
       if(estado_botoes == 1)
       {
           a = 1 - a;
       }    else if(estado_botoes == 2)
            {
                a = 1 - a;
                b = 1 - b;
            }
    }
    cout << a << endl;
    cout << b << endl;
    return 0;
}