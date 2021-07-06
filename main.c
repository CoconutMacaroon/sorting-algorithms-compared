/**
 * @file main.c
 * @brief Main file for the program
 */
#include <stdbool.h>
#include <stdio.h>
#include <sys/ioctl.h>
#include <unistd.h>

#include "colors.h"
#include "main.h"

/**
 * Entry point to the program
 * @param argc Number of arguments passed to the program
 * @param argv Arguments to the program
 */
int main(int argc, char *argv[])
{
    int arr[] = {18, 14, 4,  19, 23, 8, 18, 3,  30, 5, 2, 16, 8,
                 25, 24, 23, 28, 25, 1, 3,  16, 20, 4, 4, 16};
    bubbleSort(arr, 25);
    return 0;
}

void bubbleSort(int arr[], size_t arrLen)
{
    bool swapMade = true;
    while (swapMade)
    {
        swapMade = false;
        for (size_t i = 0; i < (arrLen - 1); ++i)
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                swapMade = true;
                clearScreen();
                sleepSeconds(0.2);
                barGraph(arr, arrLen);
            }
    }
}

void barGraph(int arr[], size_t arrLen)
{
    printHeader("left", "right", 5);
    for (size_t i = 0; i < arrLen; ++i)
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

void sleepSeconds(double seconds)
{
    usleep(seconds * 1000000);
}

void printHeader(char leftText[], char rightText[], int rightTextLength)
{
    printf(INVERT_COLOR "%-*s%s\n" INVERT_RESET,
           getTerminalDimentions().width - rightTextLength,
           leftText,
           rightText);
}

terminalDimentions getTerminalDimentions()
{
    struct winsize w;
    ioctl(STDOUT_FILENO, TIOCGWINSZ, &w);
    terminalDimentions dimentions;
    dimentions.height = w.ws_row;
    dimentions.width = w.ws_col;
    return dimentions;
}
