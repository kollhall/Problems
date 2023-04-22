#include <iostream>
 
using namespace std;
 
int main() {
    int x,y;

    while(true){
    scanf("%d %d", &x,&y);
    if(x == y)break;
    
    if(x > y)
        printf("Decrescente\n");
        else if(x < y)
            printf("Crescente\n");
    }
    return 0;
}