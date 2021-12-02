#include <stdio.h>
#include <string.h>

void saveOutput(int size, int array[], char inputFileName[]){
    
    printf("\nSaving %d data", size);
    FILE *fp;

    fp = fopen(inputFileName, "w");
    if (fp == NULL){
        printf("\n[ERROR] Cannot open file to save %s",inputFileName);
        return;
    }

    for(int i=0;i<size;i++){
        fprintf (fp, "%d ",array[i]);
    } 
    fclose(fp);

    return;
}
