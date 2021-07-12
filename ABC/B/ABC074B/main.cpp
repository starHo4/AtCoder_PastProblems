#include <iostream>
using namespace std;
int main(){
    int N, K;
    cin >> N >> K;
    int x[N];
    for(int i=0; i<N; i++) cin >> x[i];
    int sum = 0;
    for(int i=0; i<N; i++){
        if(x[i] <= K - x[i]){
            sum += 2 * x[i];
        } else {
            sum += 2 * (K - x[i]);
        }
    }
    cout << sum << endl;
}