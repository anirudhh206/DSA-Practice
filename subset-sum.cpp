#include <bits/stdc++.h>
using namespace std;

int n, target;
vector<int> arr;
bool found = false;

void backtrack(int index, vector<int> &current_subset, int current_sum)
{

    // case 1 the basic case when the current sum is equal to the target
    if (current_sum == target)
    {
        for (int i = 0; i < current_subset.size(); i++)
        {
            cout << current_subset[i];
            if (i != current_subset.size() - 1)
                cout << " ";
        }
        cout << endl;
        found = true;
        return;
    }
    if (index >= n || current_sum > target)
    {
        return;
    }

    // case 2 include the current element in the subset
    current_sum.push_back(arr[index]);
    backtrack(index + 1, current_subset, current_sum);
    current_sum.pop_back();
    backtrack(index + 1, current_subset, current_sum);
}

int main()
{
    cin >> n >> target;
    arr.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> current_subset;
    backtrack(0, current_subset, 0);
    if (!found)
    {
        cout << "No Solution" << endl;
    }
    return 0;
}
