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
        callMergeSort(length[i]);
        t = clock() - t;
        double time_taken = ((double)t)/CLOCKS_PER_SEC;
        printf("Sorting %d items took %f seconds\n", length[i], time_taken);
    }

    printf("\n\nFor algo Merge Sort");
    for(int i=0;i<SIZE;i++){
        saveMergeSort(length[i]);
    }

    return 0;
}

void callMergeSort(int length){
    switch(length){
        case 10:
            mergeSort(10, ten);
            break;
        case 100:
            mergeSort(100, hundered);
            break;
        case 500:
            mergeSort(500, fiveHundered);
            break;
        case 1000:
            mergeSort(1000, thousand);
            break;
        case 10000:
            mergeSort(10000, tenThousand);
            break;
        default:
            printf("Check your input length and try again later :)");
            break;
        
    }
    return;
}

void mergeSort(int length, int array[]){
    // TODO: Implement Merge Sort
    return;
}

void saveMergeSort(int length){
    switch(length){
        case 10:
            saveOutput(10, ten, "mergeSortTen.txt");
            break;
        case 100:
            saveOutput(100, hundered, "mergeSortHundered.txt");
            break;
        case 500:
            saveOutput(500, fiveHundered, "mergeSortFiveHundered.txt");
            break;
        case 1000:
            saveOutput(1000, thousand, "mergeSortThousand.txt");
            break;
        case 10000:
            saveOutput(10000, tenThousand, "mergeSortTenThousand.txt");
            break;
        default:
            printf("Check your input length and try again later :)");
            break;
    }

    return;
}
