#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
 int n, x;
 cin >> n >> x;
 
 priority_queue<long, vector<long>, greater<long> >pq;
 
 for(long i = 0; i < n; i++){
  long num;
  cin >> num;
  pq.push(num);
 }
 long dleast = pq.top();
 long counter = 0;
 while(dleast < x){
  if(pq.size() == 0){
   cout << -1;
   return 0;
  }
  dleast = pq.top();
  pq.pop();
  if(pq.size() == 0){
   cout << -1;
   return 0;
  }
  long dleast2 = pq.top();
  pq.pop();
  long long newmix = dleast + 2*dleast2;
  pq.push(newmix);
  counter++;
 }
 if(counter == 0)cout << 0;
 else cout << counter - 1;
}