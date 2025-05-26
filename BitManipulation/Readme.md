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

## 3. Question <br> 
### Power of 2 <br>
Given a non-negative integer n. The task is to check if it is a power of 2.  <br>
Examples <br>
Input: n = 8 <br>
Output: true <br>
Explanation: 8 is equal to 2 raised to 3 (2^3 = 8). <br>
Approach:- <br>
If a number is of power of then it will only have 1 as single bit and others as 0 bit <br>
So if we count 1 bits and check if it is greater than 1 then it is not power of 2 <br>
Else it is power of 2 <br>
Time Complexity-O(logn), n is the length of the number <br>
Space Complexity-O(1) <br>

___________________________________________________________________________________________


## 4. Question <br>
### Find Position of Set Bit <br>
Given a number n having only one ‘1’ and all other ’0’s in its binary representation, find the position of the only set bit. If there are 0 or more than 1 set bit the answer should be -1. The position of set bit '1' should be counted starting with 1 from the LSB side in the binary representation of the number. <br>
Examples: <br>
Input: n = 2 <br>
Output: 2 <br>
Explanation: 2 is represented as "10" in Binary. As we see there's only one set bit and it's in position 2. <br>
Input: n = 5 <br>
Output: -1 <br>
Explanation: 5 is represented as "101" in Binary. As we see there's two set bits and thus the output -1. <br>
Approach:- <br>
We know if we perfrom & operation with the lsb and is its set it will give true and if its not set then then it will give false <br>
Then maintain a position counter and and bit counter varibale to count total no of set bits and its position <br>
If the count of set bits is greater than 1 then return -1 <br>
else return the position <br>
Time Complexity-O(logn), n is the length of the number <br>
Space Complexity-O(1) <br>

_______________________________________________________________________________________________________________


