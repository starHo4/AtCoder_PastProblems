#include <iostream>
using namespace std;
int main()
{
    int G[12] = {0, 2, 0, 1, 0, 1, 0, 0, 1, 0, 1, 0};
    int x, y;
    cin >> x >> y;
    if (G[x - 1] == G[y - 1])
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}