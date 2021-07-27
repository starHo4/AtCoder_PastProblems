#include <iostream>
using namespace std;
int main(){
    int N;
    string S;
    cin >> N >> S;
    // bool a_f, b_f;
    // a_f = b_f = false;
    int ans = 0;
    for(int i=0; i<N-2; i++){
        if(S[i] == 'A'){
            if(S[i+1] == 'B'){
                if(S[i+2]=='C'){
                    ans++;
                }
            }
        }
    }
    cout << ans << endl;
}