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
 
## 4. Question <br>
### Detect loop in Linked List <br>
You are given the head of a singly linked list. Your task is to determine if the linked list contains a loop. A loop exists in a linked list if the next pointer of the last node points to any other node in the list (including itself), rather than being null. <br>
Custom Input format: <br>
A head of a singly linked list and a pos (1-based index) which denotes the position of the node to which the last node points to. If pos = 0, it means the last node points to null, indicating there is no loop. <br>
Examples: <br>
Input: head: 1 -> 3 -> 4, pos = 2 <br>
Output: true <br>
Explanation: There exists a loop as last node is connected back to the second node. <br>
Approach:- <br>
Uisng slow and fast poineters <br>
Se fast and slow pointers at head in starting and move fast by two positions and slow by one position and check if fast == slow , if that happens then there is a loop in the linked list and return true else return false <br>
Time COmplexity-O(n) <br>
Space Complexity-O(1) <br>

_______________________________________________________________________________________________________

## 5. Question <br>
### Remove loop from Linked List <br>
Given the head of a linked list that may contain a loop.  A loop means that the last node of the linked list is connected back to a node in the same list. The task is to remove the loop from the linked list (if it exists). <br>
Examples: <br>
Input: head = 1 -> 3 -> 4, pos = 2 <br>
Output: true <br>
Approach:-<br>
Using fast and slow pointers <br>
Make two pointers fast and slow at head and move fast by two positions and slow by one position and check if fast  == slow , then break from the loop<br>
Now check wether the fast == NULL or fast->next == NULL, if that happens then there is no loop in the linked list and return from function<br>
If not then find starting point of the loop by making slow at head and fast at starting point of the loop and move both pointers by one position till both pointers are not equal  <br>
Now make a temporary pointer and point it to the next of the starting point of the loop and make it move till each reaches one step earlier than the starting point of the loop <br>
Now make temp poiinter point to NULL and return from funnction <br>
Time Complexity-O(n) <br>
Space Complexity-O(1) <br>

________________________________________________________________________________________________________

## 6. Question  <br>
### First Node of Loop  <br>
Given a head of the singly linked list. If a loop is present in the list then return the first node of the loop else return NULL.  <br>
Input:1->2->3->4->5 pos = 3  <br>
Output: 3  <br>
Explanation: We can see that there exists a loop in the given linked list and the first node of the loop is 3.  <br>
Approach:-  <br>
Using fast and slow pointers <br>
Make two pointers fast and slow at head and move fast by two positions and slow by one position and check if fast  == slow , then break from the loop<br>
Now check wether the fast == NULL or fast->next == NULL, if that happens then there is no loop in the linked list and return from function<br>
If not then find starting point of the loop by making slow at head and fast at starting point of the loop and move both pointers by one position till both pointers are not equal  <br>
Now return any pointer slow or fast
Time Complexity-O(n) <br>
Space Complexity-O(1) <br>