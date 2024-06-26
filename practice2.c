#include <stdio.h>

// Function to calculate the steel value
int value(int *arr, int length) {
    int steelValue = 0;
    for (int i = 0; i < length; i += 2) {
        steelValue += arr[i];
    }
    return steelValue;
}

int main() {
    int houses[] = {10, 5, 15, 3};
    int length = sizeof(houses) / sizeof(houses[0]); // Calculate the number of elements in the array
    int steelValue = value(houses, length); // Pass the array and its length to the function
    
    printf("Total steel value: %d\n", steelValue);
    return 0;
}
