// You are given an array 
//  of length 
//  which consists of non-negative integers. Note that array indices start from zero.

// An array is called good if the parity of each index matches the parity of the element at that index. More formally, an array is good if for all 
//  (
// ) the equality 
//  holds, where 
//  is the remainder of dividing 
//  by 2.

// For example, the arrays [
// ] and [
// ] are good, and the array [
// ] is bad, because for 
// , the parities of 
//  and 
//  are different: 
// , but 
// .

// In one move, you can take any two elements of the array and swap them (these elements are not necessarily adjacent).

// Find the minimum number of moves in which you can make the array 
//  good, or say that this is not possible.

// Input
// The first line contains a single integer 
//  (
// ) — the number of test cases in the test. Then 
//  test cases follow.

// Each test case starts with a line containing an integer 
//  (
// ) — the length of the array 
// .

// The next line contains 
//  integers 
//  (
// ) — the initial array.

// Output
// For each test case, output a single integer — the minimum number of moves to make the given array 
//  good, or -1 if this is not possible.

// Example
// inputCopy
// 4
// 4
// 3 2 7 6
// 3
// 3 2 6
// 1
// 7
// 7
// 4 9 2 1 18 3 0
// outputCopy
// 2
// 1
// -1
// 0

#include <iostream>
#include <vector>

using namespace std;

vector<int> make_good_array(int t, vector<pair<int, vector<int>>> test_cases) {
    vector<int> results;

    for (const auto& case_info : test_cases) {
        int n = case_info.first;
        const vector<int>& a = case_info.second;

        int odd_misplaced_even = 0;
        int even_misplaced_odd = 0;

        for (int i = 0; i < n; ++i) {
            if (i % 2 == 0) {
                if (a[i] % 2 != 0) {
                    even_misplaced_odd += 1;
                }
            } else {
                if (a[i] % 2 == 0) {
                    odd_misplaced_even += 1;
                }
            }
        }

        if (odd_misplaced_even == even_misplaced_odd) {
            results.push_back(odd_misplaced_even);
        } else {
            results.push_back(-1);
        }
    }

    return results;
}

int main() {
    int t;
    cin >> t;
    
    vector<pair<int, vector<int>>> test_cases(t);
    
    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n;
        
        vector<int> a(n);
        for (int j = 0; j < n; ++j) {
            cin >> a[j];
        }
        
        test_cases[i] = {n, a};
    }
    
    vector<int> results = make_good_array(t, test_cases);
    
    for (int result : results) {
        cout << result << endl;
    }
    
    return 0;
}

