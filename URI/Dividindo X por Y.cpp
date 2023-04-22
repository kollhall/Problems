#include <iostream>
#include <iomanip>

using namespace std;
int main(){
    int n,x,y;
    scanf("%d",&n);
    cout << fixed << setprecision(1);
    for(int i = 0; i < n; i++){
        scanf("%d %d", &x,&y);
        if(y == 0)
            printf("divisao impossivel\n");
            else
                cout << (float) x/y << endl;
    }
    return 0;
}