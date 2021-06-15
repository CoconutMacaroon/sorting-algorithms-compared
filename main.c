#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>

#include "main.h"

int main()
{
    int arr[] = {1, 9, 3, 4};
    barGraph(arr, 4);
    printf("\n\n-----\n\n");
    bubbleSort(arr, 4);
    barGraph(arr, 4);
    sleepSeconds(5);
    printf("Hi\n");
    return 0;
}

void bubbleSort(int arr[], int arrLen)
{
    bool swapMade = true;
    while (swapMade)
        for (int j = 0; j < (arrLen - 1); ++j)
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapMade = true;
            }
            else
                swapMade = false;
}

void barGraph(int arr[], int arrLen)
{
    for (int i = 0; i < arrLen; ++i)
        repeatChar('#', arr[i], true);
}

void repeatChar(char c, int times, bool printNewline)
{
    for (int i = 0; i < times; ++i)
        putchar(c);

    if (printNewline)
        putchar('\n');
}

void clearScreen()
{
    printf("\033[H\033[J");
}

void sleepSeconds(int seconds)
{
    usleep(seconds * 1000000);
}
