#include <iostream>
#include <deque>
#include <string>
using namespace std;
int main(){
    deque <int> d;
    string str;
    while(getline(cin , str)){
        if(str == "!"){
            break;
        }
        else {
            char chr = str[0];
            if(chr == '+'){
                int a = stoi(str.substr(2));
                d.push_front(a);
            }
            if(chr == '-'){
                int a = stoi(str.substr(2));
                d.push_back(a);
            }
            if(chr == '*'){
                if(d.size() > 1){
                    int sum = d.front() + d.back();
                    d.pop_front();
                    d.pop_back();
                    cout << sum << endl;
                }
                else if(d.size() == 1){
                    cout << d.front() * 2 << endl;
                    d.pop_front();
                }
                else {
                    cout << "error" << endl;
                }
            }
        }
    }
}