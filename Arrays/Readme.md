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

2 Question:
Merge Intervals (Leetcode - 56)
Given an array of intervals where intervals[i] = [starti, endi], merge all overlapping intervals, and return an array of the non-overlapping intervals that cover all the intervals in the input.

Example 1:
Input: intervals = [[1,3],[2,6],[8,10],[15,18]]
Output: [[1,6],[8,10],[15,18]]
Explanation: Since intervals [1,3] and [2,6] overlap, merge them into [1,6].
Example 2:
Input: intervals = [[1,4],[4,5]]
Output: [[1,5]]
Explanation: Intervals [1,4] and [4,5] are considered overlapping.

Approach :-
Take an answer array of arrays , then take a prev array and set it to the first array of nums and start a loop from 1 to n and inside check if the prev[1]>=temp[0], if so then change the prev[1] to the max of temp[1] and prev[1] and loop will continue 
Else not then push the prev array to answer and then make the temp array as prev array and then continue 
At last push the last temp array to answer as it has not been chcecked with any other array
and return the ans.
Time Complexity- O(n logn)

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
