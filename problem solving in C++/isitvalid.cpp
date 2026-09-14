// Problem Statement
// Given a string S containing just the characters and , determine if the input string is valid.
// An input string is valid if the string is empty after doing some operatios. The available operations are:

// 1. can delete its previous available character along with itself. If there is no available to delete, it will not delete itself.
// 2. can delete its previous available character along with itself. If there is no available to delete, it will not delete itself.

// Note: You need to solve it using STL Stack or Queue only.
// Input Format

// * First line will contain T , the number of test cases.
// * Next lines will contain the string .

// Constraints 1. 1 ≤ T ≤ 1000 2. 1 ≤ |S| ≤ 1000, where |S| denotes the length of the string.

// Output Format

// * Output YES if the string is valid, otherwise NO.

// Sample Input 0

// ```
// 10
// 0011
// 1010
// 1100
// 0101
// 0001
// 0111
// 0110
// 100101
// 1110010
// 0001011011

// ```

// Sample Output 0

// ```
// YES
// YES
// YES
// YES
// NO
// NO
// YES
// YES
// NO
// YES
// ```

#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    int t;

    cin >> t;


    while (t--) {
        string s;

        cin >> s;

        stack<char> st;

        for (int i = 0; i < (int)s.size(); i++) {

            char c = s[i];

            if (st.empty()) {

                st.push(c);

            } else if (st.top() == c) {

                st.push(c);

            } else {

                st.pop();
            }
        }

        cout << (st.empty() ? "YES" : "NO") << endl;
    }

    return 0;
}