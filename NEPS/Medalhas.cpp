#include <iostream>

using namespace std;
int main(){
    int t1, t2, t3, ouro, prata, bronze;
    scanf("%d %d %d", &t1, &t2, &t3);

    if(t1 < t2 && t2 < t3){ ouro = 1; prata = 2; bronze = 3;}
    if(t1 < t3 && t3 < t2){ ouro = 1; prata = 3; bronze = 2;}
    if(t2 < t1 && t1 < t3){ ouro = 2; prata = 1; bronze = 3;}
    if(t2 < t3 && t3 < t1){ ouro = 2; prata = 3; bronze = 1;}
    if(t3 < t1 && t1 < t2){ ouro = 3; prata = 1; bronze = 2;}
    if(t3 < t2 && t2 < t1){ ouro = 3; prata = 2; bronze = 1;}
    
    printf("%d\n", ouro);
    printf("%d\n",prata);
    printf("%d\n", bronze);
    
    return 0;
}