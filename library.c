/*
* This code is distributed under the terms of the GNU General Public License.
 * For more information, please refer to the LICENSE file in the root directory.
 * -------------------------------------------------
 * Copyright (C) 2025 Rodrigo R.
 * This program comes with ABSOLUTELY NO WARRANTY; for details type `show w'.
 * This is free software, and you are welcome to redistribute it
 * under certain conditions; type `show c' for details.
*/

#include <stddef.h>
#include "library.h"

/**
 * Converts a string representation of a number to its size_t equivalent.
 *
 * @param str A null-terminated string containing the number to convert.
 *            The string must consist of numeric characters ('0'-'9').
 *            Conversion stops at the first non-numeric character.
 * @return The numeric value as a size_t. If the string is empty or contains
 *         no numeric characters, the result is 0.
 */
size_t atoi(const char* str)
{
    // Define a result
    size_t result = 0;

    // Iterate over all characters
    while (*str != '\0')
    {
        // Get the current character
        const char c = *str;

        // Check if the char is a digit
        if (c > '9' || c < '0')
        {
            break;
        }

        // Add the character to the result
        result = result * 10 + (c - '0');

        // Move to the next character
        str++;
    }

    return result;
}
