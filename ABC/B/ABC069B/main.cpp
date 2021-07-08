#include <iostream>
#include <string>
using namespace std;
int main(){
    string in;
    cin >> in;
    int between = in.length() - 2;
    string out = in[0] + to_string(between) + in[in.length()-1];
    cout << out << endl;
}