#include <iostream>
#include <queue>
#include<vector>
#include<string>
using namespace std;
int main() {
 int q, k;
 cin >> q >> k;
 priority_queue<long, vector<long>, greater<long>> pq;
 long long sum = 0;
 while(q > 0){
  string s;
  cin >> s;
  if(s == "print"){
   cout << sum << endl;
  }
  if(s == "insert"){
   long num;
   cin >> num;
   if(pq.size() < k){
    pq.push(num);
    sum += num;
   }
   
   else if(pq.top() < num){
    long temp = pq.top();
    sum -= temp;
    sum += num;
    pq.pop();
    pq.push(num);
   }
  }
  q--;
 }
}