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


## 6. Question  <br>
### Search array with adjacent diff at most k  <br>
Given a step array arr[], its step value k, and a key x, we need to find the index of key x in the array arr[]. If multiple occurrences of key x exist, return the first occurrence of the key. In case of no occurrence of key x exists return -1.  <br>
Note: A step array is an array of integers where the difference between adjacent elements is at most k. For example: arr[] = [4, 6, 7, 9] and k = 2 is a step array as the difference between the adjacent elements in the arr[] is at most 2.    <br>
Examples  <br>
Input: arr[] = [4, 5, 6, 7, 6] , k = 1 , x = 6  <br>
Output: 2  <br>
Explanation: In an array arr 6 is present at index 2. So, return 2.  <br>
Approach:-  <br>
Simply just iterate over array and find x, if found return the index if not then return -1  <br>
Time Complexity-O(n)  <br>
Space Complexity- O(1)  <br>

____________________________________________________________________________________________________________


## 7. Question  <br>
### Find Pair Given Difference  <br>
Given an array, arr[] and an integer x, return true if there exists a pair of elements in the array whose absolute difference is x, otherwise, return false.  <br>
Examples:  <br>
Input: arr[] = [5, 20, 3, 2, 5, 80], x = 78  <br>
Output: true  <br>
Explanation: Pair (2, 80) have an absolute difference of 78.  <br>
Approach:-  <br>
Sort the Array and use two pointers approach, first pointer at starting of array and second pointer at the last of array  <br>
check their diffrence if they are equal to x return true  <br>
Else if the diff is greater than x reduce the last pointer towards 0   <br>
Else if the diss is less than x then increase the first pointer towards n  <br>
Keep checking this in while loop until pointers cross each other , if the diff doesnt exist then return false  <br>
Time Complexity- o(nlogn)+O(n/2)  <br>
Space Complexity-O(1)  <br>

________________________________________________________________________________________________________


## 8. Question <br>
### 3 Sum <br>
Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0. <br>
Notice that the solution set must not contain duplicate triplets. <br>
Example 1: <br>
Input: nums = [-1,0,1,2,-1,-4] <br>
Output: [[-1,-1,2],[-1,0,1]] <br>
Explanation:  <br>
nums[0] + nums[1] + nums[2] = (-1) + 0 + 1 = 0. <br>
nums[1] + nums[2] + nums[4] = 0 + 1 + (-1) = 0. <br>
nums[0] + nums[3] + nums[4] = (-1) + 2 + (-1) = 0. <br>
The distinct triplets are [-1,0,1] and [-1,-1,2]. <br>
Notice that the order of the output and the order of the triplets does not matter. <br>
Approach:- <br>
1. Using Hashset <br>
We will run two loops for i and j and will find third number in order to fulfill target <br>
If it is found in the hashset then triplet is there and store it  <br>
If not then store than number in hashset and keep moving the loop <br>
Time Complexity-O(n^2) <br>
Space Complexity-O(mlogm) for Hashset <br>
2. Using three pointers <br>
Sort the array <br>
Fix one pointer at a time and vary two pointers, first from left end and second from right end to find the  triplet   <br>
if found then store the triplet , since array is sorted then triplet will unique but we need to move forward pointers until that same number didnt appear <br>
By moving all pointers until array is exhausted we will have our triplets <br>
Time Complexit-O(n^2 + nlogn) <br>
Space Complexity-O(1) <br>

________________________________________________________________________________________________________

## 9. Question <br>
### 4 Sum <br>
Given an array nums of n integers, return an array of all the unique quadruplets [nums[a], nums[b], nums[c], nums[d]] such that: <br>
0 <= a, b, c, d < n <br>
a, b, c, and d are distinct. <br>
nums[a] + nums[b] + nums[c] + nums[d] == target <br>
You may return the answer in any order. <br>
Example 1: <br>
Input: nums = [1,0,-1,0,-2,2], target = 0 <br>
Output: [[-2,-1,1,2],[-2,0,0,2],[-1,0,0,1]] <br>
Approach:- <br>
1. Using Hashset <br>
Same as 3 sum , just here we will increase one loop for k also and will perfom the same task  <br>
Time Complexity-O(n^3) <br>
Space Complexity-O(mlogm) , for the hashset <br>
2. Using three pointers <br>
Same as 3 sum , just here fix two pointers at starting and vary two pointers to find the quad <br>
And if found just store it and keep on doing the same thing <br>
Time Complexity-O(n^3) <br>
Space Complexity-O(1) <br>

_________________________________________________________________________________________________

## 10. Question <br>
### Product of Array except itself <br>
Given an array, arr[] construct a product array, res[] where each element in res[i] is the product of all elements in arr[] except arr[i]. Return this resultant array, res[]. <br>
Note: Each element is res[] lies inside the 32-bit integer range. <br>
Examples: <br>
Input: arr[] = [10, 3, 5, 6, 2] <br>
Output: [180, 600, 360, 300, 900] <br>
Explanation: For i=0, res[i] = 3 * 5 * 6 * 2 is 180. <br>
For i = 1, res[i] = 10 * 5 * 6 * 2 is 600. <br>
For i = 2, res[i] = 10 * 3 * 6 * 2 is 360. <br>
For i = 3, res[i] = 10 * 3 * 5 * 2 is 300. <br>
For i = 4, res[i] = 10 * 3 * 5 * 6 is 900. <br>
Approach:- <br>
Using prefix and suffix product arrays <br>
Create a resultant Array and fill it with prefix product <br>
Now in the same array fill it with suffix product <br>
Return the resultant Array <br>
Time Compplexity-O(2n) <br>
Space Complexity-O(n), for the resultant array <br>

______________________________________________________________________________________________________________

## 11. Question <br>
### Arithmetric Number <br>
Given three integers  'a' denotes the first term of an arithmetic sequence, 'c' denotes the common difference of an arithmetic sequence and an integer 'b'. you need to tell whether 'b' exists in the arithmetic sequence or not. <br>  Return 1 if b is present in the sequence. Otherwise, returns 0. <br>
Examples: <br>
Input: a = 1, b = 3, c = 2 <br>
Output: true <br>
Explaination: 3 is the second term of the sequence starting with 1 and having a common difference 2. <br>
Approach:- <br>
Run a loop starting from first number of sequnce till less than equal to number that has to be found with increamenting with common diffrence  <br>
Check if i == that number return true <br>
else return false <br>
Time Complexity-O(b) <br>
Space Complexity-O(1) <br>

__________________________________________________________________________________________________________________