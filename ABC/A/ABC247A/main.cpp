#include <iostream>
#include <bitset>
using namespace std;

int main()
{
    string S;
    cin >> S;
    bitset<4> b(S);
    b = (b >> 1);
    cout << b.to_string() << endl;
}