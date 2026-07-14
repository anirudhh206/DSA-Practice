#include <bits/stdc++.h>
using namespace std;
struct job
{
    int id,
        int deadline,
        int profit,
};
bool compare(job a, job b)
{
    return a.profit > b.profit;
}
int main()
{
    int n;
    cin >> n;
    vector<job> jobs(n);
    for (int i = 0; i < n; i++)
    {
        cin >> jobs[i].id >> jobs[i].deadline >> jobs[i].profit;
    }
    int maxdeadline = 0;
    for (auto &job : jobs)
    {
        maxdeadline = max(maxdeadline, job.profit);
    }
    vector<int> slot(maxdeadline + 1, -1);
    int count = 0, tota_profit = 0;
    for (auto &job : jobs)
    {
        for (int i = 0; i < job.deadline; i++)
        {
            if (slot[i] == -1)
            {
                slot[i] = job.id;
                count++;
                total_profit += job.profit;
                break;
            }
        }
    }
    cout << count << " " << total_profit;
}
