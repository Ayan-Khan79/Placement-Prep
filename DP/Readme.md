### 1. Question <br>
## Longest Palindromic Substring <br>
Given a string s, return the longest palindromic substring in s. <br>
Example 1: <br>
Input: s = "babad" <br>
Output: "bab" <br>
Explanation: "aba" is also a valid answer. <br>
Approach:- <br>
We will find each substring and check if its a valid palindrome <br>
and we will keep on checking and finding the largest valid palindrome and return it with using substr function <br>
Time Complexity- O(n*n), n is the size of string <br>
Space Complexity - O(1), no extra space is used <br>

_______________________________________________________________________________________________________________

### 2. Question <br>
## Coin Change (Count Ways) <br>
Given an integer array coins[ ] representing different denominations of currency and an integer sum, find the number of ways you can make sum by using different combinations from coins[ ]. <br>
Note: Assume that you have an infinite supply of each type of coin. Therefore, you can use any coin as many times as you want. <br>
Answers are guaranteed to fit into a 32-bit integer.  <br>
Examples: <br>
Input: coins[] = [1, 2, 3], sum = 4 <br>
Output: 4 <br>
Explanation: Four Possible ways are: [1, 1, 1, 1], [1, 1, 2], [2, 2], [1, 3]. <br>
Approach:- <br>
We will find all possible ways by selecting a partivular coin and also by excluding it by the help of recursion and at last return the submission of both <br>
Optimization:- Use dp and memoize the pre compute function calls so that we dont have to compute it again and took less time. <br>
Time Complexity:- <br>
1. Without optimization - O(2^n*sum), n is the size of coins array <br>
2. With optimization -  o(n*sum), n is the size of coins array <br>
Space Complexity :- <br>
1. Without optimization - o(1), no extra space is being used <br>
2. With optimization - O(n*sum), n is the size of array <br>

________________________________________________________________________________________________________________

### 3. Question <br>
## Longest Common Subsequence <br>
Given two strings s1 and s2, return the length of their longest common subsequence (LCS). If there is no common subsequence, return 0. <br>
A subsequence is a sequence that can be derived from the given string by deleting some or no elements without changing the order of the remaining elements. For example, "ABE" is a subsequence of "ABCDE". <br>
Examples: <br>
Input: s1 = "ABCDGH", s2 = "AEDFHR" <br>
Output: 3 <br>
Explanation: The longest common subsequence of "ABCDGH" and "AEDFHR" is "ADH", which has a length of 3. <br>
Approach:- <br>
We wil put two pointers on both the string and check if both char matches then increae count by one and check by increasing both pointer <br>
if not then we will find max by increasing one pointer and then increasing another pointer
and will return the answer <br>
Optimization :- Use dp with meoization and store the calculated function calls so that not need to calculate and again and we can directly return the value from dp array <br>
Time Complexity:- <br>
1. Without optimization - O(2^min(n,m)), n is the size of first string and m is the size of second string <br>
2. With optimization -  o(n*m), n is the size of first string and m is the size of second string <br>
Space Complexity :- <br>
1. Without optimization - o(1), no extra space is being used <br>
2. With optimization - O(n+m), n is the size of first string and m is the size of second string <br>

______________________________________________________________________________________________________

