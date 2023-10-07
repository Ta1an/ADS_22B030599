#include <iostream>
#include <vector>
using namespace std;

pair<int, int> BinarySearch(vector<vector<int>> &array, int row, int column, int value){
    for(int index = 0; index < row; index++){
        int left = 0;
        int right = column - 1;
        while(left <= right){
            int middle = left + (right - left)/2;
            if(array[index][middle] == value){
                return {index, middle};
            }
            if(index % 2 == 0){
                if(array[index][middle] < value){
                right = middle - 1;
                }
            else{
                left = middle + 1;
                }
            }
            else{
                if(array[index][middle] < value){
                  left = middle + 1;  
                }
                else{
                    right = middle - 1;
                }
            }
        }
    }
    return {-1, -1};
}
int main()
{
    int n;
    cin >> n;
    vector<int>v1;
    for(int i = 0; i < n; i++){
        int k;
        cin >> k;
        v1.push_back(k);
    }
    int m, k;
    cin >> m >> k;
    vector<vector<int>> v2(m, vector<int>(k));
    for(int i = 0; i < m; i++){
        for(int j = 0; j < k; j++){
            cin >> v2[i][j];
        }
    }
    pair<int, int>result;
    for(int i = 0; i < n; i++){
        result = BinarySearch(v2, m, k, v1[i]);
        if(result.first == -1 && result.second == -1){
            cout << -1 << endl;
        }
        else{
            cout << result.first << " " << result.second << endl;
        }
    }

}