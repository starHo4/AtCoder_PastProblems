#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string S;
    cin >> S;
    int num_0 = 0;
    int num_1 = 0;
    int N = S.size();
    for(int i=0; i<N; i++){
        if(S[i] == '1' && i % 2 == 0){
            num_0++;
        }
        if(S[i] == '0' && i % 2 == 1){
            num_0++;
        }
    }
    for(int i=0; i<N; i++){
        if(S[i] == '0' && i % 2 == 0){
            num_1++;
        }
        if(S[i] == '1' && i % 2 == 1){
            num_1++;
        }
    }
    int ans = min(num_0, num_1);
    cout << ans << endl;
}