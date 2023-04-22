#include <iostream>

using namespace std;

int main(){
    int combus;
    int alc = 0, gaso = 0, die = 0;
    while(true){
        cin >> combus;
        if(combus == 1)
        alc += 1;
            else if(combus == 2)
            gaso += 1;
                else if(combus == 3)
                die += 1;
                    else if(combus == 4)
                    break;
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n",alc);
    printf("Gasolina: %d\n",gaso);
    printf("Diesel: %d\n",die);

    return 0;
}