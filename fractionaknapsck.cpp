#include <bits/stdc++.h>
using namespace std;

struct Item
{
    int value, weight;
};

bool compare(Item a, Item b)
{
    int x1 = (double)a.value / a.weight;
    int x2 = (double)b.value / b.weight;
    return x1 > x2;
}

double fractional_Knapsack(int W, vector<Item> &items)
{
    sort(items.begin(), items.end(), compare);
    double total_value = 0;
    for (auto &item : items)
    {
        if (W >= item.weight)
        {
            total_value += item.value;
            W -= item.weight
        }
        else
        {
            total_value += (double)item.value * W / item.weight;
            break;
        }
    }
    return total_value;
}
int main()
{
    int n, W;
    cin >> n >> W;
    vector<Item> items(n);
    for (int i = 0; i < n; i++)
    {
        cin >> item[i].value, item[i].weight;
    }
    cout << fixed << setprecision(6) << fractional_Knapsack(W, items);
}
