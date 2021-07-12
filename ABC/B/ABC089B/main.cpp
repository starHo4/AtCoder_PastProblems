#include <iostream>
using namespace std;
int main(){
    int N;
    cin >> N;
    string S[N];
    string out = "Three";
    for(int i=0; i<N; i++){
        cin >> S[i];
        if(S[i] == "Y"){
            out = "Four";
            break;
        }
    }
    cout << out << endl;
}