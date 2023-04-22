#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int N,a,coelhos = 0,ratos = 0,sapos = 0;
    char e;
    double total_cobaias = 0;
    

    cin >> N;

    for(int i = 0; i < N; i++){
        cin >> a >> e;
        total_cobaias += a;
        if(e == 'C'){
            coelhos += a;
        }
        if(e == 'R'){
            ratos += a;
        }
        if(e == 'S'){
            sapos += a;
        }
    }

    double pc = (100*coelhos)/total_cobaias;
    double pr = (100*ratos)/total_cobaias;
    double ps = (100*sapos)/total_cobaias;
    
    cout << "Total: " << total_cobaias << " cobaias" << endl;
    cout << "Total de coelhos: " << coelhos << endl;
    cout << "Total de ratos: " << ratos << endl;
    cout << "Total de sapos: " << sapos << endl;
    cout << "Percentual de coelhos: " << fixed << setprecision(2) << pc << " %" << endl;
    cout << "Percentual de ratos: " << fixed << setprecision(2) << pr << " %" << endl;
    cout << "Percentual de sapos: " << fixed << setprecision(2) << ps << " %" << endl;
    

    return 0;
}