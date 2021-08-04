#include <iostream>
#include <vector>
using namespace std;
int main(){
    string S;
    cin >> S;
    vector<int> check(26);
    for(int i=0; i<S.size(); i++){
        int c = S[i] - 'a';
        check[c]++;
    }
    for(int i=0; i<check.size(); i++){
        if(check[i] > 1){
            cout << "no" << endl;
            return 0;
        }
    }
    cout << "yes" << endl;
}