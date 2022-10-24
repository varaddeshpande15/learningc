// Parameters -Information can be passed to functions as a parameter.
// Parameters act as variables inside the function.
// Define Parameters -
// returnType functionName(parameter1, parameter2, parameter3) {
  // code to be executed
// }
//Function that takes a string of characters with name as parameter.
// When the function is called, pass along a name used inside the function to print "Hello" and the name of each person.
// #include<stdio.h>
// void myFunction(char name[]) {
//   printf("Hello %s\n", name);
// }

// int main() {
//   myFunction("Liam");
//   myFunction("Jenny");
//   myFunction("Anja");
//   return 0;
// }
// Hello Liam
// Hello Jenny
// Hello Anja
// Arguments When a parameter is passed to the function, it is called an argument.
// Here name is a parameter and Liam, Jenny and Anja are arguments.
// Multiple parameters -
// void myFunction(char name[], int age) {
//   printf("Hello %s. You are %d years old.\n", name, age);
// }

// int main() {
//   myFunction("Liam", 3);
//   myFunction("Jenny", 14);
//   myFunction("Anja", 30);
//   return 0;
// }
// Hello Liam. You are 3 years old.
// Hello Jenny. You are 14 years old.
// Hello Anja. You are 30 years old.
// Return Values -
// void keyword indicates that it should not return a value.To return a value use data type like int and float instead of void 
// and return keyword inside the function :
// int myFunction(int x) {
//   return 5 + x;
// }

// int main() {
//   printf("Result is: %d", myFunction(3));

//   return 0;
// }
// Outputs 8 (5 + 3)
// Using two parameters :
// int myFunction(int x, int y) {
//   return x + y;
// }

// int main() {
//   printf("Result is: %d", myFunction(5, 3));

//   return 0;
// }
// Outputs 8 (5 + 3)
// Store result as variable :
// int myFunction(int x, int y) {
//   return x + y;
// }

// int main() {
//   int result = myFunction(5, 3);
//   printf("Result is = %d", result);

//   return 0;
// }
// Outputs 8 (5 + 3)