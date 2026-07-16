#include <bits/stdc++.h>
using namespace std;

struct job
{
    int id, deadline, profit;
};
bool compare(job a, job b)
{
    return a.profit > b.profit;
}
int main()
{
    int n;
    cin >> n;
    vector<job> job;
    for (int i = 0; i < n; i++)
    {
        cin >> job[i].id >> job.[i].deadline >> job[i].profit;
    }
    sort(job.begin(), job.end(), compare);
    int maxdeadline = 0;
    for (auto &job : job)
    {
        maxdeadline = max(maxdeadline, job.deadline);
    }
    int count = 0;
    vector<int> slot(maxdeadline + 1, -1);
    for (auto &job : job)
    {
        for (int i = job.deadline; i > 0; i--)
        {
            if (slot[i] == 1)
            {
                slot[j] = job.id;
                count++;
                totalprofit += job.profit;
                break;
            }
        }
    }
    cout << count << " " << totalprofit
}
