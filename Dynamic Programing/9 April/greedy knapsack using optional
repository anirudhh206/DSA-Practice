#include <bits/stdc++.h>
using namespace std;

struct Item {
    int weight, value;
    double ratio;
};

// Custom comparator
bool cmp(Item a, Item b) {
    if (a.ratio == b.ratio)
        return a.weight > b.weight; // prefer heavier item (fewer items)
    return a.ratio > b.ratio;
}

pair<double, int> fractionalKnapsack(vector<Item>& items, int W) {
    int n = items.size();

    // Step 1: compute ratio
    for (int i = 0; i < n; i++) {
        items[i].ratio = (double)items[i].value / items[i].weight;
    }

    // Step 2: sort
    sort(items.begin(), items.end(), cmp);

    double totalValue = 0.0;
    int currentWeight = 0;
    int itemCount = 0;

    // Step 3: pick items
    for (int i = 0; i < n; i++) {
        if (currentWeight + items[i].weight <= W) {
            // take full item
            currentWeight += items[i].weight;
            totalValue += items[i].value;
            itemCount++;
        } else {
            // take fraction (only once)
            int remaining = W - currentWeight;
            if (remaining > 0) {
                totalValue += items[i].ratio * remaining;
                itemCount++;
            }
            break;
        }
    }

    return {totalValue, itemCount};
}

int main() {
    int n, W;
    cin >> n >> W;

    vector<Item> items(n);

    for (int i = 0; i < n; i++) {
        cin >> items[i].weight >> items[i].value;
    }

    auto result = fractionalKnapsack(items, W);

    cout << fixed << setprecision(2) << result.first << " " << result.second;

    return 0;
}