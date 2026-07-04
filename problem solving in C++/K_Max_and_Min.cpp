    // K. Max and Min
    // time limit per test0.25 seconds
    // memory limit per test64 megabytes
    // Given 3 numbers A, B and C, Print the minimum and the maximum numbers.

    // Input
    // Only one line containing 3 numbers A, B and C ( - 105 ≤ A, B, C ≤ 105)

    // Output
    // Print the minimum number followed by a single space then print the maximum number.

    // Examples
    // InputCopy
    // 1 2 3
    // OutputCopy
    // 1 3
    // InputCopy
    // -1 -2 -3
    // OutputCopy
    // -3 -1
    // InputCopy
    // 10 20 -5
    // OutputCopy
    // -5 20



 #include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int mn = a, mx = a;

    if(b < mn) mn = b;
    if(c < mn) mn = c;

    if(b > mx) mx = b;
    if(c > mx) mx = c;

    cout << mn << " " << mx << endl;

    return 0;
}