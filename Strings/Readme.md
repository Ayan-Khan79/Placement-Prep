Question 1 <br>
Reverse String <br>
Write a function that reverses a string. The input string is given as an array of characters. <br>
You must do this by modifying the input array in-place with O(1) extra memory. <br>
Example 1: <br>
Input: s = ["h","e","l","l","o"] <br>
Output: ["o","l","l","e","h"] <br>
Example 2: <br>
Input: s = ["H","a","n","n","a","h"] <br>
Output: ["h","a","n","n","a","H"] <br>
Approach:- <br>
Using two Pointers, set one pointer at starting of string and another pointer at the last character of string <br>
Start a while loop until both pointers cross each other and keep swapping the values. <br>
Time Complexity - O(n), n is the length of the string <br>
Space Complexity - O(1), constant space <br>

______________________________________________________________

Question 2 <br>
Print all the duplicate characters in a string  <br>
Given a string S, the task is to print all the duplicate characters with their occurrences in the given string. <br>
Example: <br>
Input: S = “geeksforgeeks” <br>
Output: <br>
e, count = 4 <br>
g, count = 2 <br>
k, count = 2 <br>
s, count = 2 <br>
Approach:- <br>
Using map, make a map of char and int and traverse over the string and insert each character and keep increasing the count. <br>
Now traverse on map and whose count is greater than 1 print that character and its value. <br>
Time Complexity -O(n), n is the length of string <br>
Space Complexity - O(k), k is the length of string in map  <br>

_______________________________________________________________

Question 3 <br>
Strings Rotations of Each Other <br>
You are given two strings of equal lengths, s1 and s2. The task is to check if s2 is a rotated version of the string s1. <br>
Note: The characters in the strings are in lowercase. <br>
Examples : <br>
Input: s1 = "abcd", s2 = "cdab" <br>
Output: true <br>
Explanation: After 2 right rotations, s1 will become equal to s2. <br>
Input: s1 = "aab", s2 = "aba" <br>
Output: true <br>
Explanation: After 1 left rotation, s1 will become equal to s2. <br>
Input: s1 = "abcd", s2 = "acbd" <br>
Output: false <br>
Explanation: Strings are not rotations of each other. <br>
Approach:- <br>
1. Brute Force :- if the string2 is rotated version of s1 then it should be the substr of s1 + s1, make a temp string s1 + s1 and use the find function to find the s2 string temp and if it is not equal to npos then return true , otherwise return false  <br>
Time COmplexity -O(n), but the find function will take a long time to find large input strings and will give TLE <br>
2. Optimised Approach :- Using two pointers, Make the temp String as usual s1 + s1 but this time we will find using two pointers start the iteration over the temp string and ask if(temp[i]==s2[j]) then increase the count , and increase the j, otheriwse for loop will go on and also check first if j get equal to s2.size(), then we have reached at the end of string2 and break the loop <br>
Now check if the count is equal to s2.size(), then s2 is rotated version of s1 return true else return false; <br>
Time Complexity - O(n+n), n is the length of first string but this approacch will pass all test cases. <br>
Space Complexity -O(n+n), n is the length of first string <br>

_____________________________________________________________________

Question 4 <br>
Palindrome String <br>
You are given a string s. Your task is to determine if the string is a palindrome. A string is considered a palindrome if it reads the same forwards and backwards. <br>
Examples : <br>
Input: s = "abba" <br>
Output: true <br>
Explanation: "abba" reads the same forwards and backwards, so it is a palindrome. <br>
Input: s = "abc"  <br>
Output: false <br>
Explanation: "abc" does not read the same forwards and backwards, so it is not a palindrome. <br>
Approach:- <br>
Using Two pointers, place first pointer at first character of string and second pointer at the last character of the string and start loop until i is less than j <br>
check if character at i and character at j are not equal return false else loop will continue and if loop terminates then string is palindrome return true <br>
Time Complexity - O(n), n is the length of the string <br>
Space Complexity - O(1) <br>

______________________________________________________________________

Question 5 <br>


