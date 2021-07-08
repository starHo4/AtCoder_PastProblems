#include <iostream>
using namespace std;
int main(){
    int N;
    cin >> N;
    string out = "No";
    for(int i=1; i<=9; i++){
        for(int j=1; j<=9; j++){
            if(i * j == N){
                out = "Yes";
            }
        }
    }
    cout << out << endl;
}