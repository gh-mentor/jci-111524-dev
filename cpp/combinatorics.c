/*
This file contains a C module that provides combinatorial functions:
- The module contains a function named 'factorial' that calculates the factorial of a given number.
- The module contains a function named 'nCr' that calculates the number of combinations of 'n' items taken 'r' at a time.
- The module contains a function named 'nPr' that calculates the number of permutations of 'n' items taken 'r' at a time.
/*
Create a function 'factorial' that calculates the factorial of a given number using recursion.
Arguments:
- 'n': an unsigned integer number for which the factorial is to be calculated.
Return:
- an unsigned integer number that is the factorial of the given number.
Details:
- The factorial of a number 'n' (n!) is the product of all positive integers less than or equal to 'n'.
- The factorial of 0 is 1.
Optimization:
- Use recursion to calculate the factorial of the given number.
- Use the 'memoization' pattern where the results of the factorial calculation are stored in an array.
-- Set the size of the array to 20 initialized with 0 values.
-- The first 2 elecments of the array should be set to 1.
*/

unsigned int factorial(unsigned int n) {
    // create an array to store the results of the factorial calculation
    static unsigned int memo[20] = {0};
    // set the first 2 elements of the array to 1
    memo[0] = 1;
    memo[1] = 1;
    // check if the result of the factorial calculation is already stored in the array
    if (memo[n] != 0) {
        return memo[n];
    }
    // calculate the factorial of the given number using recursion
    memo[n] = n * factorial(n - 1);
    return memo[n];
}

/*
Create a function 'nCr' that calculates the number of combinations of 'n' items taken 'r' at a time.
Arguments:
- 'n': an unsigned integer number that represents the total number of items.
- 'r': an unsigned integer number that represents the number of items to be selected.
Return:
- an unsigned integer number that represents the number of combinations of 'n' items taken 'r' at a time.
Details:
- The number of combinations of 'n' items taken 'r' at a time is calculated using the formula:
    nCr = factorial(n) / (factorial(r) * factorial(n - r))
- Use the 'factorial' function to calculate the factorial of the given numbers.
*/

unsigned int nCr(unsigned int n, unsigned int r) {
    // calculate the number of combinations of 'n' items taken 'r' at a time
    return factorial(n) / (factorial(r) * factorial(n - r));
}



