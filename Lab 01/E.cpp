#include <iostream>
#include <deque>
using namespace std;
int main(){
    int m = 0;
    deque<int> b;
    deque<int> n;
    for(int i = 0; i < 5; i++){
        int t;
        cin >> t;
        b.push_back(t);
    }
    for(int i = 0; i < 5; i++){
        int k;
        cin >> k;
        n.push_back(k);
    }
    while(!b.empty() && !n.empty()){
        int b1 = b.front();
        int n1 = n.front();
        b.pop_front();
        n.pop_front();
        if((b1 == 0 && n1 == 9) || (b1 == 9 && n1 == 0)){
            if(b1 == 0){
                b.push_back(b1);
                b.push_back(n1);
            }else{
                n.push_back(b1);
                n.push_back(n1);
            }
        }
        else {
            if(b1 > n1){
                b.push_back(b1);
                b.push_back(n1);
            }
            else {
                n.push_back(b1);
                n.push_back(n1);
            }
        }
        m++;
    }
    if(b.empty()){
        cout << "Nursik " << m;
    }else{
        cout << "Boris " << m;
    }
}