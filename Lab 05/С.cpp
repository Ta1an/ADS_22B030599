#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
    int n, x;
    cin >> n >> x;

    priority_queue<long, vector<long>> pq;

    for (long i = 0; i < n; i++) {
        long num;
        cin >> num;
        pq.push(num);
    }

    long long money = 0;

    while (x > 0) {
        long temp = pq.top();
        money += temp;
        temp--;
        pq.pop();
        pq.push(temp);
        x--;
    }

    cout << money;
}