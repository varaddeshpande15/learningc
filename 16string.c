// Strings - Strings are used for storing text/characters.
// C does not have a String type to easily create string variables.
// Use the char type and create an array of characters to make a string in C:
// #include<stdio./h>
// int main()
// {char greetings[] = "Hello World!";
// printf("%s", greetings);}
// Access strings : print first character (0) in greetings:
// {char greetings[] = "Hello World!";
// printf("%c", greetings[0]);}
// Modify or change value of elements in strings :
// {char greetings[] = "Hello World!";
// greetings[0] = 'J';
// printf("%s", greetings);
// Outputs Jello World! instead of Hello World!
// }
//  Other Method to create array in C :
// Use a "string literal" to create a string variable
// {char greetings[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
// printf("%s", greetings);}
// \0 is known as the "null terminating character", and must be included when creating strings using this method.
//  It tells C that this is the end of the string.
// Special Characters 
// 1)To use " ' \ - need to use escape character -
// \" for " , \' for ' \ , \\ for \,\n - new line ,\t - tab , \0 - Null
// {
//  char txt[] = "We are the so-called \"Vikings\" from the north.";
//  printf("%s",txt);
// }
// {
//     char txt[] = "It\'s alright.";
//     printf("%s",txt);
// }
// {
//     char txt[] = "The character \\ is called backslash.";
//     printf("%s",txt);
// }
