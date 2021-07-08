#include <iostream>
using namespace std;
int main(){
    int N, A;
    cin >> N >> A;
    string s = "No";
    if(N % 500 <= A){
        s = "Yes";
    }
    cout << s << endl;
}