#include <time.h>
#include <stdio.h>
#include <conio.h>
#include <stdbool.h>
#include "../Data/data.h"
#include "../outputSaver.h"

#define SIZE 5

int main(){
    int length[SIZE] = {10, 100, 500, 1000, 10000};
    clock_t t;

    for(int i=0;i<SIZE;i++){
        t=clock();
        callQuickSort(length[i]);
        t = clock() - t;
        double time_taken = ((double)t)/CLOCKS_PER_SEC;
        printf("Sorting %d items took %f seconds\n", length[i], time_taken);
    }

    printf("\n\nFor algo Quick Sort");
    for(int i=0;i<SIZE;i++){
        saveQuickSort(length[i]);
    }

    return 0;
}

void callQuickSort(int length){
    switch(length){
        case 10:
            quickSort(10, ten);
            break;
        case 100:
            quickSort(100, hundered);
            break;
        case 500:
            quickSort(500, fiveHundered);
            break;
        case 1000:
            quickSort(1000, thousand);
            break;
        case 10000:
            quickSort(10000, tenThousand);
            break;
        default:
            printf("Check your input length and try again later :)");
            break;
        
    }
    return;
}

void quickSort(int length, int array[]){
    // TODO: Implement Quick Sort
    void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}

// function to find the partition position
int partition(int array[], int low, int high) {
  
  // select the rightmost element as pivot
  int pivot = array[high];
  
  // pointer for greater element
  int i = (low - 1);

  // traverse each element of the array
  // compare them with the pivot
  for (int j = low; j < high; j++) {
    if (array[j] <= pivot) {
        
      // if element smaller than pivot is found
      // swap it with the greater element pointed by i
      i++;
      
      // swap element at i with element at j
      swap(&array[i], &array[j]);
    }
  }

  // swap the pivot element with the greater element at i
  swap(&array[i + 1], &array[high]);
  
  // return the partition point
  return (i + 1);
}

void quickSort(int array[], int low, int high) {
  if (low < high) {
    
    // find the pivot element such that
    // elements smaller than pivot are on left of pivot
    // elements greater than pivot are on right of pivot
    int pi = partition(array, low, high);
    
    // recursive call on the left of pivot
    quickSort(array, low, pi - 1);
    
    // recursive call on the right of pivot
    quickSort(array, pi + 1, high);
  }
}
    return;
}

void saveQuickSort(int length){
    switch(length){
        case 10:
            saveOutput(10, ten, "quickSortTen.txt");
            break;
        case 100:
            saveOutput(100, hundered, "quickSortHundered.txt");
            break;
        case 500:
            saveOutput(500, fiveHundered, "quickSortFiveHundered.txt");
            break;
        case 1000:
            saveOutput(1000, thousand, "quickSortThousand.txt");
            break;
        case 10000:
            saveOutput(10000, tenThousand, "quickSortTenThousand.txt");
            break;
        default:
            printf("Check your input length and try again later :)");
            break;
    }

    return;
}
