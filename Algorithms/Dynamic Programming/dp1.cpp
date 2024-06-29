/*
Dynamic Programming is a way of reducing the calculation process by storing the result in a hope of uisng them in the future.
A famous saying goes that "Those who do not remember the past are condemned to repeat it". Speaking in dp terms it means that if a program does not store the results then it is condemned to repeat the calculations again which will add to more time complexity.
Dynamic Programming has two approaches as ->
1. Top-down approach
2. Bottom-up approach

Dp1 Objectives:
1. Create a Dynamic Programming Snippet.
2. Solve Fibonacci series using Dp.

Fibonacci series is a mathematical series where the result of current term is addition of its two previous terms.
We denote the first and second term as 0 and 1. Then we recursively call the function to calculate the sum of previous two values.
Like a[0] = 0 and a[1] = 1 => so a[2] = a[1] + a[0] => 1 + 0 => a[2] = 1
a[3] = a[2] + a[1] = 1 + 1 => 2 and a[4] = a[3] + a[2] = 3 and so on.
But when you use recursion to solve this you would have to perform calculations again and again as their results are not stored.
When drawing the state space tree we can see that the time complexity is O(2^n) which is exponential.

So by storing the results we save us extra calculations and thus reducing the time complexity to O(n) or in linear order.
*/

#include "bits/stdc++.h"
// Initialize a size of array
const int N = 1e5 + 10; 

int dp[N];

class Dp {

    public: int fib(int n) {
        if(n == 0) return 0;
        if (n == 1) return 1;

        // memoise the result (Main dp logic to avoid extra calculations)
        if(dp[n] != -1) return dp[n];

        // Update the array and return result
        else return dp[n] = fib(n - 1) + fib(n - 2);
    }
};

int main() {
    // Initialize all elements in dp as -1
    memset(dp, -1, N);
    Dp object;
    std::cout << object.fib(15) << std::endl;
    return 0;
}