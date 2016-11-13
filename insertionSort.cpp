#include <cstdlib>
#include <iostream>

/* ----------------------- insertionSort ----------------------- */
/*  Given an array and its length this algorithm sorts the 
    elements of the array in nonincreasing order.
    
    Input variables:
        arr   : array of integers
        length: number of elements in array arr

    Features: This implementation has time complexity O(length^2)
    and requires O(1) additional memory.                         */

void insertionSort(int * arr, int length) {
    int i, j, n;

    for(i = 1; i < length; i++) {
        n = arr[i]; // set n equal to ith element of array
        j = i;      // set j equal to current index

        /* check if n is less than previous elements in sorted
           subarray arr[0 : i - 1]                               */
        while(n < arr[j-1] && j > 0) {
            arr[j] = arr[j-1];  // move arr[j-1] to arr[j]
            j--;    // decrease index
        }

        arr[j] = n; // store n in jth component of arr
    }
}


/* ----------------------- arrayPrint ----------------------- */
/*  Given an array and its length this function prints the 
    elements of the array.                                    */

void arrayPrint(int *arr, int length) {
    int i;

    for(i = 0; i < length; i++) {
        std::cout << " " << arr[i]; // print ith entry in array
    }

    std::cout << std::endl;         // endline after all entries printed
}


/* -------------------------- main -------------------------- */
/*  Main routine for experimenting with mergeSort. Try it 
    with n = one billion for fun.                             */

int main () {
    int i, n;

    std::cout << "Enter the size of the array you would like to sort: ";
    std::cin >> n;

    int *arr = new int[n];  // create array of size n

    for(i = 0; i < n; i++) {
        arr[i] = rand() % 1000 + 1; // store random number arr[i]
    }

    /* print elements in arr before applying mergeSort */
    std::cout << "Array prior to insertion sort: " << std::endl;
    arrayPrint(arr, n);
    std::cout << std::endl;

    insertionSort(arr, n);  // execute insertionSort

    /* print elements in arr after applying mergeSort */
    std::cout << "Array after insertion sort: " << std::endl;
    arrayPrint(arr, n);

    delete[] arr;           // free memory
    return 0;               // end main
}
