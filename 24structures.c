// C Structures (structs)
// Structures (also called structs) are a way to group several related variables into one place.
// Each variable inside structs iw called as member of the structure .
// A structure can contain many different data types (int, float, char, etc.)
// create a structure by using the struct keyword and declare each of its members inside curly braces :
// struct MyStructure {   // Structure declaration
//   int myNum;           // Member (int variable)
//   char myLetter;       // Member (char variable)
// }; // End the structure with a semicolon
// Create a struct variable with name s1 :
// struct myStructure {
//   int myNum;
//   char myLetter;
// };

// int main() {
//   struct myStructure s1;
//   return 0;
// }
// To access members of a structure, use the dot syntax (.):
// Create a structure called myStructure
// #include<stdio.h>
// struct myStructure {
//   int myNum;
//   char myLetter;
// };

// int main() {
//   // Create a structure variable of myStructure called s1
//   struct myStructure s1;

//   // Assign values to members of s1
//   s1.myNum = 13;
//   s1.myLetter = 'B';

//   // Print values
//   printf("My number: %d\n", s1.myNum);
//   printf("My letter: %c\n", s1.myLetter);

//   return 0;
// }
// Multiple structure variables with different values, using just one structure:
// Create different struct variables
// struct myStructure s1;
// struct myStructure s2;

// // Assign values to different struct variables
// s1.myNum = 13;
// s1.myLetter = 'B';

// s2.myNum = 20;
// s2.myLetter = 'C';
// NOTE : Strings in C are actually an array of characters, and unfortunately, you can't assign a value to an array like this.
// Solution - You can use the strcpy() function and assign the value to s1.myString, like this:
// #include <stdio.h>
// #include <string.h>

// struct myStructure {
//   int myNum;
//   char myLetter;
//   char myString[30];  // String
// };

// int main() {
//   struct myStructure s1;

//   // Assign a value to the string using the strcpy function
//   strcpy(s1.myString, "Some text");

//   // Print the value
//   printf("My string: %s", s1.myString);

//   return 0;
// }
// #include <stdio.h>

// // Create a structure
// struct myStructure {
//   int myNum;
//   char myLetter;
//   char myString[30];
// };

// int main() {
//   // Create a structure variable and assign values to it
//   struct myStructure s1 = {13, 'B', "Some text"};

//   // Print values
//   printf("%d %c %s", s1.myNum, s1.myLetter, s1.myString);

//   return 0;
// }
// Copy Structures :
// values of s1 are copied to s2:
// #include <stdio.h>

// struct myStructure {
//   int myNum;
//   char myLetter;
//   char myString[30];
// };

// int main() {
//   // Create a structure variable and assign values to it
//   struct myStructure s1 = {13, 'B', "Some text"};
  
//   // Create another structure variable
//   struct myStructure s2;
  
//   // Copy s1 values to s2
//   s2 = s1;

//   // Print values
//   printf("%d %c %s", s2.myNum, s2.myLetter, s2.myString);

//   return 0;
// }
// Modify Values :
// If you want to change/modify a value, you can use the dot syntax (.)
// To Modify VALUES  the strcpy() function is useful again:
// #include <stdio.h>
// #include <string.h>
// // Create a structure
// struct myStructure {
//   int myNum;
//   char myLetter;
//   char myString[30];
// };

// int main() {
//   // Create a structure variable and assign values to it
//   struct myStructure s1 = {13, 'B', "Some text"};
  
//   // Modify values
//   s1.myNum = 30;
//   s1.myLetter = 'C';
//   strcpy(s1.myString, "Something else");

//   // Print values
//   printf("%d %c %s", s1.myNum, s1.myLetter, s1.myString);

//   return 0;
// }
// Eg 2 -
// #include <stdio.h>
// #include <string.h>

// struct myStructure {
//   int myNum;
//   char myLetter;
//   char myString[30];
// };

// int main() {
//   // Create a structure variable and assign values to it
//   struct myStructure s1 = {13, 'B', "Some text"};

//   // Create another structure variable
//   struct myStructure s2;

//   // Copy s1 values to s2
//   s2 = s1;

//   // Change s2 values
//   s2.myNum = 30;
//   s2.myLetter = 'C';
//   strcpy(s2.myString, "Something else");

//   // Print values
//   printf("%d %c %s\n", s1.myNum, s1.myLetter, s1.myString);
//   printf("%d %c %s\n", s2.myNum, s2.myLetter, s2.myString);
//   return 0;
// }
// Real Life Example - Structure to store different information about Cars:
// #include <stdio.h>

// struct Car {
//   char brand[50];
//   char model[50];
//   int year;
// };

// int main() {
//   struct Car car1  = {"BMW", "X5", 1999};
//   struct Car car2  = {"Ford", "Mustang", 1969};
//   struct Car car3  = {"Toyota", "Corolla", 2011};

//   printf("%s %s %d\n", car1.brand, car1.model, car1.year);
//   printf("%s %s %d\n", car2.brand, car2.model, car2.year);
//   printf("%s %s %d\n", car3.brand, car3.model, car3.year);

//   return 0;
// }