#include <cstdlib>
#include <iostream>

void insertionSort(int * arr, int length) {
    int i, j, n;

    for(i = 1; i < length; i++) {
        n = arr[i];
        j = i;

        while(n < arr[j-1] && j > 0) {
            arr[j] = arr[j-1];
            j--;
        }

        arr[j] = n;
    }
}

int main() {
    int i, j, n;
    int arr[10] = {0, 3, 5, 4, 6, 2, 9, 1, 8, 7};

    insertionSort(arr, 10);

    for(i = 0; i < 10; i++) {
        std::cout << arr[i] << " ";
    }

    std::cout << std::endl;

    return 0;
}
