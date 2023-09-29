#include<iostream>
using namespace std;
int isPrime(int n){
    if(n == 0 || n == 1){
        return 0;
    }
    for(int i = 2;i<=n/2;i++){
        if(n % i == 0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int n, prime;
    cin >> n;
    int cnt = 0, cnt1 = 0;
    for(int i = 2; i < 100000; i++){
        if(isPrime(i)){
            cnt++;
            if(isPrime(cnt)){
                cnt1++;
                prime = i;
            }
        }
        if(cnt1 == n){
            cout << prime;
            return 0;
        }
    }
}