## Question 1:  
### Find duplicate in an Array(leetcode -287)  
Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.  
There is only one repeated number in nums, return this repeated number.  
You must solve the problem without modifying the array nums and using only constant extra space.  
Example 1:  
Input: nums = [1,3,4,2,2]  
Output: 2  
Example 2:  
Input: nums = [3,1,3,4,2]  
Output: 3  
Example 3:  
Input: nums = [3,3,3,3,3]  
Output: 3  
Approach :-  
As we got approach to detect cycle in the linked lits, in the same manner we will apply the concept here and find the starting of the loop and that will be our answer.  
Time Complexity - O(n + n)=> O(n)  
  
  ________________________

## Question 2: <br>
### Merge Intervals (Leetcode - 56) <br>
Given an array of intervals where intervals[i] = [starti, endi], merge all overlapping intervals, and return an array of the non-overlapping intervals that cover all the intervals in the input.<br>

Example 1: <br>
Input: intervals = [[1,3],[2,6],[8,10],[15,18]]  <br>
Output: [[1,6],[8,10],[15,18]]  <br>
Explanation: Since intervals [1,3] and [2,6] overlap, merge them into [1,6].  <br>
Example 2:  <br>
Input: intervals = [[1,4],[4,5]]  <br>
Output: [[1,5]]  <br>
Explanation: Intervals [1,4] and [4,5] are considered overlapping.  <br>

Approach :-  <br>
Take an answer array of arrays , then take a prev array and set it to the first array of nums and start a loop from 1 to n and inside check if the prev[1]>=temp[0], if so then change the prev[1] to the max of temp[1] and prev[1] and loop will continue.  <br>
Else not then push the prev array to answer and then make the temp array as prev array and then continue  <br>
At last push the last temp array to answer as it has not been chcecked with any other array and return the ans.  <br>
Time Complexity- O(n logn)  <br>
______________________

## Question 3:  <br>
### Next Permutation (Leetcode - 31)  <br>
A permutation of an array of integers is an arrangement of its members into a sequence or linear order.  <br>

For example, for arr = [1,2,3], the following are all the permutations of arr: [1,2,3], [1,3,2], [2, 1, 3], [2, 3, 1], [3,1,2], [3,2,1].  <br>
The next permutation of an array of integers is the next lexicographically greater permutation of its integer. More formally, if all the permutations of the array are sorted in one container according to their lexicographical order, then the next permutation of that array is the permutation that follows it in the sorted container. If such arrangement is not possible, the array must be rearranged as the lowest possible order (i.e., sorted in ascending order).  <br>

For example, the next permutation of arr = [1,2,3] is [1,3,2].  <br>
Similarly, the next permutation of arr = [2,3,1] is [3,1,2].  <br>
While the next permutation of arr = [3,2,1] is [1,2,3] because [3,2,1] does not have a lexicographical larger rearrangement.  <br>
Given an array of integers nums, find the next permutation of nums.  <br>
The replacement must be in place and use only constant extra memory.  <br>
Example 1:  <br>
Input: nums = [1,2,3]  <br>
Output: [1,3,2]  <br>
Example 2:  <br>
Input: nums = [3,2,1]  <br>
Output: [1,2,3]  <br>
Example 3:  <br>
Input: nums = [1,1,5]  <br>
Output: [1,5,1]  <br>

Approach :- <br>
1 Brute Force :- Find all the permutation in sorted order and then apply linear search for that array and then return the next permutaion as next pewrmutation <br>
Time Compllexity - O(n!*n) <br>
2 Using STL of c++ :- there is a stl next_permutation to generate the np for the array just pass the begin and end of the array <br>
3 Optimal Solution :- first find the breakpoint in the array starting from n-2 where nums[i]<nums[i+1] store the i and then break
Now if the index is still -1 then return the reverse the of array that will be edge case
if the index is not -1 then strat a loop from last to the begin and find where nums[i]>nums[index] , there swap the values and then break;
at last reverse the array from the index to the last and return that array <br>
Time Complexity - O(n) + O(n) + O(n)=> O(n) <br>

_____________________________________________

