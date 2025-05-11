## Question 1 <br>
### Rotate matrix by 90 degree <br>
Given a square mat[][]. The task is to rotate it by 90 degrees in clockwise direction without using any extra space. <br>
Examples: <br>
Input: mat[][] = [[1 2 3], [4 5 6], [7 8 9]] <br>
Output: <br>
7 4 1  <br>
8 5 2 <br>
9 6 3 <br>
Approach:-
First find the transpose of the matrix by swapping every element with its reverse position like arr[i][j]=arr[j][i]
Then reverse each row in the matrix and your matrix will be rotated by 90 degree.
Time Complexity-O(n*(m*n))
Space Complexity-O(1)

__________________________________________________________________

## Question 2 <br>
### Search in 2d Matrix <br>
You are given an m x n integer matrix matrix with the following two properties: <br>
Each row is sorted in non-decreasing order. <br>
The first integer of each row is greater than the last integer of the previous row. <br>
Given an integer target, return true if target is in matrix or false otherwise. <br>
Approach:- <br>
Simple apply binary search in each row to find the number as all rows are sorted  <br>
And if you find answer just return true else false <br>
Time Complexity-O(n*(logm)) <br>
Space Complexity-O(1) <br>

___________________________________________________________________________


## Question 3 <br>
### Row with max 1 <br>
You are given a 2D binary array arr[][] consisting of only 1s and 0s. Each row of the array is sorted in non-decreasing order. Your task is to find and return the index of the first row that contains the maximum number of 1s. If no such row exists, return -1. <br>
Note: <br>
The array follows 0-based indexing. <br>
The number of rows and columns in the array are denoted by n and m respectively. <br>
Examples: <br>
Input: arr[][] = [[0,1,1,1], [0,0,1,1], [1,1,1,1], [0,0,0,0]] <br>
Output: 2 <br>
Explanation: Row 2 contains the most number of 1s (4 1s). Hence, the output is 2. <br>
Approach:- <br>
Count all 1 in every row and update maxcount and if the maxCount is updated then update the ans index with ith index <br>
Time Complexity-O(n*m) <br>
Time Complexity-O(1) <br>

__________________________________________________________________________________________


## Question 4  <br>
### Sort the Matrix  <br>
Given an NxN matrix Mat. Sort all elements of the matrix.  <br>
Example 1:  <br>
Input:  <br>
N=4   <br>
Mat=[[10,20,30,40], <br>
[15,25,35,45]  <br>
[27,29,37,48]  <br>
[32,33,39,50]] <br>
Output: <br>
10 15 20 25  <br>
27 29 30 32 <br>
33 35 37 39 <br>
40 45 48 50 <br>
Explanation: <br>
Sorting the matrix gives this result. <br>
Approach:- <br>
Take an empty vector temp of 1d of size n*m and fill it with all the elements of array and sort it using stl <br>
Then make another 2d vector ans of same size as original array and start filling it from the starting of the temp array till its last <br>
Time Complexity-O(n^2logn) <br>
Space Complexity-O(n^2) <br>

__________________________________________________________________________________________________


## Question 5 <br>
### Spirally traversing a matrix <br>
You are given a rectangular matrix mat[][] of size n x m, and your task is to return an array while traversing the matrix in spiral form. <br>
Examples: <br>
Input: mat[][] = [[1, 2, 3, 4], [5, 6, 7, 8], [9, 10, 11, 12], [13, 14, 15, 16]] <br>
Output: [1, 2, 3, 4, 8, 12, 16, 15, 14, 13, 9, 5, 6, 7, 11, 10] <br>
Approach:- <br>
Take a count as 0 and finalCount m*n as total number of elements in matrix <br>
Now start a while loop till count reaches  1 less than finalCount <br>
now take four pointers as startrow endrow startcol and endcol and with the help of them traverse firstRow lastCol lastRow and firstCol one by one in the while loop and keep printing each element and keep increasing count and also keep updating pointers once you are done with printing that row or column <br>
Time Complexity-O(n*m) <br>
Space Complexity-O(n+m) <br>

_____________________________________________________________________________________________________


