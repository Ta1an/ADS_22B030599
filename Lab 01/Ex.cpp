#include <iostream>
#include <deque>
using namespace std;
int main(){
    deque<int>r;
    for(int i = 0; i < 5; i++){
        int k;
        cin >> k;
        r.push_back(k);
    }
    while(!r.empty()){
        cout << r.front() << " ";
        r.pop_front();
    }
}