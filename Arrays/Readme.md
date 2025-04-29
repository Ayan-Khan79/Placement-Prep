1 Question:  
Find duplicate in an Array(leetcode -287)  
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

2 Question: <br>
Merge Intervals (Leetcode - 56) <br>
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

3 Question:
Next Permutation (Leetcode - 31)
A permutation of an array of integers is an arrangement of its members into a sequence or linear order.

For example, for arr = [1,2,3], the following are all the permutations of arr: [1,2,3], [1,3,2], [2, 1, 3], [2, 3, 1], [3,1,2], [3,2,1].
The next permutation of an array of integers is the next lexicographically greater permutation of its integer. More formally, if all the permutations of the array are sorted in one container according to their lexicographical order, then the next permutation of that array is the permutation that follows it in the sorted container. If such arrangement is not possible, the array must be rearranged as the lowest possible order (i.e., sorted in ascending order).

For example, the next permutation of arr = [1,2,3] is [1,3,2].
Similarly, the next permutation of arr = [2,3,1] is [3,1,2].
While the next permutation of arr = [3,2,1] is [1,2,3] because [3,2,1] does not have a lexicographical larger rearrangement.
Given an array of integers nums, find the next permutation of nums.
The replacement must be in place and use only constant extra memory.
Example 1:
Input: nums = [1,2,3]
Output: [1,3,2]
Example 2:
Input: nums = [3,2,1]
Output: [1,2,3]
Example 3:
Input: nums = [1,1,5]
Output: [1,5,1]

Approach :-
1 Brute Force :- Find all the permutation in sorted order and then apply linear search for that array and then return the next permutaion as next pewrmutation
Time Compllexity - O(n!*n)
2 Using STL of c++ :- there is a stl next_permutation to generate the np for the array just pass the begin and end of the array
3 Optimal Solution :- first find the breakpoint in the array starting from n-2 where nums[i]<nums[i+1] store the i and then break
Now if the index is still -1 then return the reverse the of array that will be edge case
if the index is not -1 then strat a loop from last to the begin and find where nums[i]>nums[index] , there swap the values and then break;
at last reverse the array from the index to the last and return that array
Time Complexity - O(n) + O(n) + O(n)=> O(n)

_____________________________________________

4 Questions:
Best Time to Buy and Sell Stock (Leetcode - 121)
You are given an array prices where prices[i] is the price of a given stock on the ith day.
You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.
Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.
Example 1:
Input: prices = [7,1,5,3,6,4]
Output: 5
Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.
Example 2:
Input: prices = [7,6,4,3,1]
Output: 0
Explanation: In this case, no transactions are done and the max profit = 0.

Approach:-
1. Brute Force:- Set the minimum amount to nums[0] and start a loop from 1 to n and then calculate the diffrence between the dates[i] to the minimum
Then calculate the max profit that will be the max of current profit and the diffrence and also update the minimum as approaching further so that scope also increase 
minimum will be min(minmum,nums[i]) in every ietration
Time Complexity - O(n);

_______________________________________________

5 Question:
Array and String Reversal (GFG)
Example 1:
Input : [1,2,3,4,5]
Output: [5,4,3,2,1]
Example 2:
Input : ayan
Output: naya

Approach:-
Using two pointers on both array and string one at front and one at last and swap both positions until both pointers cross each other
Time Complexity - O(n)

___________________________________________________

6 Question:
Find max and min in an Array
Example 1:
Intput: [1,2,3,4,5]
Output: 5,1
Example 2:
Input: [6,7,8,9,4,3]
Output: 9,3

Approach:-
Simply traverse the array and compare the each element with answer if the element is greater than answer update it to the answer and do the same for the minimum also and return the answer
Time Complexity - O(n)

___________________________________________________

7 Question:
Find Kth Smallest Element in Array
Example 1:
Input: [1,2,3,4,5] k=3
Output: 3
Input: [5,6,7,8,9] k=4
Output: 8

Approach :- Simply sort the array and return the (k-1)th index value as answer
Time Complexity - O(n)

_______________________________________________________

8 Question:
Sort 0 1 and 2 in array
Given an array arr[] containing only 0s, 1s, and 2s. Sort the array in ascending order.
You need to solve this problem without utilizing the built-in sort function.
Examples:
Input: arr[] = [0, 1, 2, 0, 1, 2]
Output: [0, 0, 1, 1, 2, 2]
Explanation: 0s 1s and 2s are segregated into ascending order.
Input: arr[] = [0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1]
Output: [0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 2, 2]
Explanation: 0s 1s and 2s are segregated into ascending order.

