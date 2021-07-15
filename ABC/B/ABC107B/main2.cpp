#include <iostream>
using namespace std;
int main()
{
    int H, W;
    cin >> H >> W;
    char a[H][W];
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            cin >> a[i][j];
        }
    }
    int r[H], c[W];
    for(int i=0; i<H; i++) r[i] = 0;
    for(int i=0; i<W; i++) c[i] = 0;
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            if (a[i][j] == '#')
            {
                r[i]++;
                c[j]++;
            }
        }
    }
    for (int i = 0; i < H; i++)
    {
        if (r[i])
        {
            for (int j = 0; j < W; j++)
            {
                if(c[j]){
                    cout << a[i][j];
                }
            }
            cout << endl;
        }
    }
}