/**
 * @file main.h
 * @brief Main header file
*/

/**
 * @struct terminalDimentions
 * @brief Represents the width + height of the terminal
*/
struct terminalDimentions
{
    unsigned short int width; ///< The width of the terminal
    unsigned short int height; ///< The height of the terminal
};

typedef struct terminalDimentions terminalDimentions;

/**
 * Clears the screen
*/
void clearScreen();

/**
 * Prints a header containing information about the program
*/
void printHeader(char leftText[], char rightText[], int rightTextLength);

/**
 * Sleeps for a certain ammount of time
 * @param seconds Number of seconds to sleep for
*/
void sleepSeconds(double seconds);

/**
 * Prints a horizontal bar graph of the numbers in the given array
 * @param arr Array to be graphed
 * @param arrLen Length of the array
*/
void barGraph(int arr[], size_t arrLen);

/**
 * Sorts an array using Bubble Sort
 * @param arr Array to be sorted
 * @param arrLen Length of the array
*/
void bubbleSort(int arr[], size_t arrLen);

/**
 * Prints a character multiple times, with an optional final newline
 * @param c Character to repeat
 * @param times Number of times to repeat the character
 * @param printNewline If a final newline should be printed
*/
void repeatChar(char c, int times, bool printNewline);

/**
 * Gets the dimentions of the terminal
 * @return Dimentions of the terminal, stored as a \ref terminalDimentions struct
*/
terminalDimentions getTerminalDimentions();
