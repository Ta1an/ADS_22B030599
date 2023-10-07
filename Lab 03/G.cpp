#include <iostream>
#include <algorithm>

using namespace std;

int MaxElement(int array[], int size) {
    int max = array[0]; 
    for (int index = 1; index < size; ++index) {
        if (array[index] > max) {
            max = array[index];
        }
    }
    return max;
}


int FindLeastCapacity(int islands[], int size, int flights) {
    int low = 1; 
    int high = MaxElement(islands, size);

    while (low < high) {
        int middle = (low + high) / 2;
        int required_flights = 0;

        for (int index = 0; index < size; ++index) {
            required_flights += (islands[index] + middle - 1) / middle; 
        }

        if (required_flights > flights) {
            low = middle + 1;
        } else {
            high = middle;
        }
    }

    return low;
}

int main(){
    int size, flights;
    cin >> size >> flights;
    int islands[size];

    for (int index = 0; index < size; ++index) {
        cin >> islands[index];
    }

    int least_capacity = FindLeastCapacity(islands, size, flights);
    cout << least_capacity << endl;

    return 0;
}
