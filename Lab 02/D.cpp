//ListModes
#include <bits/stdc++.h>
using namespace std;
struct Node {
    int val;
    int freq;
    Node(int val, int freq) : val(val), freq(freq){}
};
int main(){
    int n;
    cin >> n;
    unordered_map <int, int> freqcnt;
    list <Node> elements;
    for(int i=0;i<n;i++){
        int num;
        cin >> num;
        freqcnt[num]++;
    }
    for(const auto& pair : freqcnt){
        elements.push_back(Node(pair.first, pair.second));
    }
    elements.sort([](const Node& a, const Node& b){
        if(a.freq != b.freq){
            return a.freq > b.freq;
        }else{
            return a.val < b.val;
        }
    });
    int maxfreq = elements.front().freq;
    vector <int> modes;
    for(const Node& element : elements){
        if(element.freq == maxfreq){
            modes.push_back(element.val);
        }else{
            break;
        }
    }
    for(int i=modes.size() - 1;i>=0;i--){
        cout << modes[i] << " ";
    }
    return 0;
}