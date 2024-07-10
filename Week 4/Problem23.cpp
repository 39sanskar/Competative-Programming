// C. Carnival of Joyville
// time limit per test1 s.
// memory limit per test256 MB
// inputstandard input
// outputstandard output
// Priyam is participating in a carnival game in the whimsical town of Joyville. There are n
//  balloons, numbered from left to right from 1
//  to n
// . The balloon on position f
//  is Priyam's favorite.

// Each balloon has a number ai
//  (1≤ai≤100)
//  written on it. Without informing Priyam, a carnival worker arranges the balloons in the non-increasing order on the basis of number written on them (balloon with larger number is placed before the balloon with smaller number). If two balloons have the same number on them, they can be placed in any order.

// After sorting, the carnival worker pops the first k
//  balloons. Priyam wonders if his favorite balloon will be popped (note that its position might have changed after sorting).

// For example, if n=5
// , f=2
// , a=[4,3,3,2,3]
//  (Priyam's favorite balloon is highlighted in green), and k=2
// , the following scenarios could occur:

// After sorting a=[4,3,3,3,2]
// , since the favorite balloon ended up in the second position, it will be popped.
// After sorting a=[4,3,3,3,2]
// , since the favorite balloon ended up in the third position, it will not be popped.
// Input
// The first line contains an integer t
//  (1≤t≤1000
// ) — the number of test cases. The descriptions of the test cases follow.

// The first line of each test case description contains three integers n
// , f
// , and k
//  (1≤f,k≤n≤100
// ) — the number of balloons, the number of Priyam's favorite balloon, and the number of balloons to be popped, respectively.

// The second line of each test case description contains n
//  integers ai
//  (1≤ai≤100
// ) — the scores on the balloons.

// Output
// For each test case, output one line — "YES" if the balloon will be popped in all cases, "NO" if it will not be popped in any case, "MAYBE" if it may or may not be popped.

// You can output the answer in any case. For example, the strings "YES", "nO", "mAyBe" will be accepted as answers.

// Example
// inputCopy
// 12
// 5 2 2
// 4 3 3 2 3
// 5 5 3
// 4 2 1 3 5
// 5 5 2
// 5 2 4 1 3
// 5 5 5
// 1 2 5 4 3
// 5 5 4
// 3 1 2 4 5
// 5 5 5
// 4 3 2 1 5
// 6 5 3
// 1 2 3 1 2 3
// 10 1 1
// 1 1 1 1 1 1 1 1 1 1
// 1 1 1
// 42
// 5 2 3
// 2 2 1 1 2
// 2 1 1
// 2 1
// 5 3 1
// 3 3 2 3 2
// outputCopy
// MAYBE
// YES
// NO
// YES
// YES
// YES
// MAYBE
// MAYBE
// YES
// YES
// YES
// NO
