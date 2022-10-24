// Function -a block of code which only runs when it is called. 
// Used to perform certain actions, and they are important for reusing code: Define the code once, and use it many times.
// Eg -main() - function - used to execute code, and printf()- function - used to output/print text to the screen
// Create a function - 
// void myFunction() {
  // code to be executed
// }
// 1. myFunction() is the name of the function . 2. void means that the function does not have a return value.
// Call a function -
// #include <stdio.h>
// Create a function
// void myFunction() {
//   printf("I just got executed!");
// }

// int main() {
//   myFunction(); // call the function
//   return 0;
// }
// Outputs "I just got executed!"
// Call a function multiple times -
// void myFunction() {
//   printf("I just got executed!\n");
// }

// int main() {
//   myFunction();
//   myFunction();
//   myFunction();
//   return 0;
// }

// I just got executed!
// I just got executed!
// I just got executed!