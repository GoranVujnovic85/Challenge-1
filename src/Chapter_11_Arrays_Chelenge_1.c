/*
 ============================================================================
 Name        : Chapter_11_Arrays_Chelenge_1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Challenge 1
               Tasks:
              •	Declare 20 element integer array named rnd_arr.
              •	Write function to initialize that array to random integer values in range 0-100.
              •	Write a function that will calculate mean value of 20 element sized integer array.
              •	Declare another 20 element integer array named sorted_arr.
              •	Write a function that will fill sorted_arr with sorted values from rnd_arr.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define SIZE 20


// Function to initialize array with random integer values in range 0-100
void initializeRandomArray(int arr[])
{
    for (int i = 0; i < SIZE; i++)
    {
        arr[i] = rand() % 101; // Generates random number between 0 and 100
    }
}

// Function to calculate mean value of an integer array
float calculateMean(int arr[])
{
    float sum = 0;
    for (int i = 0; i < SIZE; i++)
    {
        sum += arr[i];
    }
    return sum / SIZE;
}

// Function to sort an integer array in ascending order
void sortArray(int arr[])
{
    for (int i = 0; i < SIZE - 1; i++)
    {
        for (int j = 0; j < SIZE - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // Swap elements if they are in the wrong order
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int rnd_arr[SIZE];
    int sorted_arr[SIZE];

    // Initialize rnd_arr with random values
    initializeRandomArray(rnd_arr);

    // Print rnd_arr
    printf("Random Array:\n");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ", rnd_arr[i]);
    }
    printf("\n");

    // Calculate and print the mean of rnd_arr
    printf("Mean of Random Array: %.2f\n", calculateMean(rnd_arr));

    // Sort rnd_arr and store in sorted_arr
    for (int i = 0; i < SIZE; i++)
    {
        sorted_arr[i] = rnd_arr[i];
    }
    sortArray(sorted_arr);

    // Print sorted_arr
    printf("Sorted Array:\n");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ", sorted_arr[i]);
    }
    printf("\n");

    return 0;
}

