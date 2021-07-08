#include <iostream>
using namespace std;
int main(){
    int N;
    cin >> N;
    int o = 0;
    for(int i=1; i<=N; i++){
        o += i;
    }
    cout << o << endl;
}