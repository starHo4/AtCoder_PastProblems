#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int th, hu, te, on;
    th = N / 1000;
    hu = N / 100 % 10;
    te = N / 10 % 10;
    on = N % 10;
    string out = "No";
    if (th == hu)
    {
        if (hu == te)
        {
            out = "Yes";
        }
    }
    else
    {
        if (hu == te && te == on)
        {
            out = "Yes";
        }
    }
    cout << out << endl;
}