#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int out = 1;
    while(true){
        out *= 2;
        if(out > N){
            break;
        }
    }
    out /= 2;
    cout << out << endl;
}