/**
 * @file colors.h
 * @brief Defines ANSI color code constants
 */

/**
 * Red text color ANSI code
 */
#define TEXT_RED "\x1B[31m"

/**
 * Green text color ANSI code
 */
#define TEXT_GREEN "\x1B[32m"

/**
 * Yellow text color ANSI code
 */
#define TEXT_YELLOW "\x1B[33m"

/**
 * Blue text color ANSI code
 */
#define TEXT_BLUE "\x1B[34m"

/**
 * Magenta text color ANSI code
 */
#define TEXT_MAGENTA "\x1B[35m"

/**
 * Cyan text color ANSI code
 */
#define TEXT_CYAN "\x1B[36m"

/**
 * White text color ANSI code
 */
#define TEXT_WHITE "\x1B[37m"

/**
 * Resets the text color
 */
#define TEXT_RESET "\x1B[0m"

/**
 * Black background color ANSI code
 */
#define BG_BLACK "\033[40m"

/**
 * Dark red background color ANSI code
 */
#define BG_DARK_RED "\033[41m"

/**
 * Dark green background color ANSI code
 */
#define BG_DARK_GREEN "\033[42m"

/**
 * Dark yellow background color ANSI code
 */
#define BG_DARK_YELLOW "\033[43m"

/**
 * Dark blue background color ANSI code
 */
#define BG_DARK_BLUE "\033[44m"

/**
 * Dark magenta background color ANSI code
 */
#define BG_DARK_MAGENTA "\033[45m"

/**
 * Dark cyan background color ANSI code
 */
#define BG_DARK_CYAN "\033[46m"

/**
 * Dark white background color ANSI code
 */
#define BG_DARK_WHITE "\033[47m"

/**
 * Bright black background color ANSI code
 */
#define BG_BRIGHT_BLACK "\033[100m"

/**
 * Bright red background color ANSI code
 */
#define BG_BRIGHT_RED "\033[101m"

/**
 * Bright green background color ANSI code
 */
#define BG_BRIGHT_GREEN "\033[102m"

/**
 * Bright yellow background color ANSI code
 */
#define BG_BRIGHT_YELLOW "\033[103m"

/**
 * Bright blue background color ANSI code
 */
#define BG_BRIGHT_BLUE "\033[104m"

/**
 * Bright magenta background color ANSI code
 */
#define BG_BRIGHT_MAGENTA "\033[105m"

/**
 * Bright cyan background color ANSI code
 */
#define BG_BRIGHT_CYAN "\033[106m"

/**
 * White background color ANSI code
 */
#define BG_WHITE "\033[107m"

/**
 * Resets the background color
 */
#define BG_RESET "\033[0m"

/**
 * Inverts the text color
 */
#define INVERT_COLOR "\033[7m"

/**
 * Un-invert the text color
 */
#define INVERT_RESET "\033[0m"

/**
 * Resets all text effects
 */
#define ALL_RESET TEXT_RESET BG_RESET INVERT_RESET
