#include <iostream>
using namespace std;
int main(){
    int M1, D1, M2, D2;
    cin >> M1 >> D1 >> M2 >> D2;
    int ans = 0;
    if(M1 != M2){
        ans = 1;
    }
    cout << ans << endl;
}