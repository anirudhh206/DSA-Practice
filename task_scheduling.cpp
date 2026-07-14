#include <bits/stdc++.h>
using namespace std;
int minimum_round(vector<int> &tasks)
{
    unordered_map(int, int) freq;
    for (int task : tasks)
    {
        freq[task]++;
    }
    int rounds = 0;
    for (auto it : freq)
    {
        int count = it.second;
        rounds += count / 3;
        if (count % 3 == 1)
        {
            rounds += 1;
        }
        else if (count % 3 == 2)
        {
            rounds += 1;
        }
    }
    return rounds;
}

int main()
{
    int n;
    cin >> n;

    vector<int> tasks(n);

    for (int i = 0; i < n; i++)
    {
        cin >> tasks[i];
    }

    cout << minimumRounds(tasks);

    return 0;
}
