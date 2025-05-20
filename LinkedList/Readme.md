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