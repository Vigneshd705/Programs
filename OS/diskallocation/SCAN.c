#include <stdio.h>
#include <stdlib.h>
//SCAN - ALG.

// Size of the disk
const int size_disk = 200;

// Function to sort an array of integers
void sort(int arr[], int N) {
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// C-SCAN algorithm
void c_scan_algorithm(int arr[], int N, int initial) {
    // Sort the initial array of requests
    sort(arr, N);

    // Stores the order in which requests are processed
    int order[N];
    int order_size = 0;

    // Stores the total head movement
    int total = 0;

    /*
        Extract the first request with a value greater
        than or equal to the head and calculate the requests
    */
    int last = initial;
    for (int i = 0; i < N; i++) {
        if (arr[i] >= initial) {
            total += (arr[i] - last);
            order[order_size++] = arr[i];
            last = arr[i];
        }
    }

    // Reaching the end of the disk
    total += (size_disk - last - 1);
    order[order_size++] = size_disk - 1;

    // Reaching the starting of the disk
    total += (size_disk - 1 - 0);
    order[order_size++] = 0;

    /*
        Extract the requests with a value less
        than or equal to the head and calculate the requests
    */
    last = 0;
    for (int i = 0; i < N; i++) {
        if (arr[i] < initial) {
            total += (arr[i] - last);
            order[order_size++] = arr[i];
            last = arr[i];
        }
        // Already processed requests
        else {
            break;
        }
    }

    // Printing the order of requests
    printf("The order in which requests are processed\n");
    for (int i = 0; i < order_size; i++) {
        printf("%d ", order[i]);
    }
    printf("\n\n");

    // Printing the total head movement
    printf("Total head movement = %d\n", total);
}
int main() {
    // Total number of requests
    int N = 8;
    // Request Array
    int arr[] = {98, 183, 37, 122, 14, 124, 65, 67};
    // Initial position of the head pointer
    int initial = 53;
    // Calling the function
    c_scan_algorithm(arr, N, initial);
    return 0;
}
