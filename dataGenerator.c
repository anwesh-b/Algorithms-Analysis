#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define SIZE 5

// void generateData(int);

int main()
{
    int length[SIZE] = {10,100,500,1000,10000};
    char strLength[SIZE][13] = {"ten","hundered","fiveHundered","thousand","tenThousand"}; 
    char name[SIZE][6] = {"10","100","500","1000","10000"}; 
    for (int i=0; i<SIZE; i++){
        // printf("\n %s %d", strLength[i], length[i]);
        generateData(length[i], strLength[i], name[i]);
    }
    return 0;
}

// Generates a array of size size and saves it to a file
void generateData(int length, char size[], char name[]){
    // Seed rand with different values using current time
    srand(time(0));
    FILE *fp;

    // char filename[] = strcat("./Data/", strcat(size,".h"));
    char filename[50]="./Data/", fileHeader[50]="int ";
    int randArray[length];

    strcat(filename, size);
    strcat(filename, ".h");
    strcat(fileHeader, size);    
    strcat(fileHeader, "[");    
    strcat(fileHeader, name);    
    strcat(fileHeader, "]={");    
    
    printf("\n[LOG] Generating %d random numbers", length);
    for(int i=0;i<length;i++){
        randArray[i]=rand()%(length*10);   //Generate number between 0 to length*100-1
    }
    printf("\n[LOG] Generated %d random numbers", length);

    
    //Save the generated array to file
    fp = fopen(filename, "w");
    if (fp == NULL){
        printf("\n[ERROR] Cannot open file %s", filename);
        return;
    }
    printf("\n[LOG] Saving %d random numbers in file %s", length, filename);
    fputs(fileHeader,fp);

    for(int i=0;i<length;i++){
        fprintf (fp, "%d",randArray[i]);
        if (i<length-1){
            fputs(",",fp);
        }
    }

    fputs("};",fp);
    printf("\n[LOG] Saved %d random numbers", length);

    return;
}