## Question 4: <br>
### Best Time to Buy and Sell Stock (Leetcode - 121) <br>
You are given an array prices where prices[i] is the price of a given stock on the ith day. <br>
You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock. <br>
Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0. <br>
Example 1: <br>
Input: prices = [7,1,5,3,6,4] <br>
Output: 5 <br>
Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5. <br>
Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell. <br>
Example 2: <br>
Input: prices = [7,6,4,3,1] <br>
Output: 0 <br>
Explanation: In this case, no transactions are done and the max profit = 0. <br>

Approach:- <br>
1. Brute Force:- Set the minimum amount to nums[0] and start a loop from 1 to n and then calculate the diffrence between the dates[i] to the minimum 
Then calculate the max profit that will be the max of current profit and the diffrence and also update the minimum as approaching further so that scope also increase 
minimum will be min(minmum,nums[i]) in every ietration <br>
Time Complexity - O(n) <br>

_______________________________________________

## Question 5: <br>
### Array and String Reversal (GFG) <br>
Example 1: <br>
Input : [1,2,3,4,5] <br>
Output: [5,4,3,2,1] <br>
Example 2: <br>
Input : ayan <br>
Output: naya <br>

Approach:- <br>
Using two pointers on both array and string one at front and one at last and swap both positions until both pointers cross each other <br>
Time Complexity - O(n) <br>

___________________________________________________

## Question 6: <br>
### Find max and min in an Array <br>
Example 1: <br>
Intput: [1,2,3,4,5] <br>
Output: 5,1 <br> 
Example 2: <br> 
Input: [6,7,8,9,4,3] <br> 
Output: 9,3 <br> 

Approach:-  <br>
Simply traverse the array and compare the each element with answer if the element is greater than answer update it to the answer and do the same for the minimum also and return the answer <br> 
Time Complexity - O(n) <br>

___________________________________________________

## Question 7: <br>
### Find Kth Smallest Element in Array <br>
Example 1: <br>
Input: [1,2,3,4,5] k=3 <br>
Output: 3 <br>
Input: [5,6,7,8,9] k=4 <br>
Output: 8 <br>

Approach :- Simply sort the array and return the (k-1)th index value as answer <br>
Time Complexity - O(n) <br>

_______________________________________________________

## Question 8: <br>
### Sort 0 1 and 2 in array <br>
Given an array arr[] containing only 0s, 1s, and 2s. Sort the array in ascending order. <br>
You need to solve this problem without utilizing the built-in sort function. <br>
Examples: <br>
Input: arr[] = [0, 1, 2, 0, 1, 2] <br>
Output: [0, 0, 1, 1, 2, 2] <br>
Explanation: 0s 1s and 2s are segregated into ascending order <br> <br>
Input: arr[] = [0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1] <br>
Output: [0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 2, 2] <br>
Explanation: 0s 1s and 2s are segregated into ascending order. <br>

Approach:- <br>
1 Brute Force :- Using extra space create a new array of same size and count the number of zer one and two and fill the array. <br>
Time Complexity -O(n), Space Complexity - O(n) <br>
2 Two Pointers :- set the firt pointer to set 0 at starting and second pointer j at last to set 2 and make an k pointer as iterator
If arr[k]==0, swap it with arr[k],arr[i] and i++,k++
If arr[k]==1 , dont do anything just move forward as one will come automatically in between k++
If arr[k]==2, Swap it with arr[k],arr[j], then only decrease j-- beacause there is a chance that swapped value can be 0 and we need to check for it
Now when the k>=j the loop will terminate and our array will be sorted <br>
Time Complexity - O(n), Space Complexity - O(1) <br>

_________________________________________________

## Question 9: <br>
### Move all Negative to starting of Array <br>
Given an array containing both positive and negative numbers in random order. The task is to rearrange the array elements so that all negative numbers appear before all positive numbers. <br>
Example 1: <br>
Input: -12, 11, -13, -5, 6, -7, 5, -3, -6 <br>
Output: -12 -13 -5 -7 -3 -6 11 6 5 <br>
Example 2: <br>
Input : 1 2 -3 -4 -5 6 7 <br>
Output: -3 -4 -5 1 2 6 7 <br>

