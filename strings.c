#include <stdio.h>
#include <stdlib.h>
#include "strings.h"

int stringLength(char *string){
    int length = 0;
    while(string[length] != '\0')//strings end in '\0' so we know we have reached the end if we hit '\0'
        length++;
    return length;
}
void stringCopy(char *source, char *destination) {
    int len = stringLength(source);
    for(int i = 0; i < len; i++)//loop until we get to the end of our string we are copying
        destination[i] = source[i];//copy the current letter to our destination string
    destination[len] = '\0';//we have to add the null at the end of the new string 
}
void stringNCopy(char *source, char *destination,int charToCopy){
    int i;
    for(i = 0; i < charToCopy && source[i] != '\0'; i++)//the loop will go until we hit charToCopy
        destination[i] = source[i];//we copy the current character to our destination string
    destination[i] = '\0';//we have to add the null at the end of the new string 
}
void stringConcat(char *destination, char *toConcat)
{
    int j = stringLength(destination);//we need to make sure we dont overwrite the string we are concatenating 
    for(int i = 0; i < stringLength(toConcat); i++)//we go through the string we are concating and add it to destination
        destination[j++] = toConcat[i];
    destination[j] = '\0'; //we have to add the null at the end of the new string 
}
void stringNConcat(char *destination, char *toConcat,int charToConcat)
{
    int j = stringLength(destination);//we need to make sure we dont overwrite the string we are concatenating 
    for(int i = 0; i < charToConcat && toConcat[i] != '\0'; i++)//we go through the string we want to add to our destination until we hit the nth number(charToConcat)
        destination[j++] = toConcat[i];
    destination[j] = '\0';//we have to add the null at the end of the new string 
}
int stringComp(char *stringOne, char *stringTwo){
    int lenS1 = stringLength(stringOne);
    int lenS2 = stringLength(stringTwo);
    if(lenS1 != lenS2)//if the strings arent the same length we can just return that they arent the same
        return 0;
    int len = stringLength(stringOne);
    for(int i = 0; i < len; i++) 
        if(stringOne[i] != stringTwo[i])//if the current letter is not the same we return that the strings are not the same
            return 0;
    return 1;//we have seen that every part of the string is the same so we can return that they are the same
}
int stringNComp(char *stringOne, char *stringTwo, int toCompare){
    for(int i = 0; i < toCompare; i++)//loops until we reach the user specified end point
        if(stringOne[i] != stringTwo[i])//if the current letter is not the same we return that the strings are not the same
            return 0;
    return 1;//we have seen that every part of the string is the same so we can return that they are the same
}
int stringChar(char *source,char toFind){
    int len = stringLength(source);
    for(int i = 0; i < len; i++)//loops through the string
    {
        if(source[i] == toFind)
            return i;
    }
    return -1;//returns -1 if not found
}
void stringNDelete(char *source, int start, int end) {
    int len = stringLength(source);
    if(start < 0 || end < start || end >= len)//checks if start or end is invalid 
    {
        printf("Invalid start or end index\n");
        return;
    }
    int j = start;//shift characters after end to start
    for(int i = end + 1; i <= len; i++) 
        source[j++] = source[i];
    source[j] = '\0';//Null-terminate the string at the new length
}
void stringTrim(char *source,int positionToDelete){
    int len = stringLength(source);
    if(positionToDelete < 0 || positionToDelete >= len)
    {
        printf("Invalid start index\n");
        return;
    }
    source[positionToDelete] = '\0';//truncates the string
}
void stringToUpper(char *source){
    int length = stringLength(source);
    for(int i = 0; i < length; i++)//loop through the string
    {
        if(source[i] >= 97 && source[i] <= 122)//check if char is lowercase
            source[i] -= 32;//if it is we subtract 32 to make it capital 
    }
}
void stringToLower(char *source){
    int length = stringLength(source);
    for(int i = 0; i < length; i++)//loop through the string
    {
        if(source[i] >= 65 && source[i] <= 90)//checks if the char is uppercase
            source[i] += 32;//if it is we add 32 to make it lowercase 
    }
}
void stringSubstring(char *source, int start,int end,char *destination){
    int j = 0;
    for(int i = start; i < (end + 1) && source[i] != '\0'; i++)//copy characters from start to end into destination
        destination[j++] = source[i];
    destination[j] = '\0';//we have to add this to the new end of the string
}
int stringCountChar(char *source, char characterToFind){
    int length = stringLength(source);
    int count = 0;
    for(int i = 0; i < length; i++)//loops through the string
    {
        if(source[i] == characterToFind)//if we find the character were looking for we increment the count by 1
            count++;
    }
    return count;//we return the count
}
int stringLengthWithoutSpaces(char *source){
    int length = stringLength(source);
    int count = 0;
    for (int i = 0; i < length; i++)
        if (source[i] != ' ')
            count++;
    return count;
}