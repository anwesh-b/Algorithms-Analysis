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
        callRandomizedQuickSort(length[i]);
        t = clock() - t;
        double time_taken = ((double)t)/CLOCKS_PER_SEC;
        printf("Sorting %d items took %f seconds\n", length[i], time_taken);
    }

    printf("\n\nFor algo Randomized Quick Sort");
    for(int i=0;i<SIZE;i++){
        saveRandomizedQuickSort(length[i]);
    }

    return 0;
}

void callRandomizedQuickSort(int length){
    switch(length){
        case 10:
            randomizedQuickSort(10, ten);
            break;
        case 100:
            randomizedQuickSort(100, hundered);
            break;
        case 500:
            randomizedQuickSort(500, fiveHundered);
            break;
        case 1000:
            randomizedQuickSort(1000, thousand);
            break;
        case 10000:
            randomizedQuickSort(10000, tenThousand);
            break;
        default:
            printf("Check your input length and try again later :)");
            break;
        
    }
    return;
}

void randomizedQuickSort(int length, int array[]){
    // TODO: Implement Randomized Quick Sort
    return;
}

void saveRandomizedQuickSort(int length){
    switch(length){
        case 10:
            saveOutput(10, ten, "randomizedQuickSortTen.txt");
            break;
        case 100:
            saveOutput(100, hundered, "randomizedQuickSortHundered.txt");
            break;
        case 500:
            saveOutput(500, fiveHundered, "randomizedQuickSortFiveHundered.txt");
            break;
        case 1000:
            saveOutput(1000, thousand, "randomizedQuickSortThousand.txt");
            break;
        case 10000:
            saveOutput(10000, tenThousand, "randomizedQuickSortTenThousand.txt");
            break;
        default:
            printf("Check your input length and try again later :)");
            break;
    }

    return;
}
