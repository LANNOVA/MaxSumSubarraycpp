# Project Title

Max Subarray Sum with Divisibility

## Description

This C++ code calculates the maximum subarray sum with divisibility constraint. It takes an array of integers as input and finds the maximum sum of a subarray that satisfies a given divisibility condition. The code uses Kadane's algorithm to find the maximum subarray sum efficiently.

## Requirements

- C++ compiler with support for C++11 standard.
- Standard Template Library (STL) headers: \<bits/stdc++.h\>, \<ext/pb_ds/assoc_container.hpp\>, \<ext/pb_ds/tree_policy.hpp\>.
- Input file (optional): If you want to provide input from a file, create an "input.txt" file in the same directory as the code and put the input in that file.

## Usage

1. Compile the code using a C++ compiler with support for C++11 standard.
2. Run the compiled executable.
3. Enter the number of test cases (t).
4. For each test case:
   - Enter the number of elements in the array (n).
   - Enter the array elements.
   - The code will output the maximum sum of a subarray that satisfies the given divisibility condition.

## Algorithm

The code uses Kadane's algorithm to efficiently find the maximum subarray sum. The algorithm maintains two dynamic programming (DP) arrays, `dp[i][0]` and `dp[i][1]`, where `dp[i][0]` represents the maximum sum ending at index i without using the divisibility constraint, and `dp[i][1]` represents the maximum sum ending at index i while using the divisibility constraint. The DP arrays are updated iteratively as we traverse the array from left to right. The maximum sum of a subarray that satisfies the given divisibility condition is stored in the `ans` variable.

## Code Explanation

- The code starts with including necessary C++ standard libraries and macro definitions for shorthand notations.
- The `Fast_IO()` function is defined to optimize input/output operations for competitive programming.
- The `MaxSubarray()` function is defined to calculate the maximum subarray sum using Kadane's algorithm.
- The `solve()` function is defined to solve each test case.
- In the `main()` function, the number of test cases (t) is read from input (or provided from file), and the `solve()` function is called for each test case.
- The README also provides information on how to use the code, input format, and expected output.

## Donate SRAVStudios
**BTC** - bc1q5kmqqynratseyh7v0n8q58rn7p5xejuemmc4px

**USDT(ETH)**  - 0x8558288490E11E7F900471E7D52F0b0A0B6b8572

**USDT(SOLANA)**  - 4MjmiAwiQT1cqb5fSpvdsKCabZAKxopcMsTqem9gWBqB

**USDT(POLYGON)**  - 0x8558288490E11E7F900471E7D52F0b0A0B6b8572

**ETH**  - 0x8558288490E11E7F900471E7D52F0b0A0B6b8572
