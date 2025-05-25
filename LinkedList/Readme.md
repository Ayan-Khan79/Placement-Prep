## 1. Question <br>
### Rotate doubly Linked List <br>
Given a doubly linked list, rotate the linked list counter-clockwise by P nodes. Here P is a given positive integer and is smaller than the count of nodes(N) in a linked list. <br>
Examples : <br>
Input: Doubly Linkedlist: 1 <-> 2 <-> 3 <-> 4 <-> 5 <-> 6 ,p = 2 <br>
Output: 3 <-> 4 <-> 5 <-> 6 <-> 1 <-> 2 <br>
Explanation: Doubly linked list after rotating <br>
2 nodes is: 3 4 5 6 1 2. <br>
Approach:- <br>
Traverse to the pth node , Detach it from there and attach it to the last of the list and retun the list <br>
Time Complexity-O(n),n is the length of linked list <br>
Space Complexity - O(1) <br>

____________________________________________________________________________________

## 2. Question <br>
### Middle of Linked List <br>
Given the head of a singly linked list, return the middle node of the linked list. <br>
If there are two middle nodes, return the second middle node. <br>
Example 1: <br>
Input: head = [1,2,3,4,5] <br>
Output: [3,4,5] <br>
Explanation: The middle node of the list is node 3. <br>
Approach:- <br>
1. Count the number of nodes in the list and return the n/2th node as middle node. <br>
2. using Slow and fast pointers , Move fast pointer by two positions ans low by one and when the fast reaches the last of the List, Slow will be at the middle node and return it. <br>
Time Complexity-O(n) <br>
Space Complexity -O(1) <br>

____________________________________________________________________________________________________________

## 3. Question <br>
### Reverse a List <br>
Given the head of a linked list, the task is to reverse this list and return the reversed head. <br>
Examples: <br>
Input: head: 1 -> 2 -> 3 -> 4 -> NULL <br>
Output: head: 4 -> 3 -> 2 -> 1 -> NULL <br>
Approach:- <br>
Using three pointers Current , previous and next we can reverse the list <br>
State previous to NULL and current to head and start a loop until current pointer becomes null <br>
Make a next node and point to current->next as we do not lost track of next node while changing pointers <br>
Now make current node point to previous node and and move pointers by one place  <br>
Make previous point to current and current to next node <br>
Time Complexity-O(n), n is length of list <br>
Space Complexity -O(1) <br>

___________________________________________________________________________________________________

