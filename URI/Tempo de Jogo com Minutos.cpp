#include <iostream>

using namespace std;
int main()  {
    int hi,mi,hf,mf,ht,mt;

    cin >> hi >> mi >> hf >> mf;

    ht = hf - hi;
    mt = mf - mi;
    
    if(ht == 0 && mt <= 0)
        ht = 24;

    if (ht < 0)
        ht = ht + 24;

    if(mt < 0)
    {
        ht--;
        mt = mt + 60;
    }

    cout << "O JOGO DUROU " << ht << " HORA(S) E " << mt << " MINUTO(S)" << endl;    
    return 0;
}