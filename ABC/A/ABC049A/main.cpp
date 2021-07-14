#include <iostream>
using namespace std;
int main(){
    string c;
    cin >> c;
    string out = "consonant";
    if(c == "a" || c == "i" || c == "u" || c == "e" || c == "o"){
        out = "vowel";
    }
    cout << out << endl;
}