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
    for (int i = 0; i < H; i++)
    {
        int dotnum = 0;
        for (int j = 0; j < W; j++)
        {
            if (a[i][j] == '.')
            {
                dotnum++;
            }
        }
        if (dotnum == W)
        {
            for (int j = 0; j < W; j++)
            {
                a[i][j] = '0';
            }
        }
    }
    int margin = 0;
    for (int j = 0; j < W; j++)
    {
        int dot0num = 0;
        for (int i = 0; i < H; i++)
        {
            if (a[i][j] == '.' || a[i][j] == '0')
            {
                dot0num++;
            }
        }
        if (dot0num == H)
        {
            for (int i = 0; i < H; i++)
            {
                a[i][j] = '0';
            }
            margin++;
        }
    }
    for (int i = 0; i < H; i++)
    {
        int out_c = 0;
        for (int j = 0; j < W; j++)
        {
            if (a[i][j] == '0')
            {
                continue;
            }
            cout << a[i][j];
            out_c++;
            if (out_c + margin == W)
            {
                cout << endl;
            }
        }
    }
}