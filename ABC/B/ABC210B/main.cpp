#include <iostream>
using namespace std;
int main(){
    int N;
    string S;
    cin >> N >> S;
    string out = "Takahashi";
    for(int i=0; i<N; i++){
        if(S[i] == '1'){
            if(i%2){
                out = "Aoki";
            }
            break;
        }
    }
    cout << out << endl;
}