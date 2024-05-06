#include <stdio.h>
#include <stdlib.h> // Library needed for using malloc and free

int main() {
    int lunghezza = 0; // Variable to store the length of the array
    int count = 0; // Counter to keep track of the number of elements entered
    double *array; // Pointer for the array
    double somma = 0, media = 0, max, min; // Variables for summing, calculating the mean, finding the maximum and minimum

    // Ask the user for the length of the array
    printf("Enter the length of the array: ");
    scanf("%d", &lunghezza);

    // Dynamically allocate memory for the array using malloc
    array = (double *)malloc(lunghezza * sizeof(double)); // malloc is used to dynamically allocate memory--> serve per allocare memoria

    // Check if memory allocation was successful
    if (array == NULL) { // If array is NULL, memory allocation has failed
        printf("Error allocating memory.");
        return 1; // Exit the program with an error code
    }

    // Loop to prompt the user to enter numbers into the array
    for (int i = 0; i < lunghezza; i++) {
        count++; // Increment the counter
        printf("Enter the %d number: ", count);
        scanf("%lf", array + i); // Use pointer arithmetic to access array elements
        somma += *(array + i); // Add the read value to the total sum
    }

    // Calculate the mean
    media = somma / lunghezza;

    // Initialize max and min with the first element of the array
    max = *array;
    min = *array;

    // Loop to find the maximum and minimum
    for (int i = 1; i < lunghezza; i++) {
        if (*(array + i) > max) { // If the current element is greater than the maximum
            max = *(array + i); // Assign the current value to max
        }
        if (*(array + i) < min) { // If the current element is less than the minimum
            min = *(array + i); // Assign the current value to min
        }
    }

    // Print the mean, maximum, and minimum
    printf("The mean is: %lf\n", media);
    printf("The maximum number is: %lf\n", max);
    printf("The minimum number is: %lf\n", min);

    // Free dynamically allocated memory
    free(array);

    return 0; // Return 0 to indicate successful program execution
}

