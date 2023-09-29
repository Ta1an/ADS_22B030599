#include <bits/stdc++.h>
using namespace std;
int main(){
    string s,t;
    cin >> s >> t;
    stack<char>y, z;
    for(int i = 0; i < s.size(); i++){
        if(s[i] != '#'){
            y.push(s[i]);
        }
        else if(s[i] == '#'){
            y.pop();
        }
    }
    for(int i = 0; i < t.size(); i++){
        if(t[i] != '#'){
            z.push(t[i]);
        }
        else if(t[i] == '#'){
            z.pop();
        }
    }
    string s1, t1;
    while(!y.empty()){
        s1 += y.top();
        y.pop();
    }
    while(!z.empty()){
        t1 += z.top();
        z.pop();
    }
    if( s1 == t1){
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}
