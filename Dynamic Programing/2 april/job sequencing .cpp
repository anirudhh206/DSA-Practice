#include <bits/stdc++.h>
using namespace std;

struct job {
    int id, deadline, profit;
};

bool cmp(job a, job b) {
    return a.profit > b.profit;
}

int main() {
    int n;
    cin >> n;
    vector<job> jobs(n);
    for (int i = 0; i < n; i++) {
        cin >> jobs[i].id >> jobs[i].deadline >> jobs[i].profit;
    }

    sort(jobs.begin(), jobs.end(), cmp);

    int maxDeadline = 0;
    for (auto &job : jobs) {
        maxDeadline = max(maxDeadline, job.deadline);
    }

    vector<int> slot(maxDeadline + 1, -1);
    int count = 0, totalProfit = 0; // fixed variable name

    for (auto &job : jobs) {
        for (int j = job.deadline; j > 0; j--) {
            if (slot[j] == -1) {
                slot[j] = job.id;
                count++;
                totalProfit += job.profit; // consistent usage
                break;
            }
        }
    }

    cout << count << " " << totalProfit;
}
