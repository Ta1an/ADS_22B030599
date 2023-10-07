#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int size;
    cin >> size;

    vector<int>array(size);

    for(int index = 0; index < size; ++index){
        cin >> array[index];
    }

    sort(array.begin(), array.end());

    int rounds;
    cin >> rounds;

    for(int index = 0; index < rounds; ++index){
        int Mark_power;
        cin >> Mark_power;
        int beaten = 0;
        int sum_of_power = 0;

        for (int index1 = 0; index1 < size && Mark_power >= array[index1]; ++index1){
            beaten++;
            sum_of_power+=array[index1];
        }
        cout << beaten << " " << sum_of_power << endl;
    }

    return 0;
}
