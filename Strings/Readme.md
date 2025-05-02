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