Approach:- <br>
1 Brute Force :- Using In built sort function <br> 
Time Complexity - O(nlogn) <br>
2 Two Pointer :- using two pointer i and j set i to starting of array that will set negative number and j to last of array that will set positive number and a k iterator that will traverse the array <br>
Time Complexity - O(n) <br>

____________________________________________________


## Question 10: <br>
### Union of Arrays with Duplicates <br>
Given two arrays a[] and b[], the task is to find the number of elements in the union between these two arrays. <br>
The Union of the two arrays can be defined as the set containing distinct elements from both arrays. If there are repetitions, then only one element occurrence should be there in the union. <br>
Note: Elements of a[] and b[] are not necessarily distinct. <br>
Examples: <br>
Input: a[] = [1, 2, 3, 4, 5], b[] = [1, 2, 3] <br>
Output: 5 <br>
Explanation: Union set of both the arrays will be 1, 2, 3, 4 and 5. So count is 5. <br>
Input: a[] = [85, 25, 1, 32, 54, 6], b[] = [85, 2] <br> 
Output: 7 <br>
Explanation: Union set of both the arrays will be 85, 25, 1, 32, 54, 6, and 2. So count is 7. <br>

Approach:- <br>
1 using sorting :- Sort both arrays and start fill the new array with both elements skipping the duplicate one <br>
Time Complexity - O(nlogn) + O(mlogm) , Space Complexity - O(n+m) <br>
2 Using Unordered Set :- We know that set contains only unique elements if we inser elements of both the arrays it will atumatically insert unique ones. <br>
Time Complexity - O(n+m) as insertion takes O(1) in unordered set , Space Complexity - O(n+m); <br>

___________________________________________________________


## Question 11: <br>
### Rotate Array by One <br>
Given an array arr, rotate the array by one position in clockwise direction. <br>
Examples: <br>
Input: arr[] = [1, 2, 3, 4, 5] <br>
Output: [5, 1, 2, 3, 4] <br>
Explanation: If we rotate arr by one position in clockwise 5 come to the front and remaining those are shifted to the end. <br>
Input: arr[] = [9, 8, 7, 6, 4, 2, 1, 3] <br>
Output: [3, 9, 8, 7, 6, 4, 2, 1] <br>
Explanation: After rotating clock-wise 3 comes in first position. <br>

Approach:- <br>
First reverse the array from kth position to last position , then reverse array from starting to k-1 position, and then again reverse array array from starting to the end <br>
You will get your rotated array by k steps , here k=1 so no other need to reverse kth to last just reverse start to k-1 position and then reverse start to last <br>
Time Complexity - O(n-k) +O(k)=> O(n) <br>

_______________________________________________________________


## Question 12 <br>
### Kadane Algorithm <br>
Given an integer array arr[]. You need to find the maximum sum of a subarray. <br>
Examples: <br>
Input: arr[] = [2, 3, -8, 7, -1, 2, 3] <br>
Output: 11 <br>
Explanation: The subarray {7, -1, 2, 3} has the largest sum 11. <br>
Input: arr[] = [-2, -4] <br>
Output: -2 <br>
Explanation: The subarray {-2} has the largest sum -2. <br>
Input: arr[] = [5, 4, 1, 7, 8] <br>
Output: 25 <br>
Explanation: The subarray {5, 4, 1, 7, 8} has the largest sum 25. <br>

Approach:-  
Start a loop from starting and add each value to it then immediately check if the current is negative, if it so then make the currentSum zero again and immediately find the currentmax by
finding max of currentmax and sum till the end of loop and return the currentMax  
Time Complexity - O(n)  

_______________________________________________________________________  

