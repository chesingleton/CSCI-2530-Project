#include <stdio.h>
#include <stdlib.h>
#define MAX_WORDS 20
#define MAX_WORD_LENGTH 50

int stringLength(char *string){
    int length = 0;
    while(string[length] != '\0')//strings end in '\0' so we know we have reached the end if we hit '\0'
        length++;
    return length;
}
void stringCopy(char *source, char *destination) {
    int len = stringLength(source);
    for (int i = 0; i < len; i++)//loop until we get to the end of our string we are copying
        destination[i] = source[i];//copy the current letter to our destination string
    destination[len] = '\0';//we have to add the null at the end of the new string 
}
void stringNCopy(char *source, char *destination,int charToCopy){
    for (int i = 0; i < charToCopy; i++)//the loop will go until we hit charToCopy
        destination[i] = source[i];//we copy the current character to our destination string
    destination[charToCopy] = '\0';//we have to add the null at the end of the new string 
}
void stringConcat(char *destination, char *toConcat)
{
    int j = stringLength(destination);//we need to make sure we dont overwrite the string we are concatenating 
    for(int i = 0; i < stringLength(toConcat); i++)//we go through the string we are concating and add it to destination
    {
        destination[j] = toConcat[i];
        j++;
    }
    destination[j] = '\0'; //we have to add the null at the end of the new string 
}
void stringNConcat(char *destination, char *toConcat,int charToConcat)
{
    int j = stringLength(destination);//we need to make sure we dont overwrite the string we are concatenating 
    for(int i = 0; i < charToConcat; i++)//we go through the string we want to add to our destination until we hit the nth number(charToConcat)
    {
        destination[j] = toConcat[i];
        j++;
    }
    destination[j] = '\0';//we have to add the null at the end of the new string 
}
int stringComp(char *stringOne, char *stringTwo){
    int lenS1 = stringLength(stringOne);
    int lenS2 = stringLength(stringTwo);
    if(lenS1 != lenS2)//if the strings arent the same length we can just return that they arent the same
        return 1;
    int len = stringLength(stringOne);
    for (int i = 0; i < len; i++) 
        if(stringOne[i] != stringTwo[i])//if the current letter is not the same we return that the strings are not the same
            return 1;
    return 0;//we have seen that every part of the string is the same so we can return that they are the same
}
int stringNComp(char *stringOne, char *stringTwo, int toCompare){
    int len = stringLength(stringOne);
    for (int i = 0; i < toCompare; i++)//loops until we reach the user specified end point
        if(stringOne[i] != stringTwo[i])//if the current letter is not the same we return that the strings are not the same
            return 1;
    return 0;//we have seen that every part of the string is the same so we can return that they are the same
}
int stringChar(char *source,char toFind){
    int len = stringLength(source);
    for(int i = 0; i < len; i++)
    {
        if(source[i] == toFind)
            return i+1;
    }
    return -1;
}





int main() {
    char temp[] = "che1 che2 che3";
    char temp2[100];
    char temp3[100];
    char temp4[100];
    char temp5[100];
    char temp6[] = "hello world";
    char temp7[] = "hello w";
    stringConcat(temp4,"hello");
    stringCopy(temp4,temp5);
    stringConcat(temp4, " This is concated");
    stringNConcat(temp5," concated", 5);
    stringCopy(temp,temp2);
    int comp = stringComp(temp,temp2);
    int nComp1 = stringNComp(temp6,temp7,stringLength(temp6));
    int nComp2 = stringNComp(temp6,temp7,stringLength(temp7)); 
    stringNCopy(temp,temp3,7);
    int length = stringLength(temp);
    int loc = stringChar(temp6,'z');
    printf("String 1: %s\nString 2: %s\nString 3: %s\nString 4: %s\nString 5: %s\n%d\n%d\n%d\n%d",temp,temp2,temp3,temp4,temp5,comp,nComp1,nComp2,loc);
    return 0;
}

