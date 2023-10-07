#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int findBlock(vector<int>& P, int line) {
    int left = 0;
    int right = P.size() - 1;
    
    while (left < right) {
        int mid = left + (right - left) / 2;
        
        if (P[mid] < line) {
            left = mid + 1;
        } else {
            right = mid;
        }
    }
    
    return left + 1; 
}

int main(){
    int N, M;
    cin >> N >> M;
    
    vector<int> blocks(N);
    vector<int> P(N);
    
    for (int i = 0; i < N; i++) {
        cin >> blocks[i];
        if (i == 0) {
            P[i] = blocks[i];
        } else{
            P[i] = P[i - 1] + blocks[i];
        }
    }
    
    for (int i = 0; i < M; i++) {
        int mistakeLine;
        cin >> mistakeLine;
        int block = findBlock(P, mistakeLine);
        cout << block << endl;
    }
    
    return 0;
}