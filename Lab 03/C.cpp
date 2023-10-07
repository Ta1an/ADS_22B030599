#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int size, queries;
    cin >> size >> queries;
    int array[size];
    for(int index = 0; index < size; index++){
        cin >> array[index];
    }

    int elements[queries][4];
    for(int index = 0; index < queries; index++){
        for(int index1 = 0; index1 < 4; index1++){
            cin >> elements[index][index1];
        }
    }
    int counter = 0;
    vector<int>vector;
    for(int index = 0; index < queries; index++){
        for(int index1 = 0; index1 < size; index1++){
            if(elements[index][0] <= array[index1] && array[index1] <= elements[index][1]){
                counter++;
            }
            else if(elements[index][2] <= array[index1] && array[index1] <= elements[index][3]){
                counter++;
            }
        }
        vector.push_back(counter);
        counter = 0;
    }
    for(int index; index < vector.size(); index++){
        cout << vector[index] << endl;
    }
    return 0;
}