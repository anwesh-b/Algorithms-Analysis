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
        callBubbleSort(length[i]);
        t = clock() - t;
        double time_taken = ((double)t)/CLOCKS_PER_SEC;
        printf("Sorting %d items took %f seconds\n", length[i], time_taken);
    }

    printf("\n\nFor algo Bubble Sort");
    for(int i=0;i<SIZE;i++){
        saveBubbleSort(length[i]);
    }

    return 0;
}

void callBubbleSort(int length){
    switch(length){
        case 10:
            bubbleSort(10, ten);
            break;
        case 100:
            bubbleSort(100, hundered);
            break;
        case 500:
            bubbleSort(500, fiveHundered);
            break;
        case 1000:
            bubbleSort(1000, thousand);
            break;
        case 10000:
            bubbleSort(10000, tenThousand);
            break;
        default:
            printf("Check your input length and try again later :)");
            break;
        
    }
    return;
}

void bubbleSort(int length, int array[]){
    //Initialize temp variable to store value during swapping
    int temp;

    //Initialize flag to check if any swap occured
    bool swap = true;

    /*
    Loop until no swap occured i.e. array is already sorted
    and until the last element is reached
    */
    for(int i=0; swap == true && i<length-1; i++){
        //Initialize swap to false for each iteration
        swap = false;
    
        for(int j=0; j<length-i-1; j++){
            //Check if the current element is greater than the next element
            if(array[j]>array[j+1]){
                //Swap the two elements
                swap = true;
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    return;
}

void saveBubbleSort(int length){
    switch(length){
        case 10:
            saveOutput(10, ten, "bubbleSortTen.txt");
            break;
        case 100:
            saveOutput(100, hundered, "bubbleSortHundered.txt");
            break;
        case 500:
            saveOutput(500, fiveHundered, "bubbleSortFiveHundered.txt");
            break;
        case 1000:
            saveOutput(1000, thousand, "bubbleSortThousand.txt");
            break;
        case 10000:
            saveOutput(10000, tenThousand, "bubbleSortTenThousand.txt");
            break;
        default:
            printf("Check your input length and try again later :)");
            break;
    }

    return;
}


