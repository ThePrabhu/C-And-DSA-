# Palindrome Number

## Problem Link
LeetCode - Palindrome Number

## Pattern
Digit Manipulation
Half Reversal Technique

## Approach

Instead of reversing the entire number (which may cause integer overflow),
we reverse only half of the number.

We stop when reversedHalf >= remaining x.

For even length:
    x == reversedHalf

For odd length:
    x == reversedHalf / 10

## Edge Cases

1. Negative numbers → Not palindrome
2. Numbers ending in 0 (except 0 itself) → Not palindrome

## Time Complexity
O(log n)

## Space Complexity
O(1)

## Key Learning

- Prevent integer overflow
- Handle odd and even length differently
- Digit extraction using modulus and division
