#include <iostream>
using namespace std;
int main()
{
    int H, W;
    cin >> H >> W;
    char fig[H][W];
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            cin >> fig[i][j];
        }
    }
    char fig2[2 * H][W];
    for (int i = 0; i < 2 * H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            fig2[i][j] = fig[i / 2][j];
            cout << fig2[i][j];
        }
        cout << endl;
    }
}