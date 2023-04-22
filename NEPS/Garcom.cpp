#include <iostream>

using namespace std;
int main(){
    int n,l,c, totalquebrado = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d %d", &l,&c);
        if(l > c)
        totalquebrado += c;
    }
    printf("%d", totalquebrado);

    return 0;
}