#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int N;
    cin >> N;
    vector<int> P(N);
    for(int i=0; i<N; i++){
        cin >> P[i];
    }
    int ans = 0;
    int mn = 10000000;
    for(int i=0; i<N; i++){
        if(mn > P[i]){
            mn = P[i];
            ans++;
        }
        if(mn == 1){
            break;
        }
    }
    cout << ans << endl;
}