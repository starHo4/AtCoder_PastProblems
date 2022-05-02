#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string S;
    cin >> S;
    bool Upper = false;
    bool Lower = false;
    bool Differ = false;
    vector<char> tmp(0);

    for (int i = 0; i < S.size(); i++)
    {
        if (0 <= (S[i] - 'a') && (S[i] - 'a') < 26 && !Lower)
        {
            Lower = true;
        }
        if (0 <= (S[i] - 'A') && (S[i] - 'A') < 26 && !Upper)
        {
            Upper = true;
        }

        tmp.push_back(S[i]);
        for (int j = 0; j < tmp.size() - 1; j++)
        {
            if (tmp[j] == S[i])
            {
                cout << "No" << endl;
                return 0;
            }
        }
    }

    if (Upper && Lower)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}