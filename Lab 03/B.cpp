#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

bool check(vector<long long> vector, int k, long long x) {
    int blocks = 1;
    long long current_sum = 0;
    for (int index = 0; index < vector.size(); index++) {
        if (current_sum + vector[index] > x) {
            blocks++;
            current_sum = 0;
        }
        current_sum += vector[index];
    }
    return blocks <= k;
}

int main() {
    int houses, blocks;
    cin >> houses >> blocks;
    vector<long long> vector(houses);
    
    for (int index = 0; index < houses; index++) {
        cin >> vector[index];
    }

    long long left = *max_element(vector.begin(), vector.end());
    long long right = accumulate(vector.begin(), vector.end(), 0LL); 
    while (left < right){
        long long middle = (left + right) / 2;
        if (check(vector, blocks, middle)) {
            right = middle;
        } else {
            left = middle + 1;
        }
    }

    cout << left << endl;

    return 0;
}