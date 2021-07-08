#include <iostream>
using namespace std;
int main(){
    int a, b;
    cin >> a >> b;
    string s;
    s = (a*b%2) ? "Odd" : "Even";
    cout << s << endl;
    return 0;
}