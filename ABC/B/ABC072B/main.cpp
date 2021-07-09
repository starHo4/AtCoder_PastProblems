#include <iostream>
using namespace std;
int main(){
    string s, out;
    cin >> s;
    for(int i=0; i<s.size(); i+=2){
        out.push_back(s[i]);
    }
    cout << out << endl;
}