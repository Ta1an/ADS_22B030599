#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    priority_queue<long, vector<long>> pq;
    for (int i = 0; i < n; i++) {
        long rock;
        cin >> rock;
        pq.push(rock);
    }
    while (pq.size() > 1) {
        long rock1 = pq.top();
        pq.pop();
        long rock2 = pq.top();
        pq.pop();
        long result = rock1 - rock2;
        if (result != 0) {
            pq.push(result);
        }
    }
    if (pq.size() == 0) {
        cout << 0;
    } else {
        cout << pq.top();
    }
    return 0;
}