#include <bits/stdc++.h>
using namespace std;
int main(){
    string t;
    cin >> t;
    deque<char>r;
    r.push_front(t[0]);
    for(int i = 1; i < t.length(); i++){
        if(t[i] != r.front()){
            r.push_front(t[i]);
        }
        else if(t[i] == r.front()){
            r.pop_front();
        }
    }
    if(r.empty()){
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}