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
        callSelectionSort(length[i]);
        t = clock() - t;
        double time_taken = ((double)t)/CLOCKS_PER_SEC;
        printf("Sorting %d items took %f seconds\n", length[i], time_taken);
    }

    printf("\n\nFor algo Selection Sort");
    for(int i=0;i<SIZE;i++){
        saveSelectionSort(length[i]);
    }

    return 0;
}

void selectionSort(int length, int array[]){
    for(int i=0; i<length-1; i++){
        int temp, minPos = i;
        for(int j=i+1; j<length; j++){
            if(array[j] < array[minPos]){
                minPos = j;
            }
        }
        temp = array[minPos];
        array[minPos] = array[i];
        array[i] = temp;
    }

    return;
}

void callSelectionSort(int length){
    switch(length){
        case 10:
            selectionSort(length, ten);
            break;
        case 100:
            selectionSort(length, hundered);
            break;
        case 500:
            selectionSort(length, fiveHundered);
            break;
        case 1000:
            selectionSort(length, thousand);
            break;
        case 10000:
            selectionSort(length, tenThousand);
            break;
        default:
            printf("\nPlease reconsider the length!!");
    }

    return;
}

void saveSelectionSort(int length){
    switch(length){
        case 10:
            saveOutput(10, ten, "selectionSortTen.txt");
            break;
        case 100:
            saveOutput(100, hundered, "selectionSortHundered.txt");
            break;
        case 500:
            saveOutput(500, fiveHundered, "selectionSortFiveHundered.txt");
            break;
        case 1000:
            saveOutput(1000, thousand, "selectionSortThousand.txt");
            break;
        case 10000:
            saveOutput(10000, tenThousand, "selectionSortTenThousand.txt");
            break;
        default:
            printf("\nPlease reconsider the length!!");
    }

    return;
}
