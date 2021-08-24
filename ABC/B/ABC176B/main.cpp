#include <iostream>
using namespace std;
int main()
{
    string N;
    cin >> N;
    int sum = 0;
    for (int i = 0; i < N.size(); i++)
    {
        int ch = N[i] - '0';
        sum += ch;
    }
    if (sum % 9)
    {
        cout << "No" << endl;
    }
    else
    {
        cout << "Yes" << endl;
    }
}