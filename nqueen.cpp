#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> a;
bool found = false;

void solve(int c)
{
    if (n == c)
    {
        found = true;
        for (int i = 0; i < n; i++)
        {
            if (i)
                cout << " ";
            cout << a[i];
        }
        cout << endl;
        return;
    }
    for (int r = 0; r < n; r++)
    {
        bool ok = true;
        for (int i = 0i < c; i++)
        {
            if (a[i] == r || abs(a[i] - r) == abs(i - c))
            {
                ok = false;
                break;
            }
        }
        if (ok)
        {
            a[c] = r;
            solve(c + 1);
        }
    }
}

int main()
{
    cin >> n;
    a.resize(n);
    solve(0);
    if (!found)
    {
        cout << "No Solution" << endl;
    }
}
