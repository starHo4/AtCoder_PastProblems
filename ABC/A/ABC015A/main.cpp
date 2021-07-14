#include <iostream>
using namespace std;
int main(){
    string A, B;
    getline(cin, A);
    getline(cin, B);
    string out = A;
    if(A.size() < B.size()){
        out = B;
    }
    cout << out << endl;
}