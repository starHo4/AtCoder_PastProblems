#include <iostream>
using namespace std;
int main()
{
    string S;
    cin >> S;
    int c = 0;
    bool f_c = false;
    for (int i = 0; i < 3; i++)
    {
        if (S[i] == 'R' && c == 0)
        {
            c++;
            f_c = true;
        }
        else if (S[i] == 'R' && f_c)
        {
            c++;
        }
        else
        {
            f_c = false;
        }
    }
    cout << c << endl;
}