## Question 13 <br> 
### Minimize the Heights <br>
Given an array arr[] denoting heights of N towers and a positive integer K. <br>
For each tower, you must perform exactly one of the following operations exactly once. <br>
Increase the height of the tower by K <br>
Decrease the height of the tower by K <br>
Find out the minimum possible difference between the height of the shortest and tallest towers after you have modified each tower. <br>
You can find a slight modification of the problem here. <br>
Note: It is compulsory to increase or decrease the height by K for each tower. After the operation, the resultant array should not contain any negative integers. <br>
Examples : <br>
Input: k = 2, arr[] = {1, 5, 8, 10} <br>
Output: 5 <br>
Explanation: The array can be modified as {1+k, 5-k, 8-k, 10-k} = {3, 3, 6, 8}.The difference between the largest and the smallest is 8-3 = 5. <br>
Input: k = 3, arr[] = {3, 9, 12, 16, 20} <br>
Output: 11 <br>
Explanation: The array can be modified as {3+k, 9+k, 12-k, 16-k, 20-k} -> {6, 12, 9, 13, 17}.The difference between the largest and the smallest is 17-6 = 11.  <br>  
Approach:-  
First sort the array and then final the initial diffrence that is arr[n-1]-arr[0], then set max and min and start a loop from 1 to n  
then find max of tower by finding max of last tower-k with the ith tower +k  
then find the min of tower in same loop by min of first tower +k with ith tower-k  
and if arr[i] <k continue  
Time complexity - O(n)  
Space complexity - O(1)  

_________________________________________________________________________________  

## Question 14 <br>
### Merge without Extra Space <br>
Given two sorted arrays a[] and b[] of size n and m respectively, the task is to merge them in sorted order without using any extra space. Modify a[] so that it contains the first n <br> elements and modify b[] so that it contains the last m elements. <br>
Examples: <br>
Input: a[] = [2, 4, 7, 10], b[] = [2, 3] <br>
Output: <br>
2 2 3 4 <br>
7 10 <br>
Explanation: After merging the two non-decreasing arrays, we get, 2 2 3 4 7 10 <br>
Input: a[] = [1, 5, 9, 10, 15, 20], b[] = [2, 3, 8, 13] <br>
Output: <br>
1 2 3 5 8 9 <br>
10 13 15 20 <br>
Explanation: After merging two sorted arrays we get 1 2 3 5 8 9 10 13 15 20. <br>
Input: a[] = [0, 1], b[] = [2, 3] <br>
Output: <br>
0 1 <br>
2 3 <br> 
Explanation: After merging two sorted arrays we get 0 1 2 3. <br>
Approach:-   <br>
Using two pointer approach , set the first pointer at the last of array and second pointer to the first of array  <br>
Now since the both arrays are sorted then swap the elements of both arrays till we reach the element in first array that is smaller than second array  <br>
That means we have all the elements in array1 smaller than in array two  <br>
Simply sort the both array and return  <br>
Time complexity - O(nlog) + O(mlogm) + O(n) => O(n+m)log(m+n)  <br>

_____________________________________________________________________________________

## Question 15  <br>
### Common in 3 Sorted Arrays <br>
Given three sorted arrays in non-decreasing order, print all common elements in non-decreasing order across these arrays. If there are no such elements return an empty array. In this case, the output will be -1. <br>
Examples : <br>
Input: arr1 = [1, 5, 10, 20, 40, 80] , arr2 = [6, 7, 20, 80, 100] , arr3 = [3, 4, 15, 20, 30, 70, 80, 120] <br>
Output: [20, 80] <br>
Explanation: 20 and 80 are the only common elements in arr, brr and crr. <br>
Approach:- <br>
1. Using three pointers i j and k for the three arrays <br>
Start the pointer from starting of each array and first check if element in 1 is equal to element in 2 and also equal to element to 3, then <br>
insert it to the set ,because it will handle the dupliacates value <br>
If not then check if first element is less than second then increase the first pointer as arrays are sorted <br>
if not also then check if second element is less than third element then increase the second pointer <br>
If not also then increase the third pointer <br>
Lastly fill the vector with values in set and return and if set is empty return -1 in vector. <br>
Time Complexity - O(n1+n2+n3 + m), m for inserting in set and iterating to fetch value <br>
Space Complexity - O(m), m are element in set <br>
2. Using Binary Search in two arrays for each and every value in  value in first array <br>
If both the elements are found in the two arrays then insert the elemnet in set  <br>
If not then keep on moving <br>
At last return the  vectors with elements in set <br>
Time Complexity-O(n1(n2logn2+n3logn3) + m) <br>
Space Complexity - O(m), m are elements in set <br>

_____________________________________________________________________________________

