#include <time.h>
#include <stdio.h>
#include <conio.h>
#include <stdbool.h>
#include "../Data/data.h"
#include "../outputSaver.h"

#define SIZE 5
int count = 0;
int main()
{
    int length[SIZE] = {10, 100, 500, 1000, 10000};
    clock_t t;

    for (int i = 0; i < SIZE; i++)
    {
        t = clock();
        callMergeSort(length[i]);
        t = clock() - t;
        double time_taken = ((double)t) / CLOCKS_PER_SEC;
        printf("Sorting %d items took %f seconds\n", length[i], time_taken);
    }

    printf("\n\nFor algo Merge Sort");
    for (int i = 0; i < SIZE; i++)
    {
        saveMergeSort(length[i]);
    }

    return 0;
}

void callMergeSort(int length)
{
    switch (length)
    {
    case 10:
        mergeSortAlgo(10, ten);
        break;
    case 100:
        mergeSortAlgo(100, hundered);
        break;
    case 500:
        mergeSortAlgo(500, fiveHundered);
        break;
    case 1000:
        mergeSortAlgo(1000, thousand);
        break;
    case 10000:
        mergeSortAlgo(10000, tenThousand);
        break;
    default:
        printf("Check your input length and try again later :)");
        break;
    }

    return;
}

void merge(int A[], int left, int mid, int right)
{
    int i = left, j = mid + 1, k = 0;
    int B[right - left + 1];

    while (i <= mid && j <= right)
    {
        // B[k++] = A[i]<=A[j] ? A[i++]:A[j++];
        if (A[i] <= A[j])
            B[k++] = A[i++];
        else
            B[k++] = A[j++];
    }

    while (i <= mid)
    {
        B[k++] = A[i++];
    }

    while (j <= right)
    {
        B[k++] = A[j++];
    }

    for (i = left; i <= right; i++)
    {
        A[i] = B[i - left];
    }
    return;
}
// Divide the array into two subarrays, sort them and merge them
void mergeSort(int arr[], int l, int r)
{
    // printf("\n%d", count++);
    // printf("\ninside mergeSort");
    if (l < r)
    {

        // printf("\ninside if statement");
        // m is the point where the array is divided into two subarrays
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        // Merge the sorted subarrays
        merge(arr, l, m, r);
        return;
    }
}

void mergeSortAlgo(int length, int array[])
{

    mergeSort(array, 0, length - 1);

    return;
}

void saveMergeSort(int length)
{
    switch (length)
    {
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
