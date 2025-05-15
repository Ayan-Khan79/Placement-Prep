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

