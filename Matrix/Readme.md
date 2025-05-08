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
### Search in 2d Matrix
You are given an m x n integer matrix matrix with the following two properties:
Each row is sorted in non-decreasing order.
The first integer of each row is greater than the last integer of the previous row.
Given an integer target, return true if target is in matrix or false otherwise.
Approach:-
Simple apply binary search in each row to find the number as all rows are sorted 
And if you find answer just return true else false
Time Complexity-O(n*(logm))
Space Complexity-O(1)

___________________________________________________________________________