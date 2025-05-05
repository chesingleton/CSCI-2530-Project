#include <stdio.h>
#include <stdlib.h>
#include "strings.h"
int main() {
    char str1[100] = "Hello World";
    char str2[100] = "Goodbye";
    char buffer[100];

    // stringLength
    printf("Length of '%s': %d\n", str1, stringLength(str1));

    // stringCopy
    stringCopy(str1, buffer);
    printf("Copy of '%s': %s\n", str1, buffer);

    // stringNCopy
    stringNCopy(str1, buffer, 5);
    printf("First 5 chars of '%s': %s\n", str1, buffer);

    // stringConcat
    stringCopy(str1, buffer); // Reset buffer
    stringConcat(buffer, str2);
    printf("Concatenation of 'Hello World' and 'Goodbye': %s\n", buffer);

    // stringNConcat
    stringCopy(str1, buffer); // Reset buffer
    stringNConcat(buffer, str2, 4); // Add first 4 chars of str2
    printf("NConcatenation (4 chars) of 'Hello World' and 'Goodbye': %s\n", buffer);

    // stringComp
    printf("Compare 'Hello' and 'Hello': %d\n", stringComp("Hello", "Hello"));
    printf("Compare 'Hello' and 'World': %d\n", stringComp("Hello", "World"));

    // stringNComp
    printf("Compare first 3 chars of 'Hello' and 'Helium': %d\n", stringNComp("Hello", "Helium", 3));
    printf("Compare first 3 chars of 'Hello' and 'World': %d\n", stringNComp("Hello", "World", 3));

    // stringChar
    printf("Position of 'W' in '%s': %d\n", str1, stringChar(str1, 'W'));
    printf("Position of 'z' in '%s': %d\n", str1, stringChar(str1, 'z'));

    // stringNDelete
    char testDelete1[100] = "Hello World";
    stringNDelete(testDelete1, 2, 5); // Delete from index 2 to 5
    printf("After deleting index 2 to 5: %s\n", testDelete1);

    // stringDelete
    char testDelete2[100] = "Hello World";
    stringDelete(testDelete2, 5); // Truncate at index 5
    printf("After truncating at index 5: %s\n", testDelete2);

    // stringToUpper
    char upperTest[100] = "Hello World";
    stringToUpper(upperTest);
    printf("Uppercase: %s\n", upperTest);

    // stringToLower
    char lowerTest[100] = "HELLO WORLD";
    stringToLower(lowerTest);
    printf("Lowercase: %s\n", lowerTest);

    // stringSubstring
    char subTest[100];
    stringSubstring(str1, 0, 4, subTest); // Should get "Hello"
    printf("Substring (0 to 4) of '%s': %s\n", str1, subTest);

    // stringCountChar
    printf("Count of 'l' in '%s': %d\n", str1, stringCountChar(str1, 'l'));

    // stringLengthWithoutSpaces
    printf("Length without spaces in '%s': %d\n", str1, stringLengthWithoutSpaces(str1));
    return 0;
}