## Question 16 <br>
### Alternate Positive Negative <br>
Given an unsorted array arr containing both positive and negative numbers. Your task is to rearrange the array and convert it into an array of alternate positive and negative numbers without changing the relative order. <br>
Note: <br>
- Resulting array should start with a positive integer (0 will also be considered as a positive integer). <br>
- If any of the positive or negative integers are exhausted, then add the remaining integers in the answer as it is by maintaining the relative order. <br>
- The array may or may not have the equal number of positive and negative integers. <br>
Examples: <br>
Input: arr[] = [9, 4, -2, -1, 5, 0, -5, -3, 2] <br>
Output: [9, -2, 4, -1, 5, -5, 0, -3, 2] <br>
Explanation: The positive numbers are [9, 4, 5, 0, 2] and the negative integers are [-2, -1, -5, -3]. Since, we need to start with the positive integer first and then negative integer and so on (by maintaining the relative order as well), hence we will take 9 from the positive set of elements and then -2 after that 4 and then -1 and so on. <br>
Approach:- <br>
create two arrays positive and negative , Iterate overe the original array and store the positive num in pos array and negative num in neg array <br>
Now take three pointer i j k for pos array neg array and original array <br>
start a while loop till any one of the pointer reaches last of its array <br>
and fill original array accordin to the index , if index is even positive number else negative number <br>
Now to fill remaining number from either of the arrays write two while loops for both neg and pos array <br>
Time Complexity - O(n) <br>
Space Complexity-O(k+j) => O(n) <br>

_____________________________________________________________________________________________

## Question 17 <br>
### Median of an Array <br>
Given an array arr[] of integers, calculate the median. <br>
Examples: <br>
Input: arr[] = [90, 100, 78, 89, 67] <br>
Output: 89 <br>
Explanation: After sorting the array middle element is the median  <br>
Input: arr[] = [56, 67, 30, 79] <br>
Output: 61.5 <br>
Explanation: In case of even number of elements, average of two middle elements is the median.  <br>
Approach:- <br>
First sort the array and then find the number of elements in array <br>
if its even then apply formula of even to find median that is (n/2th term + n/2-1th term)/2 <br>
If its odd then apply formula of odd to find median that is n/2th term <br>
Time Complexity - O(nlogn) for sorting <br>
Space Complexity - O(1) <br>

________________________________________________________________________________________________

## Question 18 <br>
### Two Sum II - Input Array Is Sorted <br>
Given a 1-indexed array of integers numbers that is already sorted in non-decreasing order, find two numbers such that they add up to a specific target number. Let these two numbers be numbers[index1] and numbers[index2] where 1 <= index1 < index2 <= numbers.length. <br>
Return the indices of the two numbers, index1 and index2, added by one as an integer array [index1, index2] of length 2. <br>
The tests are generated such that there is exactly one solution. You may not use the same element twice. <br>
Input: numbers = [2,7,11,15], target = 9 <br>
Output: [1,2] <br>
Explanation: The sum of 2 and 7 is 9. Therefore, index1 = 1, index2 = 2. We return [1, 2]. <br>
Approach:- <br>
Simply Follow two pointers approach, as the arry is sorted one pointer place at starting and second at the end <br>
Now Calculate sum and if its equal to target then push i+1 and j+1 as we have to return 1 based indexing <br>
And to avoid multiple answers use set to insert <br>
Now when the loop will end fill thge elmenets of set into array and sort it and return it. <br>
Time Complexity-O(nlogn+logn) <br>
Space Complexity-O(k), k is the number of indices that meet upto target <br>

__________________________________________________________________________________________________________

## Question 19 <br>
### Two sum -Pairs with 0 Sum <br>
Given an integer array arr, return all the unique pairs [arr[i], arr[j]] such that i != j and arr[i] + arr[j] == 0. <br>
Note: The pairs must be returned in sorted order, the solution array should also be sorted, and the answer must not contain any duplicate pairs. <br>
Examples: <br>
Input: arr = [-1, 0, 1, 2, -1, -4] <br>
Output: [[-1, 1]] <br>
Explanation: arr[0] + arr[2] = (-1)+ 1 = 0. <br>
arr[2] + arr[4] = 1 + (-1) = 0. <br>
The distinct pair are [-1,1]. <br>
Approach:- <br>
Create a set of vectors to store unique vectors and sort the Array <br>
Now using two pointers check if arr[i] + arr[j] == sum , Then push the pair to a temporary vector and push the 
vector to the set and increase the pointers i and j <br>
And if sum >0  then decrease the j pointer  <br>
And if sum<0 then increase the i pointer <br>
Now store all vectors of the set to the vector of vector and return it <br>
Time Complexity-O(nlogn) <br>
Time Complexity-O(n), n will be the number of pairs in set <br>

