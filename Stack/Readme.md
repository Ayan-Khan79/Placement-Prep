Question 1 <br>
Reverse String Using Stack <br>
You are given a string s , the task is to reverse the string using stack. <br>
Examples: <br>
Input: s ="GeeksforGeeks" <br>
Output:  skeeGrofskee <br>
Input: s ="Geek" <br>
Output: keeG <br>
Approach:- <br>
Create a stack and push every character into it and then create a empty string and loop over stack until its empty and then concat every character to the new string and return it <br>
Time Complexity-O(n), n is the length of string <br>
Space Complexity - O(n), n is the length of string to put in stack <br>

______________________________________________________________

Question 2 <br>
Reverse a Stack <br>
You are given a stack St. You have to reverse the stack using recursion. <br>
Example 1: <br>
Input: <br> 
St = {3,2,1,7,6} <br>
Output: <br>
{6,7,1,2,3} <br>
Explanation: <br>
Input stack after reversing will look like the stack in the output. <br>
Approach:- <br>
Using recursion and backtracking in the main function keep popping the value until it  empties by popping a value storing it and calling function and then after main function call <br>
Call the inserAtbottom function to insert every value at bottom of stack so it reverses every time. <br>
Time Complexity - O(n^2), beacuse for every number you have to call insert at bottom functioin which itself takes the O(n) time to insert value <br> 
Space Complexity - O(n), for the stack <br>

_____________________________________________________________________

Question 3 <br>

