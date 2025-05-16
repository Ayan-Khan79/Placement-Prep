## 1. Question <br>
### Value equal to index value <br>
Given an array arr. Your task is to find the elements whose value is equal to that of its index value ( Consider 1-based indexing ). <br>
Note: There can be more than one element in the array which have the same value as its index. You need to include every such element's index. Follows 1-based indexing of the array. <br>
Examples: <br>
Input: arr[] = [15, 2, 45, 4 , 7] <br>
Output: [2, 4] <br>
Explanation: Here, arr[2] = 2 exists here and arr[4] = 4 exists here. <br>
Approach:- <br>
Simply Loop through the entire array and check if arr[i]==i+1(as it should be 1 based index)  <br>
If so then push the number to the answer array <br>
Time Complexity-O(n) <br>
Space Complexity-O(n) <br>

____________________________________________________________________________________


## 2. Question <br>
### Count Squares <br>
Given a positive integer n, find the number of perfect squares that are less than n in the sample space of perfect squares. The sample space consists of all perfect squares starting from 1 (i.e., 1, 4, 9, 16, 25, …) <br>
Examples : <br>
Input: n = 9 <br>
Output: 2 <br>
Explanation: 1 and 4 are the only Perfect Squares less than 9. So, the Output is 2. <br>
Approach:- <br>
Run a loop from 1 to sqrt(n), as the perfect exist will only upto square root of n not more than that (given conditin , we have to find till n only) <br>
Check if i*i is less than n then it is a perfect square push it to the ans <br>
Time Complexity-O(sqrt(n)) <br>
Space Complexity-O(1) <br>

_______________________________________________________________________________________________


## 3. Question <br>
### First and Last Occurence in Array <br>
Given a sorted array arr with possibly some duplicates, the task is to find the first and last occurrences of an element x in the given array.  <br>
Note: If the number x is not found in the array then return both the indices as -1.  <br>
Examples:  <br>
Input: arr[] = [1, 3, 5, 5, 5, 5, 67, 123, 125], x = 5  <br>
Output: [2, 5]  <br>
Explanation: First occurrence of 5 is at index 2 and last occurrence of 5 is at index 5  <br>
Approach:-  <br>
1. We can also find occurence by simply traversing array and finding first and last occurence in O(n) time.  <br>
2. But since the array is sorted we can apply binary search and reduce and time complexity  <br>
First apply binary search to array and find first occurnce by if arr[mid]==x then store the position and reduce the search space to left side to search further, at last the first position will be saved  <br>
Secondly apply binary search to array and find last occurence by if arr[mid]==x then store the position in last var and reduce the search space to right side to search further, at last last position will be saved.  <br>
Time Complexity- O(logn)+O(logn) => O(2logn) => O(logn)  <br>
Space Complexity- O(1)  <br>

______________________________________________________________________________________________________


## 4. Question <br>
### Middle of Three <br>
Given three distinct numbers a, b and c. Find the number with a value in the middle (Try to do it with minimum comparisons). <br>
Examples : <br>
Input: a = 978, b = 518, c = 300 <br>
Output: 518 <br>
Explanation: Since 518>300 and 518<978, so 518 is the middle element. <br>
Approach:- <br>
First compare a, if it is greater than b and also smaller than c return a <br>
If not then compare b, if it is greater than a and smaller than c return b <br>
Else return c <br>
Time Complexity-O(1) <br>
Space Complexity-O(1) <br>

_______________________________________________________________________________________________________


