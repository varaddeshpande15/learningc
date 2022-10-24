// Break - It was used to "jump out" of a switch statement.It can also be used to jump out of a loop.
// Eg - jumps out of the loop when i is equal to 4.
// #include<stdio.h>
// int main() 
// {   int i;
// for (i = 0; i < 10; i++) {
//   if (i == 4) {
//     break;
//   }
//   printf("%d\n", i);
// }
// }
// Continue - continue statement breaks one iteration (in the loop),
// if a specified condition occurs, and continues with the next iteration in the loop.
// Eg - skips the value of 4
// {
// int i;
// for (i = 0; i < 10; i++) {
//   if (i == 4) {
//     continue;
//   }
//   printf("%d\n", i);
// }
// }
// Break statement in while loop -
// {int i = 0;
// while (i < 10) {
//   if (i == 4) {
//     break;
//   }
//   printf("%d\n", i);
//   i++;
// }
// }
// Contiue statement in while loop -
// {int i = 0;
// while (i < 10) {
//   if (i == 4) {
//     i++;
//     continue;
//   }
//   printf("%d\n", i);
//   i++;
// }
// }