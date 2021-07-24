#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    if (N % 10 == 9)
    {
        cout << "Yes" << endl;
        return 0;
    }
    N /= 10;
    if (N % 10 == 9)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}