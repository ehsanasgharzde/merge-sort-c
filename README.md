# Merge Sort Algorithm in C

This C program demonstrates the Merge Sort algorithm, which is used to sort an array of integers in ascending order.

## How the Program Works

1. The program initializes an array of integers and defines variables for the left, middle, and right indices.
2. It calls the `sort` function to sort the entire array.
3. After sorting, the sorted array is printed to the console.

## Sorting Logic

- The `sort` function is a recursive function that divides the array into two halves until individual elements are reached.
- The `merge` function merges two sorted subarrays into a single sorted array.

## Example

For example, with the input array `{5, 2, 7, 4, 1, 6, 3, 0}`, the program will output the sorted array: `0 1 2 3 4 5 6 7`

Merge Sort is an efficient sorting algorithm with a time complexity of O(n log n), making it suitable for large datasets.

Feel free to use and modify this code as needed for your own projects.
