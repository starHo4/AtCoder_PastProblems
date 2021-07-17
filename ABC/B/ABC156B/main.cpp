#include <iostream>
using namespace std;
int main(){
    int N, K;
    cin >> N >> K;
    int out = 0;
    while(N > 0){
        N /= K;
        out++;
    }
    cout << out << endl;
}