//
// created by Darya Ignatenko 7th March 2024
//

//is the entry point of the program. It checks the number of command-line arguments and calls the functions from massive.h to solve the problem.

#include <stdio.h>
#include <stdlib.h>
#include "massive.h"

int main(int argc, char* argv[]) {
    // Check if the number of command-line arguments is as expected
    if (argc != 1) {
        printf("Incorrect number of command-line arguments.\n");
        return 1;
    }

    // Get the size of the arrays from the command-line arguments
    int size = atoi(argv[1]);

    // Create arrays
    int* a = create_array(size);
    int* b = create_array(size);

    // Fill the arrays with random numbers
    fill_array(a, size);
    fill_array(b, size);

    // Print the sequences
    printf("First sequence:\n");
    print_array(a, size);

    printf("Second sequence:\n");
    print_array(b, size);

    // Call the functions to count even and odd numbers
    int even_count_a = count_even(a, size);
    int odd_count_b = count_odd(b, size);

    // Print the results
    printf("Number of even numbers in the first sequence: %d\n", even_count_a);
    printf("Number of odd numbers in the second sequence: %d\n", odd_count_b);

    // Free the allocated memory
    free(a);
    free(b);

    return 0;
}

