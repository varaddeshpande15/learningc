// Memory Address : When a variable is created in C, a memory address is assigned to the variable.
// The memory address is the location of where the variable is stored on the computer.
// When we assign a value to the variable, it is stored in this memory address.
// To access it, use the reference operator (&), and the result will represent where the variable is stored:
// #include<stdio.h>
// int main()
// {
//     int myAge = 43;
//     printf("%p", &myAge); // Outputs 0061FF1C
// }
// Pointers :Pointers are important in C, because they give you the ability to
// manipulate the data in the computer's memory - this can reduce the code and improve the performance.
// Pointers : A pointer is a variable that stores the memory address of another variable as its value.
// {   int myAge = 43;     // An int variable
//     int* ptr = &myAge;  // A pointer variable, with the name ptr, that stores the address of myAge

// Output the value of myAge (43)
    // printf("%d\n", myAge);

// Output the memory address of myAge (0x7ffe5367e044)
    // printf("%p\n", &myAge);

// Output the memory address of myAge with the pointer (0x7ffe5367e044)
//     printf("%p\n", ptr);
// }
// & operator to store the memory address of the myAge variable, and assign it to the pointer.
// Dereference Operator (*) -
// Get the value of the variable the pointer points to, by using the * operator (the dereference operator):
// {
//     int myAge = 43;     // Variable declaration
// int* ptr = &myAge;  // Pointer declaration

// // Reference: Output the memory address of myAge with the pointer (0x7ffe5367e044)
// printf("%p\n", ptr);

// // Dereference: Output the value of myAge with the pointer (43)
// printf("%d\n", *ptr);
// }