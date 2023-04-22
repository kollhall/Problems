#include <iostream>

using namespace std;

int main()
{
    int valor, num, i, o;
    cin >> valor;
    i = 0;
    o = 0;

    for(int x = 0; x < valor; x++)
    {
        cin >> num;

        if(num >= 10 && num <= 20)
        {
         i++;
        }
            else
            {
                o++;
            }
    }
    cout << i <<" in"<< endl;
    cout << o <<" out"<< endl;

    return 0;
}