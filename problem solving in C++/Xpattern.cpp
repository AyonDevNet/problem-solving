// Problem Statement

// You will be given an positive odd integer N, you need to print the pattern for it. See sample input and output for understanding the pattern.

// Input Format

// Input will contain only N.
// Constraints

// 1 <= N <= 20 and N is odd.
// Output Format

// Output the pattern.
// Sample Input 0

// 5
// Sample Output 0

// \   /
//  \ / 
//   X  
//  / \ 
// /   \
// Sample Input 1

// 7
// Sample Output 1

// \     /
//  \   / 
//   \ /  
//    X   
//   / \  
//  /   \ 
// /     \
// Sample Input 2

// 3
// Sample Output 2

// \ /
//  X 
// / \
// Sample Input 3

// 1
// Sample Output 3

// X


#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
     cin >> n;

      if (n == 1) {
          cout << "X" << endl;
    } 
    else {
          int mid = n / 2;

         for (int row = 0; row < n; row++) {
              string line(n, ' ');

             if (row < mid) {
                line[row] = '\\';
 
                line[n - 1 - row] = '/';

            } 
            else if (row == mid) {

                line[mid] = 'X';

            }
            else {
                int mirror = n - 1 - row;

                line[mirror] = '/';
                line[n - 1 - mirror] = '\\';
            }

            cout << line << "\n";
        }
    }

    return 0;
}