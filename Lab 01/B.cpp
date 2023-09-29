#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    stack<int>t;
    t.push(-1);
    for(int i = 0; i < n; i++){
        int k;
        cin >> k;
        while(t.top()!= -1 && t.top() > k){
            t.pop();
        }
        cout << t.top() << " ";
        t.push(k);
    }
}