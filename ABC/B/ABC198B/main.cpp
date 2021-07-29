#include <iostream>
#include <algorithm>
using namespace std;
bool isPalinWLZ(int N)
{
    string str = to_string(N);
    string tmp = str;
    reverse(tmp.begin(), tmp.end());
    if (tmp == str)
    {
        return true;
    }
    else if (N % 10 == 0)
    {
        return isPalinWLZ(N / 10);
    }
    else
    {
        return false;
    }
}
int main()
{
    int N;
    cin >> N;
    if (isPalinWLZ(N))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}