#include <stdio.h>


void merge(int arrya[], int left, int middle, int right);

void sort(int array[], int left, int right);

int main(void) {
    int array[] = {5, 2, 7, 4, 1, 6, 3, 0};
    int left, middle, right;

    left = 0;
    right = 7;

    sort(array, left, right);

    for(int i = 0; i < 8; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void merge(int array[], int left, int middle, int right) {
    int i, j, k;
    int lsize = middle - left + 1;
    int rsize = right - middle;
    int LEFT[lsize], RIGHT[rsize];

    for(i = 0; i < lsize; i++) {
        LEFT[i] = array[left + i];
    }
    for(i = 0; i < rsize; i++) {
        RIGHT[i] = array[middle + i + 1];
    }

    i = 0;
    j = 0;
    k = left;
    while (i < lsize && j < rsize) {
        if (LEFT[i] > RIGHT[j]) {
            array[k] = RIGHT[j];
            j++;
        }
        else {
            array[k] = LEFT[i];
            i++;
        }
        k++;
    }

    while (i < lsize) {
        array[k] = LEFT[i];
        i++;
        k++;
    }

    while (j < rsize) {
        array[k] = RIGHT[j];
        j++;
        k++;
    }

}

void sort(int array[], int left, int right) {
    if (left < right) {
        int middle = (left + right) / 2;

        sort(array, left, middle);
        sort(array, middle + 1, right);

        merge(array, left, middle, right);
    }
}