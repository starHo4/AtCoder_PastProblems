#include <iostream>
#include <vector>
using namespace std;
int main(){
    string S;
    cin >> S;
    int len = S.length();
    vector<int> a(len);
    for(int i=0; i<len; i++){
        a[i] = S[i] - '0';
    }
    
}