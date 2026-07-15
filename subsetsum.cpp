#include <bits/stdc++.h>
using namespace std;
int n, target;
vector<int> arr;
bool found = false;

void backtrack(vector<int> &current_subset, int current_sum, int index)
{
    if (current_sum == target)
    {
        cout << "{";
        for (int i = 0; i < current_subset.size(); i++)
            a
            {
                cout << current_subset[i];
            }
        found = true;
        return;
    }
    if (current_sum > target || index == n)
    {
        return;
    }
    current_subset.push_back(arr[index]);
    backtrack(index + 1, current_subset, current_sum + arr[index]);
    current_subset.pop();
    backtrack(index + 1, current_subset, current_sum);
}

int main()
{
    cin >> n >> target;
    arr.resize();
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> current_subset;
    backtrack(0, current_subset, 0);
    if (!found)
        cout << "No Solution" << endl;
    return 0;
}
