//
// created by Darya Ignatenko 7th March 2024
//

// contains the implementation of the functions defined in massive.h. 
// Here, in int* create_array we create arrays
// in void fill_array fill them with random numbers
// functions to count the number of even and odd numbers.
// void print_array is a function to print elements of each of two arrays

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "massive.h"

int* create_array(int size) {
    return (int*)malloc(size * sizeof(int));
}

void fill_array(int* array, int size) {
    srand(time(NULL));

    for (int i = 0; i < size; i++) {
        array[i] = rand() % 777;
    }
}

void fill_array2(int* array, int size) {
    srand(time(NULL)+1);

    for (int i = 0; i < size; i++) {
        array[i] = rand() % 10000;
    }
} 

int is_even(int num) {
    return num % 2 == 0;
}

int count_even(int* array, int size) {
    int count = 0;

    for (int i = 0; i < size; i++) {
        if (is_even(array[i])) {
            count++;
        }
    }

    return count;
}

int count_odd(int* array, int size) {
    int count = 0;

    for (int i = 0; i < size; i++) {
        if (!is_even(array[i])) {
            count++;
        }
    }

    return count;
}

void print_array(int* array, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

