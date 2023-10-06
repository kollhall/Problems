#include <iostream>
#include <deque>
#include <queue>

using namespace std;

int main() {
    deque<int> cartasIniciais;
    queue<int> cartasDescartadas;
    int linhas;

    while (true)
    {
        cin >> linhas;
        if (linhas == 0){
            break;
        }
        for (int i = 1; i <= linhas; i++){
            cartasIniciais.push_back(i);
        }

        while (cartasIniciais.size() != 1)
        {
            cartasDescartadas.push(cartasIniciais.front()); 
            cartasIniciais.pop_front();
            auto troca = cartasIniciais.front();
            cartasIniciais.pop_front(); 
            cartasIniciais.push_back(troca); 
        }
        cout << "Discarded cards: ";
        
        int tamanho = cartasDescartadas.size();
        for (int i = 0; i < tamanho; i++)
        {
            cout << cartasDescartadas.front();
            cartasDescartadas.pop();
            if (i < tamanho - 1) {
                cout << ", ";
            } else {
                cout << "\n";
            }
        }
        cout << "Remaining card: " << cartasIniciais.front() << endl;
        cartasIniciais.clear();
        queue<int> filaVazia;
        cartasDescartadas = filaVazia;
    } 
}
