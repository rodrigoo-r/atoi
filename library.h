#ifndef ATOI_LIBRARY_H
#define ATOI_LIBRARY_H

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
long atoi(const char* str);

#endif //ATOI_LIBRARY_H