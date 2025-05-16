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

## 5. Question <br>
### Missing and Repeating <br>
Given an unsorted array arr of positive integers. One number a from the set [1, 2,....,n] is missing and one number b occurs twice in the array. Find numbers a and b. <br>
Note: The test cases are generated such that there always exists one missing and one repeating number within the range [1,n]. <br>
Examples: <br>
Input: arr[] = [2, 2] <br>
Output: [2, 1] <br>
Explanation: Repeating number is 2 and smallest positive missing number is 1. <br>
Approach:- <br>
1. Using Extra Space Hash Array <br>
Create a Hash Array of size n+1 and initialize with 0 <br>
Iterate over the array and increase the count of element in array in hashArry like hash[arr[i]]++ <br>
Now iterate over the hashArray from 1 to n and check if particular index's value is 2 then it is repeated number and store and if particular index's value is 0 then it is missing number and store it <br>
Time Complexity -O(n) <br>
Space Complexity - O(n) , for Hash Array <br>
2. Using Mathematics (Basic fromulas) <br>
Note:- If we add all numbers in array s1 and all number upto n s1n, then we will observe that repated-missing = s1-s1n <br>
Since we got erquations with two unknown variable we need another equation to find tha values of repeat and missing number, then we will calculate sum of squares of numbers in array s2 and same for  upto n numbers s2n that will create our second equation, and after solving both equations we will get our both the values. <br>
Note:- Since addition and square can go out of bound of int limit , so use long long <br>
Time Complexity-O(n), to find sum and squaresum of array <br>
Space Complexity-O(1) <br>
 
______________________________________________________________________________________________________


## 6. Question
### Search array with adjacent diff at most k
Given a step array arr[], its step value k, and a key x, we need to find the index of key x in the array arr[]. If multiple occurrences of key x exist, return the first occurrence of the key. In case of no occurrence of key x exists return -1.
Note: A step array is an array of integers where the difference between adjacent elements is at most k. For example: arr[] = [4, 6, 7, 9] and k = 2 is a step array as the difference between the adjacent elements in the arr[] is at most 2.  
Examples
Input: arr[] = [4, 5, 6, 7, 6] , k = 1 , x = 6
Output: 2
Explanation: In an array arr 6 is present at index 2. So, return 2.
Approach:-
Simply just iterate over array and find x, if found return the index if not then return -1
Time Complexity-O(n)
Space Complexity- O(1)

____________________________________________________________________________________________________________



