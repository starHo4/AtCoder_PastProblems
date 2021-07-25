#include <iostream>
using namespace std;
int main()
{
    int A, B;
    cin >> A >> B;
    string S;
    cin >> S;
    int pre = 0;
    int post = 0;
    bool f = false;
    for (int i = 0; i < S.size(); i++)
    {
        if (S[i] == '-')
        {
            f = true;
        }
        int ch = S[i] - '0';
        if (f)
        {
            if (0 <= ch && ch <= 9)
            {
                post++;
            }
        }
        else
        {
            if (0 <= ch && ch <= 9)
            {
                pre++;
            }
        }
    }
    if (pre == A && post == B)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}