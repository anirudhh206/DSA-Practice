#include <bits/stdc++.h>
using namespace std;

struct Item
{
    int value,
        int weight,
};
bool cmp(Item a, Item b)
{
    double r1 = (double)a.value / a.weight;
    double r2 = (double)b.value / b.weight;
    return r1 > r2;
}

double fractionalknapsack(int W, vector<Item> &items)
{
    sort(items.begin(), items.end(), cmp);
    double totalValue = 0.0;
    for (auto &item : items)
    {
        if (W >= item.weight)
        {
            W -= item.weight;
            totalValue += item.value;
        }
        else
        {
            totalValue += item.value * ((double)W / item.weight);
            break;
        }
    }
    return totalValue;
}

int main()
{
    int n, W;
    cin >> n >> W;
    vector<Item> items(n);
    vector<int> weights(n), values(n);
    for (int i = 0; i < n; i++)
    {
        cin >> items[i].value >> items[i].weight;
    }
    cout << fixed << setprecision(2) << fractionalknapsack(W, items) << endl;
}
