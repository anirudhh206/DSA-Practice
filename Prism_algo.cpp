#include <bits/stdc++.h>
using namespace std;
int main()
{
    int V;
    vin >> V;
    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < V; j++)
        {
            cin >> graph[i][j];
        }
    }
    vector<int> key(V, INT_MAX);
    vector<bool> visited(V, false);
    key[0] = 0;
    int totalcost = 0;
    for (int count = 0; count < V; count++)
    {
    }
}
