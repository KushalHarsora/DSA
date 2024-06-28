/*
When a function calls itself it is called as Recursion. Recursion always needs a base case(stopping condition) else the function might go in infinite calling.
Basically in recursion we divide the big problem in small problems and solve them and return the value to the big sub-problem.

Let us consider the calculation of Factorial. 
Factorial(number) = number * (number - 1) * .... till .... * 1;

How do we solve this using recursion??
For that we should know that Factorial(1) = 1 and Factorial(0) = 1.

Let us say we want to find Factorial(5) so we can achieve this in such a way ->

Factorial(5) = 5 * 4 * 3 * 2 * 1;
but how do we represent it using function so we can do that accordingly ->

Factorial(5) = 5 * 4 * 3 * 2 * Factorial(1);
now we can put Factorial(2) = 2 * Factorial(1) and replace Factorial(5) = 5 * 4 * 3 * Factorial(2);

we go on replacing the values till we get value of Factorial(5);
and thus using recursion we calculated Factorial(5).

Recursion1 Objectives:
1. How to wirte base case and recursion relation.
2. Calculate Factorial using recursion.

So by recursion we will try to find value of Factorial(5) which is 120.
*/

#include "iostream"


class Recursion {

    private: int factorial;

    public: Recursion(int n) {
        factorial = Factorial(n);
        std::cout << "The Factorial Value of " << n << " is " << factorial << ".";
    }

    public: int Factorial (int n) {

        // Defining Base Case
        if (n == 1 || n == 0)
            return 1;
        
        // Recursion Relation
        else 
            return n * Factorial(n - 1);
    }

};

int main() {
    // Prints Value 120
    Recursion number(5);
    return 0;
}