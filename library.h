#ifndef ATOI_LIBRARY_H
#define ATOI_LIBRARY_H

/**
 * Converts a string representation of a number to its size_t equivalent.
 *
 * @param str A null-terminated string containing the number to convert.
 *            The string must consist of numeric characters ('0'-'9').
 *            Conversion stops at the first non-numeric character.
 * @return The numeric value as a size_t. If the string is empty or contains
 *         no numeric characters, the result is 0.
 */
size_t atoi(const char* str);

#endif //ATOI_LIBRARY_H