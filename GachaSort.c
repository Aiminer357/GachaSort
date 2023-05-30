#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

void bubbleSort(int list[], int size){
    for (int i = 0; i < size; i++){

        for(int j = i; j < size; j++){

            if (list[j] < list[i]) {
                int temp = list[j];
                list[j] = list[i];
                list[i] = temp;
            }

        }

    }
}

void printArray(int array[], int size) {
    for (int i = 0; i < size; ++i) {
        printf("%d  ", array[i]);
    }
    printf("\n");
}

int main(){

    srand(time(NULL));

    int list[5] = {2,3,4,5,1};
    float rareProb = 0.1;
    int pity = 10;
    int pullCount = 0;

    printf("Welcome to GachaSort TM! Rate for pulling a rare sorted array: %.2f. Pity rate: %d\n\n", rareProb, pity);

    
    while (1){

        pullCount++;

        printf("\nPull count: %d\n", pullCount);

        Sleep(1000);
        printf(".\n");
        Sleep(1000);
        printf(".\n");
        Sleep(1000);
        printf(".\n");

        float random = rand() % 100;

        random /= 100;

        if (pullCount >= pity){
            bubbleSort(list, 5);

            printf("Pity Pull\n");
            printf("Sorted Array in Ascending Order: ");

            printArray(list, 5);
            break;
        }else if (random < rareProb ){
            bubbleSort(list, 5);

            printf("Lucky Rare!\n");
            printf("Sorted Array in Ascending Order: ");

            printArray(list, 5);
            break;
        }else{
            printf("Unsorted Array: ");

            printArray(list, 5);
        }
    }

    printf("Thank you for using Gacha Sort!\n");

    return 0;
}