#include <iostream>
using namespace std;
int main(){
    double A, B;
    cin >> A >> B;
    for(int i=0; i<10001; i++){
        if(i * 8 / 100 == A && i * 10 / 100 == B){
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;
}