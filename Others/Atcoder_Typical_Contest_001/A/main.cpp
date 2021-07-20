#include <iostream>
#include <vector>
using namespace std;
int H, W;
int s_y, s_x, g_y, g_x;
void search(vector<vector<char> > &c, vector<vector<bool> > &checked, int y, int x)
{
    if (y < 0 || y >= H || x < 0 || x >= W)
    {
        return;
    }
    if (c[y][x] == '#')
    {
        return;
    }
    if (checked[y][x])
    {
        return;
    }
    checked[y][x] = true;
    search(c, checked, y - 1, x);
    search(c, checked, y + 1, x);
    search(c, checked, y, x - 1);
    search(c, checked, y, x + 1);
}
bool reachable(vector<vector<char> > &c, vector<vector<bool> > &checked)
{
    search(c, checked, s_y, s_x);
    if (checked[g_y][g_x])
    {
        return true;
    }
    return false;
}
int main()
{
    cin >> H >> W;
    vector<vector<char> > c(H, vector<char>(W));
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            cin >> c[i][j];
            if (c[i][j] == 's')
            {
                s_y = i;
                s_x = j;
            }
            if (c[i][j] == 'g')
            {
                g_y = i;
                g_x = j;
            }
        }
    }
    string out = "No";
    vector<vector<bool> > checked(H, vector<bool>(W, false));
    if (reachable(c, checked))
    {
        out = "Yes";
    }
    cout << out << endl;
}