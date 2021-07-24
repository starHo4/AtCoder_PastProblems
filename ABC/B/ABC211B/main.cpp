#include <iostream>
using namespace std;
int main()
{
    string s[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> s[i];
    }
    for(int i=0; i<4; i++){
        for(int j=i+1; j<4; j++){
            if(s[i] == s[j]){
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;
}