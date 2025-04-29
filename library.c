/*
* This code is distributed under the terms of the GNU General Public License.
 * For more information, please refer to the LICENSE file in the root directory.
 * -------------------------------------------------
 * Copyright (C) 2025 Rodrigo R.
 * This program comes with ABSOLUTELY NO WARRANTY; for details type `show w'.
 * This is free software, and you are welcome to redistribute it
 * under certain conditions; type `show c' for details.
*/
#include "library.h"

// Define true/false values
#ifndef TRUE
#define TRUE 1
#endif

#ifndef FALSE
#define FALSE 0
#endif

/**
 * Parses a string and attempts to convert it to a long integer, providing detailed results.
 *
 * This function processes the input string similarly to `atoi`, but returns a `GuidedAtoiResult`
 * structure containing both the success status and the converted value. It handles optional
 * leading whitespace, an optional '+' or '-' sign, and numeric characters. Parsing stops at
 * the first non-numeric character or the end of the string.
 *
 * @param str A pointer to the null-terminated string to be converted.
 * @return A `GuidedAtoiResult` structure containing:
 *         - `success`: Non-zero if the conversion was successful, zero otherwise.
 *         - `value`: The converted long integer if successful, or undefined if not.
 */
struct GuidedAtoiResult guided_atoi(const char* str)
{
    // Define a result
    struct GuidedAtoiResult result;

    // Initialize the result
    result.value = 0;
    result.success = TRUE;

    // Handle empty strings
    if (str[0] == '\0')
    {
        result.success = FALSE;
        return result;
    }

    long i = 0;
    int is_negative = FALSE;

    // Iterate over all characters
    while (*str != '\0')
    {
        // Get the current character
        const char c = *str;

        // Ignore whitespaces
        if (c == ' ')
        {
            continue;
        }

        // Handle negative/positive signs
        if (c == '+' || c == '-')
        {
            // Check if we are outside the first index
            if (i != 0)
            {
                result.success = FALSE;
                break;
            }

            // Update is_negative flag
            is_negative = c == '-';
            i++;
            continue;
        }

        // Check if the char is a digit
        if (c > '9' || c < '0')
        {
            result.success = FALSE;
            break;
        }

        // Add the character to the result
        result.value = result.value * 10 + (c - '0');

        // Move to the next character
        str++;
        i++;
    }

    // Negate the result if needed
    if (is_negative)
    {
        result.value = -result.value;
    }

    return result;
}

/**
 * Converts a string to a long integer.
 *
 * This function parses the input string and converts it to a long integer.
 * It handles optional leading whitespace, an optional '+' or '-' sign,
 * and numeric characters. Parsing stops at the first non-numeric character
 * or the end of the string.
 *
 * @param str A pointer to the null-terminated string to be converted.
 * @return The converted long integer. If the string represents a negative
 *         number, the result will be negative.
 */
long atoi(const char* str)
{
    return guided_atoi(str).value;
}