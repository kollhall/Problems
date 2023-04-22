#include <iostream>
#include <math.h>

using namespace std;
int main(){
    double a, b, c, trc;

    cin >> a >> b >> c;

    if(a < b){
        trc = a;
        a = b;
        b = trc;
    }
    if(a < c){
        trc = a;
        a = c;
        c = trc;
    }
    if(b < c){
        trc = b;
        b = c;
        c = trc;
    }

    if(a >= b + c){
        printf("NAO FORMA TRIANGULO\n");
    }
        else if(pow(a,2) == (pow(b,2) + pow(c,2))){
                printf("TRIANGULO RETANGULO\n");
        }
            else if(pow(a,2) > (pow(b,2) + pow(c,2))){
                    printf("TRIANGULO OBTUSANGULO\n");
            }
                else if(pow(a,2) < (pow(b,2) + pow(c,2))){
                        printf("TRIANGULO ACUTANGULO\n");
                }
                
    if(a == b && b == c){
        printf("TRIANGULO EQUILATERO\n");
    }
        else if(a == b || b == c){
            printf("TRIANGULO ISOSCELES\n");
        }

    return 0;
}