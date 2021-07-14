#include <iostream>
using namespace std;
int main(){
    string S;
    cin >> S;
    string out = "NO";
    if(S[S.size()-1] == 'T'){
        out = "YES";
    }
    cout << out << endl;
}