#include <iostream>
using namespace std;
int main(){
    string in;
    cin >> in;
    int val = 700;
    for(int i=0;i<3; i++){
        if(in[i] == 'o'){
            val += 100;
        }
    }
    cout << val << endl;
}