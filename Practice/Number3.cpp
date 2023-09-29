#include <bits/stdc++.h>
using namespace std;

void BubbleSort(int size, int arr[]){
    int i, j;
    bool flag;
    for (i = 0; i < size - 1; i++) {
        flag = false;
        for (j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                flag = true;
            }
        }
        if(flag == false){
            break;
        }
    }
}
int BinarySearch(int arr[], int right, int left, int value){
    while(left <= right){
        int mid = left + (right - left)/2;

        if(arr[mid] == value){
            return mid;
        }
        if(arr[mid] < value){
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
    }
    return -1;
}

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    BubbleSort(n, a);
    int value;
    cin >> value;
    int result = BinarySearch(a, n - 1, 0, value);
    if(result == -1){
        cout << "Element is not present in this array";
    }
    else {
        cout << result;
    }
    return 0;
}