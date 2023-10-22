#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main(int argc, char** argv) {
    int n;
    cin >> n;
    priority_queue<long, vector<long>, greater<long>> pq;

    for (int i = 0; i < n; i++) {
        long arr;
        cin >> arr;
        pq.push(arr);
    }
    long long cost = 0;
    while (pq.size() > 1) {
        long arr1 = pq.top();
        pq.pop();
        long arr2 = pq.top();
        pq.pop();
        long new_arr = arr1 + arr2;
        pq.push(new_arr);
        cost += new_arr;
    }
    cout << cost;
}