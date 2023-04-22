#include <iostream>

using namespace std;
int main(){
    int a,b,c;
    char vencedor;
    scanf("%d %d %d",&a,&b,&c);

    if(a != b && a != c){
        vencedor = 'A';
    }
        else if(b != a && b != c){
            vencedor = 'B';
        }
            else if(c != a && c != b){
                vencedor = 'C';
            }
                else{
                    vencedor = '*';
                }
    printf("%c", vencedor);

    return 0;
}