// C Operators - 
// 1) Arithmetic Operators :  used to perform common mathematical operations.
// Addition - x + y, Substraction -x - y, Multiplication - x*y,Division - x/y
// Modulus - x % y - Returns the division remainder,Increment - x++ - increases value of variable by one.
// Decrement - x-- - decreases value of varible by one.
// #include<stdio.h>
// int main()
// {
//     int x=15,y=5;
//     printf("%d\n",x%y);
//     printf("%d\n",x++);
//     printf("%d\n",y++);
//     printf("%d\n",x--);
//     printf("%d\n",y--);
// }
// 2) Assignment Operators(=) : used to assign value to variables (=)
// +=,-=,/=,*=,%=,&=,|=,^=,>>=,<<=.x=x+3,x=x-3,etc.
// 3) Comparison Operators : used to compare two values.
// Note: The return value of a comparison is either true (1) or false (0).
// Eg-==,!=,<,>,>=,<=
// 3) Logical Operators - used to determine the logic between variables or values.
// && - Logical and - Returns true if both statements are true,
// || - Logical or - Returns true if one of the statements is true,
// !  - Logical not - Reverse the result, returns false if the result is true.
// 4) Size of Operator - The memory size (in bytes) of a data type or a variable can be found with the sizeof operator:
// #include<stdio.h>
// int main()
// {
//     int myInt;
//     float myFloat;
//     double myDouble;
//     char myChar;

//     printf("%lu\n", sizeof(myInt));
//     printf("%lu\n", sizeof(myFloat));
//     printf("%lu\n", sizeof(myDouble));
//     printf("%lu\n", sizeof(myChar));
//     return 0;
// }
// We use the %lu format specifer to print the result, instead of %d.
// It is because the compiler expects the sizeof operator to return a long unsigned int (%lu), instead of int (%d).
// For some computers it might work with %d, but it is safer to use %lu.