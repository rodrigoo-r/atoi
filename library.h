/*
* This code is distributed under the terms of the GNU General Public License.
 * For more information, please refer to the LICENSE file in the root directory.
 * -------------------------------------------------
 * Copyright (C) 2025 Rodrigo R.
 * This program comes with ABSOLUTELY NO WARRANTY; for details type `show w'.
 * This is free software, and you are welcome to redistribute it
 * under certain conditions; type `show c' for details.
*/

#ifndef ATOI_LIBRARY_H
#define ATOI_LIBRARY_H

#if defined(__cplusplus)
extern "C"
{
#endif

/**
 * Represents the result of a guided `atoi` operation.
 *
 * This structure contains two fields:
 * - `success`: An integer indicating whether the conversion was successful (non-zero for success, zero for failure).
 * - `value`: The converted long integer value if the conversion was successful.
 */
struct GuidedAtoiResult
{
    int success;
    long value;
};

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
long atoi_convert(const char* str);

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
struct GuidedAtoiResult guided_atoi(const char* str);

#if defined(__cplusplus)
}
#endif

#endif //ATOI_LIBRARY_H