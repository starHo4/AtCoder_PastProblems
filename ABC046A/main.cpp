#include <iostream>
#include <set>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int o = 1;
    if(a != b){
        o++;
    }
    if(a != c && b != c){
        o++;
    }
    cout << o << endl;
}