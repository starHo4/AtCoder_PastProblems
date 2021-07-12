#include <iostream>
using namespace std;
int main(){
    int N;
    cin >> N;
    int sum = 0;
    int n = N;
    string out = "No";
    while(n > 0){
        sum += n % 10;
        n /= 10;
    }
    if(!(N % sum)) out = "Yes";
    cout << out << endl;
}