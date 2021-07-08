#include <iostream>
using namespace std;
int main(){
    int N, Y;
    cin >> N >> Y;
    int o10000 = -1;
    int o5000 = -1;
    int o1000 = -1;
    for(int i=0; i<=N; i++){
        for(int j=0; j<=N-i; j++){
            int k = N-i-j;
            if(10000 * i + 5000 * j + 1000 * k == Y){
                o10000 = i;
                o5000 = j;
                o1000 = k;
            }
        }
    }
    cout << o10000 << " " << o5000 << " " << o1000 << endl;
}