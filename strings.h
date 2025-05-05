#ifndef MY_STRING_H
#define MY_STRING_H

#include <stdio.h>

/**
 * Calculates the length of a null-terminated string.
 * @param string The input string.
 * @return The number of characters before the null terminator.
 */
int stringLength(char *string);

/**
 * Copies the entire source string to destination.
 * @param source The original string.
 * @param destination The buffer to copy into.
 */
void stringCopy(char *source, char *destination);

/**
 * Copies the first `charToCopy` characters of source to destination.
 * @param source The original string.
 * @param destination The buffer to copy into.
 * @param charToCopy The number of characters to copy.
 */
void stringNCopy(char *source, char *destination, int charToCopy);

/**
 * Appends one string to another.
 * @param destination The original string. The result will be stored here.
 * @param toConcat The string to append to destination.
 */
void stringConcat(char *destination, char *toConcat);

/**
 * Appends the first `charToConcat` characters of `toConcat` to `destination`.
 * @param destination The original string.
 * @param toConcat The string to partially append.
 * @param charToConcat Number of characters to append.
 */
void stringNConcat(char *destination, char *toConcat, int charToConcat);

/**
 * Compares two strings for exact match.
 * @param stringOne First string.
 * @param stringTwo Second string.
 * @return 1 if equal, 0 if not equal.
 */
int stringComp(char *stringOne, char *stringTwo);

/**
 * Compares the first `toCompare` characters of two strings.
 * @param stringOne First string.
 * @param stringTwo Second string.
 * @param toCompare Number of characters to compare.
 * @return 1 if equal, 0 if not equal.
 */
int stringNComp(char *stringOne, char *stringTwo, int toCompare);

/**
 * Searches for a character in a string.
 * @param source The string to search.
 * @param toFind The character to look for.
 * @return position if found, -1 if not found.
 */
int stringChar(char *source, char toFind);

/**
 * Deletes characters between indices `start` and `end` (inclusive).
 * @param source The string to modify.
 * @param start Start index to delete from.
 * @param end End index to delete to.
 */
void stringNDelete(char *source, int start, int end);

/**
 * Truncates the string at the given position.
 * @param source The string to modify.
 * @param positionToDelete Index at which to trim (zero-based).
 */
void stringTrim(char *source, int positionToDelete);

/**
 * Converts all lowercase characters to uppercase in a string.
 * @param source The string to modify.
 */
void stringToUpper(char *source);

/**
 * Converts all uppercase characters to lowercase in a string.
 * @param source The string to modify.
 */
void stringToLower(char *source);

/**
 * Copies a substring into a new buffer from `start` to `end` (inclusive).
 * @param source The original string.
 * @param start Start index.
 * @param end End index.
 * @param destination The buffer to store the result.
 */
void stringSubstring(char *source, int start, int end, char *destination);

/**
 * Counts how many times a specific character appears in a string.
 * @param source The string to search.
 * @param characterToFind The character to count.
 * @return Number of times the character appears.
 */
int stringCountChar(char *source, char characterToFind);

/**
 * Calculates the length of a string excluding spaces.
 * @param source The string to measure.
 * @return Number of non-space characters.
 */
int stringLengthWithoutSpaces(char *source);

#endif // MY_STRING_H
