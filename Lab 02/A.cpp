#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    int offset;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int k;
    cin >> k;
    vector<int>h;
    for(int i = 0; i < n; i++){
        int dif = abs(a[i] - k);
        h.push_back(dif);
    }
    int min = INT_MAX;
    for(int i = 0; i < n; i++){
        if(h[i] < min){
            min = h[i];
            offset = i;
        }
    }
    cout << offset;
}
