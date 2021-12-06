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
        callInsertionSort(length[i]);
        t = clock() - t;
        double time_taken = ((double)t)/CLOCKS_PER_SEC;
        printf("Sorting %d items took %f seconds\n", length[i], time_taken);
    }

    printf("\n\nFor algo Insertion Sort");
    for(int i=0;i<SIZE;i++){
        saveInsertionSort(length[i]);
    }

    return 0;
}

void insertionSort(int length, int array[]){
    // Run the insertion sort algorithm from 1 to length
    for(int i=1; i<length; i++){
        // Run algorithm from i to 0
        for(int j=i; j>0; j--){
            // Compare the current value with the previous value
            if(array[j] < array[j-1]){
                // Swap the values if the current value is smaller than the previous value
                int temp;
                temp = array[j];
                array[j] = array[j-1];
                array[j-1] = temp;
            }
        }
    }
    return;
}

void callInsertionSort(int length){
    switch(length){
        case 10:
            insertionSort(length, ten);
            break;
        case 100:
            insertionSort(length, hundered);
            break;
        case 500:
            insertionSort(length, fiveHundered);
            break;
        case 1000:
            insertionSort(length, thousand);
            break;
        case 10000:
            insertionSort(length, tenThousand);
            break;
        default:
            printf("\nPlease reconsider the length!!");
    }

    return;
}

void saveInsertionSort(int length){
    switch(length){
        case 10:
            saveOutput(10, ten, "insertionSortTen.txt");
            break;
        case 100:
            saveOutput(100, hundered, "insertionSortHundered.txt");
            break;
        case 500:
            saveOutput(500, fiveHundered, "insertionSortFiveHundered.txt");
            break;
        case 1000:
            saveOutput(1000, thousand, "insertionSortThousand.txt");
            break;
        case 10000:
            saveOutput(10000, tenThousand, "insertionSortTenThousand.txt");
            break;
        default:
            printf("\nPlease reconsider the length!!");
    }

    return;
}
