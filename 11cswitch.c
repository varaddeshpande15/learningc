// Switch Statement - 
// Instead of writing many if..else statements, you can use the switch statement.
// The switch statement selects one of many code blocks to be executed:
// switch(expression) {
//   case x:
//     code block
//     break;
//   case y:
//     // code block
//     break;
//   default:
//     // code block
// }
// #include<stdio.h>
// int main()
// {
//     int day = 4;
// Use weekday number to calculate weekday name - 
// switch (day) {
//   case 1:
//     printf("Monday");
//     break;
//   case 2:
//     printf("Tuesday");
//     break;
//   case 3:
//     printf("Wednesday");
//     break;
//   case 4:
//     printf("Thursday");
//     break;
//   case 5:
//     printf("Friday");
//     break;
//   case 6:
//     printf("Saturday");
//     break;
//   case 7:
//     printf("Sunday");
//     break;
// }
// // Outputs "Thursday" (day 4
// }
// Working of switch statement :
// The switch expression is evaluated once
// The value of the expression is compared with the values of each case
// If there is a match, the associated block of code is executed
// The break statement breaks out of the switch block and stops the execution
// The default statement is optional, and specifies some code to run if there is no case match
// Break Keyword :
// When C reaches a break keyword, it breaks out of the switch block.
// This will stop the execution of more code and case testing inside the block.
// When a match is found, and the job is done, it's time for a break. There is no need for more testing, it saves execution time.
// The default keyword specifies some code to run if there is no case match:
// {
//     int day = 4;

// switch (day) {
//   case 6:
//     printf("Today is Saturday");
//     break;
//   case 7:
//     printf("Today is Sunday");
//     break;
//   default:
//     printf("Looking forward to the Weekend");
// }

// Outputs "Looking forward to the Weekend
// }
// Note: The default keyword must be used as the last statement in the switch, and it does not need a break.
