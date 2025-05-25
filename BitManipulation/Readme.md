## 1. Question <br>
### Count number of 1 bits in number <br>
Given a positive integer n. Your task is to return the count of set bits. <br>
Examples: <br>
Input: n = 6 <br>
Output: 2 <br>
Explanation: Binary representation is '110', so the count of the set bit is 2. <br>
Approach:- <br>
We know if perfrom & operation on a number it perfrom with its last bit and if its one it return true and if its not it returns false, so by using this keep perfroming & operation till n becomes 0 and use right shift operator to shift bits to the last bit. <br>
Time Complexity-O(n), n is length of number <br>
SpaceComplexity-O(1) <br>

_______________________________________________________________________________________________________

## 2. Question <br>
### Bit Diffrence <br>
You are given two numbers a and b. The task is to count the number of bits needed to be flipped to convert a to b. <br>
Examples: <br>
Input: a = 10, b = 20 <br>
Output: 4 <br>
Explanation: <br>
a  = 01010 <br>
b  = 10100 <br>
As we can see, the bits of A that need to be flipped are 01010. If we flip these bits, we get 10100, which is B. <br>
Approach:- <br>
If we do XOR of both number it will generate a new number who will have 1 as bit where both of bits were diffrent in a and b  <br>
Now just count the number of 1 bits in new result by perfroming & operation and right shifting it and return the result <br>
Time Complexity-O(n), n is the length of a^b <br>
Space Complexity -O(1) <br>

_______________________________________________________________________________________________________________
