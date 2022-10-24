// Conditional Statements -
// C has the following conditional statements:
// Use if to specify a block of code to be executed, if a specified condition is true
// Use else to specify a block of code to be executed, if the same condition is false
// Use else if to specify a new condition to test, if the first condition is false
// Use switch to specify many alternative blocks of code to be executed
// 1)If Statement - 
// if (condition) {
  // block of code to be executed if the condition is true
// }
#include<stdio.h>
int main()
// {
//     // if (20 > 18) 
//     // printf("20 is greater than 18");
//     int x = 20;
//     int y = 18;
//     if (x > y) 
//     printf("x is greater than y");
//     return 0;
// }
// 2)Else Statement - 
// if (condition) {
  // block of code to be executed if the condition is true} 
//   else {
  // block of code to be executed if the condition is false}
// {
//     int time = 20;
//     if (time < 18) {
//     printf("Good day.");} 
//     else {
//   printf("Good evening.");}
// // Outputs "Good evening."
// }
// 3)Else if statement -
// if (condition1) {
//  block of code to be executed if condition1 is true}
// else if (condition2) {
//  block of code to be executed if the condition1 is false and condition2 is true} 
// else {
// block of code to be executed if the condition1 is false and condition2 is false}
// {int time = 22;
// if (time < 10) {
//   printf("Good morning.");
// } else if (time < 20) {
//   printf("Good day.");
// } else {
//   printf("Good evening.");
// }
// Outputs "Good evening."
// }
// {int myNum = 10; // Is this a positive or negative number?
// if (myNum > 0)
//   printf("The value is a positive number.");
// else if (myNum < 0)
//   printf("The value is a negative number.");
// else
//   printf("The value is 0.");}
// 4)Short Hand if else statement - known as ternary operator because it consists of three operands. 
// It is often used to replace simple if else statements:
// variable = (condition) ? expressionTrue : expressionFalse;
// {
//     int time = 20;
// if (time < 18) {
//   printf("Good day.");} 
// else {
//   printf("Good evening.");
// }
// }
// Can be also wriiten as :
// {
//     int time = 20;
// (time < 18) ? printf("Good day.") : printf("Good evening.");
// }