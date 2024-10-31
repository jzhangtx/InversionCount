Inversion Count


The inversion count of an array denotes how far is the array from being sorted.

If the array is sorted, inversion count is 0. If the array is sorted in reverse order, the inversion count is maximum.

More formally, the inversion count of an array A is the number of pairs (i, j) such A[i] < A[j] and i > j.

Example
Lets take the following array:
8, 4, 1, 2

This array has an inversion count of 5.
(8, 4), (8, 1), (8, 2), (4, 1), (4, 2)

Given an array A, calculate the inversion count of the array.

Testing
Input Format
First-line contains ‘T’ denoting the number of test cases.

For each test case

The first line contains an integer ‘n’ denoting the length of the array.
The second line contains n space-separated integers of the array.
Output Format
One line for each test-case, denoting the inversion count of the array.

Sample Input
3
5
1 1 2 2 3
3
3 2 1
5
10 1 2 3 4
Expected Output
0
3
4