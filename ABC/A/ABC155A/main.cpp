#include <iostream>
using namespace std;
int main(){
    int A, B, C;
    cin >> A >> B >> C;
    string ans = "No";
    if(A == B){
        if(B!=C){
            ans = "Yes";
        }
    }
    if(B == C){
        if(C != A){
            ans = "Yes";
        }
    }
    if(C == A){
        if(A != B){
            ans = "Yes";
        }
    }
    cout << ans << endl;
}