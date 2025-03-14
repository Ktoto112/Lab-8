#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    const int SIZE = 20;
    int arr[SIZE];
    srand(time(0));


    for (int i = 0; i < SIZE; i++) {
        arr[i] = (rand() % 101) - 50;
    }


    cout << "Масив: ";
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;


    int signChanges = 0;
    for (int i = 1; i < SIZE; i++) {
        if ((arr[i] > 0 && arr[i - 1] < 0) || (arr[i] < 0 && arr[i - 1] > 0)) {
            signChanges++;
        }
    }

    cout << "Кількість змін знаку: " << signChanges << endl;

    return 0;
}