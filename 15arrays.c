// Arrays : used to store multiple values in a single variable, instead of declaring separate variables for each value.
// Declare an array : define the data type (like int) and specify the name of the array followed by square brackets [].
// A variable that holds an array of four integers :-
// int myNumbers[] = {25, 50, 75, 100};
// Access the elements in an array : use index number.Array indexes start with 0: [0] is the first element. [1] is the second element.
// #include<stdio.h>
// int main()
// {   int myNumbers[] = {25, 50, 75, 100};
// printf("%d", myNumbers[0]);
// // Outputs 25
// } 
//Change an array element :
// {int myNumbers[] = {25, 50, 75, 100};
// myNumbers[0] = 33;
// printf("%d", myNumbers[0]);
// // Now outputs 33 instead of 25
// }
// Loop through an array : by using for loop .
// Outputs all elements in myNumbers array :
// {int myNumbers[] = {25, 50, 75, 100};
// int i;

// for (i = 0; i < 4; i++) {
//   printf("%d\n", myNumbers[i]);
// }
// }
// Creating an array using size of array :
// {
// // Declare an array of four integers:
// int myNumbers[4];

// // Add elements
// myNumbers[0] = 25;
// myNumbers[1] = 50;
// myNumbers[2] = 75;
// myNumbers[3] = 100;
// }
// Using this method - you should know the size of the array, in order for the program to store enough memory.
// You are not able to change the size of the array after creation.