_________________________________________________________________________________________________________________

## Question 20 <br>
### Smallest subarray with sum greater than x <br>
Given a number x and an array of integers arr, find the smallest subarray with sum greater than the given value. If such a subarray do not exist return 0 in that case. <br>
Examples: <br>
Input: x = 51, arr[] = [1, 4, 45, 6, 0, 19] <br>
Output: 3 <br>
Explanation: Minimum length subarray is [4, 45, 6] <br>
Input: x = 100, arr[] = [1, 10, 5, 2, 7] <br>
Output: 0 <br>
Explanation: No subarray exist <br>
Approach:- <br>
Using Sliding window approach first make the first window of sum of elements upto x and get its len now
keep removing the elemnts from start of window till the window is >= x and also keep updating the len
and keep performing till the last element of array. <br>
Time complexity - O(n), n is the length of array <br>
Space Complexity - O(1), no extra space is used <br>

_______________________________________________________________________________________________________________

## Question 21 <br>
### Palindromic Array <br>
Given an array arr[] of positive integers. Return true if all the array elements are palindrome otherwise, return false. <br>
Examples: <br>
Input: arr[] = [111, 222, 333, 444, 555] <br>
Output: true <br>
Explanation: <br>
arr[0] = 111, which is a palindrome number. <br>
arr[1] = 222, which is a palindrome number. <br>
arr[2] = 333, which is a palindrome number. <br>
arr[3] = 444, which is a palindrome number. <br>
arr[4] = 555, which is a palindrome number. <br>
As all numbers are palindrome so This will return true. <br>
Approach:- <br>
First convert each number into a string and check if its a palindrome <br>
if all are paldinrome then return true, otherwise return false <br>
Time Complexity - O(n*k), n is the length of array and k is the length of each string <br>
Space Complexity - O(1), no extra space is being used (ignoring the temporary string conversion) <br>

____________________________________________________________________________________________________________

## Question 22 <br>
### Array Subset <br>
Given two arrays a[] and b[], your task is to determine whether b[] is a subset of a[]. <br>
Examples: <br>
Input: a[] = [11, 7, 1, 13, 21, 3, 7, 3], b[] = [11, 3, 7, 1, 7] <br>
Output: true <br>
Explanation: b[] is a subset of a[] <br>
Input: a[] = [10, 5, 2, 23, 19], b[] = [19, 5, 3] <br>
Output: false <br>
Explanation: b[] is not a subset of a[] <br>
Approach:- <br>
Using maps store each arrays elements count to two maps both for array <br>
And iterate on the b array check if its elemnts count is less than in its map to the a's map , then return false
Else return true <br>
Time Complexity - O(n+m), n is the size of a array and m is the size of b array <br>
Space Complexity - O(n+m), n is the size of a array and m is the size of b array <br>

______________________________________________________________________________________________________

## Question 23 <br>
### More than n/k Occurrences <br>
Given an array arr and an element k. The task is to find the count of elements in the array that appear more than n/k times and n is length of arr. <br>
Examples : <br>
Input: arr = [3, 1, 2, 2, 1, 2, 3, 3], k = 4 <br>
Output: 2 <br>
Explanation: In the given array, 3 and 2 are the only elements that appears more than n/k times. <br>
Input: arr = [2, 3, 3, 2], k = 3 <br>
Output: 2 <br>
Explanation: In the given array, 3 and 2 are the only elements that appears more than n/k times. So the count of elements are 2. <br>
Approach:- <br>
Using map store all elements count to a map <br>
Now iterate over map check whose occurence is greate than n/k time , increase the counter by one <br>
Return the counter <br>
Time Complexity-O(n), n is the length of array <br>
Space Complexity- O(k), k is the unique elements in array <br>
______________________________________________________________________________________________________

## Question 24 





