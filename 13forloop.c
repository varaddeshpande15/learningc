// For Loop : When you know exactly how many times you want to loop through a block of code, use the for loop instead of a while loop.
// for (statement 1; statement 2; statement 3) {
  // code block to be executed
// }
// Statement 1 is executed (one time) before the execution of the code block.
// Statement 2 defines the condition for executing the code block.
// Statement 3 is executed (every time) after the code block has been executed.
// The example to print the numbers 0 to 4:
// #include<stdio.h>
// int main()
// {int i;
// for (i = 0; i < 5; i++) {
//   printf("%d\n", i);
// }
// }
// Statement 1 sets a variable before the loop starts (int i = 0).
// Statement 2 defines the condition for the loop to run (i must be less than 5).
// If the condition is true, the loop will start over again, if it is false, the loop will end.
// Statement 3 increases a value (i++) each time the code block in the loop has been executed.
// To print even values between 0 and 10:
// {   int i;
//     for (i = 0; i <= 10; i = i + 2) {
//   printf("%d\n", i);
// }
// }
