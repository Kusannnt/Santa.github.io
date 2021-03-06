// Optimized bubble sort in C++

#include <iostream>
using namespace std;

void bubbleSort(int array[], int size) {
  for (int step = 0; step < size - 1; ++step) {
    // Run loops two times: one for walking throught the array
    // and the other for comparison
    int swapped = 0;
    for (int i = 0; i < size - step - 1; ++i) {
      // To sort in descending order, change > to < in this line.
      if (array[i] > array[i + 1]) {

        // Swap if greater is at the rear position
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
        swapped = 1;
      }
    }

    // If there is not swapping in the last swap, then the array is already sorted.
    if (swapped == 0)
      break;
  }
}

// Function to print an array
void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    cout << "  " << array[i];
  }
  cout << "\n";
}