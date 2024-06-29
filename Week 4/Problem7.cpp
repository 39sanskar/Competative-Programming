// B. Mark the Dust Sweeper
// time limit per test1.5 seconds
// memory limit per test256 megabytes
// inputstandard input
// outputstandard output
// Mark is cleaning a row of n
//  rooms. The i
// -th room has a nonnegative dust level ai
// . He has a magical cleaning machine that can do the following three-step operation.

// Select two indices i<j
//  such that the dust levels ai
// , ai+1
// , …
// , aj−1
//  are all strictly greater than 0
// .
// Set ai
//  to ai−1
// .
// Set aj
//  to aj+1
// .
// Mark's goal is to make a1=a2=…=an−1=0
//  so that he can nicely sweep the n
// -th room. Determine the minimum number of operations needed to reach his goal.
// Input
// The first line contains a single integer t
//  (1≤t≤104
// ) — the number of test cases.

// The first line of each test case contains a single integer n
//  (2≤n≤2⋅105
// ) — the number of rooms.

// The second line of each test case contains n
//  integers a1
// , a2
// , ..., an
//  (0≤ai≤109
// ) — the dust level of each room.

// It is guaranteed that the sum of n
//  across all test cases does not exceed 2⋅105
// .

// Output
// For each test case, print a line containing a single integer — the minimum number of operations. It can be proven that there is a sequence of operations that meets the goal.

// Example
// inputCopy
// 4
// 3
// 2 0 0
// 5
// 0 2 0 2 0
// 6
// 2 0 3 0 4 6
// 4
// 0 0 0 10
// outputCopy
// 3
// 5
// 11
// 0
// Note
// In the first case, one possible sequence of operations is as follows.

// Choose i=1
//  and j=2
// , yielding the array [1,1,0]
// .
// Choose i=1
//  and j=3
// , yielding the array [0,1,1]
// .
// Choose i=2
//  and j=3
// , yielding the array [0,0,2]
// .
// At this point, a1=a2=0
// , completing the process.
// In the second case, one possible sequence of operations is as follows.

// Choose i=4
//  and j=5
// , yielding the array [0,2,0,1,1]
// .
// Choose i=2
//  and j=3
// , yielding the array [0,1,1,1,1]
// .
// Choose i=2
//  and j=5
// , yielding the array [0,0,1,1,2]
// .
// Choose i=3
//  and j=5
// , yielding the array [0,0,0,1,3]
// .
// Choose i=4
//  and j=5
// , yielding the array [0,0,0,0,4]
// .
// In the last case, the array already satisfies the condition.


