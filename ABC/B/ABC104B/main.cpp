#include <iostream>
#include <cctype>
using namespace std;
int main(){
    string S;
    cin >> S;
    if(S[0] != 'A'){
        cout << "WA" << endl;
        return 0;
    }
    int numC = 0;
    for(int i=2; i<=S.size()-2; i++){
        if(S[i] == 'C'){
            numC++;
        }
    }
    if(numC != 1){
        cout << "WA" << endl;
        return 0;
    }
    for(int i=0; i<S.size(); i++){
        if(S[i] == 'A' || S[i] == 'C'){
            continue;
        }
        if(isupper(S[i])){
            cout << "WA" << endl;
            return 0;
        }
    }
    cout << "AC" << endl;
}