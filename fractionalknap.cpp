#include <bits/stdc++.h>
using namespace std;

struct Item
{
    int value,
        int weight,
};

bool cmp(Item a, Item b)
{
    double x1 = (double)a.value / a.weight;
    double x2 = (double)b.value / b.weight;
    return x1 > x2;
}

double fractional_knapsack(int W, vector<Item> &item)
{
    sort(item.begin(), item.end(), cmp);
    double totalValue = 0.0;
    for (auto &item : items)
    {
        if (W >= item.weight)
        {
            W -= item.weight;
            totalValue += item.value;
        }
    }
    return totalValue;
}

int main()
{
    int n, W;
    cin >> n >> W;
    vector<Item> items(n);
    for (int i = 0; i < n; i++)
    {
        cin >> items[i].value >> items[i].weight;
    }
    cout << fixed << setprecision(2) << fractional_knapsack(W, items) << endl;
}
