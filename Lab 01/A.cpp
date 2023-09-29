#include <iostream>
#include <deque>
using namespace std;
int main(){
    int n;
    cin >> n;
    deque <int> d;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        while(a > 0){
            d.push_front(a);
            int z = a;
            while(z > 0){
                int c = d.back();
                d.pop_back();
                d.push_front(c);
                z--;
            }
            a--;
        }
    
    while(!d.empty()){
        cout << d.front() << " ";
        d.pop_front();
    }
    cout << endl;
    }
}