#include <iostream>
using namespace std;
int BinarySearch(int arr[], int left, int right, int value){
    while(left <= right){
        int middle = left + (right - left)/2;

        if(arr[middle] == value){
            return middle;
        }
        if(arr[middle] < value){
            left = middle + 1;
        }
        else{
            right = middle - 1;
        }
    }
    return -1;
}
int main(){
    int size;
    cin >> size;
    int sorted_array[size];
    for(int index = 0; index < size; index++){
        cin >> sorted_array[index];
    }
    int value;
    cin >> value;
    int result = BinarySearch(sorted_array, 0, size - 1, value);
    (result == -1) ? cout << "No" : cout << "Yes";
}