Approach:-
1 Brute Force :- Using extra space create a new array of same size and count the number of zer one and two and fill the array.
Time Complexity -O(n), Space Complexity - O(n)
2 Two Pointers :- set the firt pointer to set 0 at starting and second pointer j at last to set 2 and make an k pointer as iterator
If arr[k]==0, swap it with arr[k],arr[i] and i++,k++
If arr[k]==1 , dont do anything just move forward as one will come automatically in between k++
If arr[k]==2, Swap it with arr[k],arr[j], then only decrease j-- beacause there is a chance that swapped value can be 0 and we need to check for it
Now when the k>=j the loop will terminate and our array will be sorted
Time Complexity - O(n), Space Complexity - O(1)

_________________________________________________

9 Question:
Move all Negative to starting of Array
Given an array containing both positive and negative numbers in random order. The task is to rearrange the array elements so that all negative numbers appear before all positive numbers.
Example 1:
Input: -12, 11, -13, -5, 6, -7, 5, -3, -6
Output: -12 -13 -5 -7 -3 -6 11 6 5
Example 2:
Input : 1 2 -3 -4 -5 6 7
Output: -3 -4 -5 1 2 6 7

Approach:-
1 Brute Force :- Using In built sort function 
Time Complexity - O(nlogn)
2 Two Pointer :- using two pointer i and j set i to starting of array that will set negative number and j to last of array that will set positive number and a k iterator that will traverse the array
Time Complexity - O(n)

____________________________________________________


10 Question:
Union of Arrays with Duplicates
Given two arrays a[] and b[], the task is to find the number of elements in the union between these two arrays.
The Union of the two arrays can be defined as the set containing distinct elements from both arrays. If there are repetitions, then only one element occurrence should be there in the union.
Note: Elements of a[] and b[] are not necessarily distinct.
Examples:
Input: a[] = [1, 2, 3, 4, 5], b[] = [1, 2, 3]
Output: 5
Explanation: Union set of both the arrays will be 1, 2, 3, 4 and 5. So count is 5.
Input: a[] = [85, 25, 1, 32, 54, 6], b[] = [85, 2] 
Output: 7
Explanation: Union set of both the arrays will be 85, 25, 1, 32, 54, 6, and 2. So count is 7.

Approach:-
1 using sorting :- Sort both arrays and start fill the new array with both elements skipping the duplicate one
Time Complexity - O(nlogn) + O(mlogm) , Space Complexity - O(n+m)
2 Using Unordered Set :- We know that set contains only unique elements if we inser elements of both the arrays it will atumatically insert unique ones.
Time Complexity - O(n+m) as insertion takes O(1) in unordered set , Space Complexity - O(n+m);

___________________________________________________________


11 Question:
Rotate Array by One
Given an array arr, rotate the array by one position in clockwise direction.
Examples:
Input: arr[] = [1, 2, 3, 4, 5]
Output: [5, 1, 2, 3, 4]
Explanation: If we rotate arr by one position in clockwise 5 come to the front and remaining those are shifted to the end.
Input: arr[] = [9, 8, 7, 6, 4, 2, 1, 3]
Output: [3, 9, 8, 7, 6, 4, 2, 1]
Explanation: After rotating clock-wise 3 comes in first position.

Approach:-
First reverse the array from kth position to last position , then reverse array from starting to k-1 position, and then again reverse array array from starting to the end
You will get your rotated array by k steps , here k=1 so no other need to reverse kth to last just reverse start to k-1 position and then reverse start to last
Time Complexity - O(n-k) +O(k)=> O(n)

_______________________________________________________________


12 Question
Kadane Algorithm
Given an integer array arr[]. You need to find the maximum sum of a subarray.
Examples:
Input: arr[] = [2, 3, -8, 7, -1, 2, 3]
Output: 11
Explanation: The subarray {7, -1, 2, 3} has the largest sum 11.
Input: arr[] = [-2, -4]
Output: -2
Explanation: The subarray {-2} has the largest sum -2.
Input: arr[] = [5, 4, 1, 7, 8]
Output: 25
Explanation: The subarray {5, 4, 1, 7, 8} has the largest sum 25.

Approach:-
