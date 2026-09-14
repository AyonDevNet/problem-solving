// Question: Container With Most Water

// You are given an array H containing the heights of N vertical lines. The lines are positioned at equally spaced intervals.

// Find the two lines that can form a container capable of holding the maximum amount of water.

// The amount of water between two lines at indices i and j is calculated as:

// Water = (j - i) × min(H[i], H[j])

// You must output the indices of the two lines that can hold the maximum amount of water.

// Note: Print the left index first, followed by the right index.

// Example

// Input:

// 2
// 9
// 1 8 3 4 0 7 6 5 2
// 5
// 5 2 1 6 3

// Output:

// 1 5
// 0 3
// Constraints
// 1 ≤ T ≤ 1000
// 2 ≤ N ≤ 100000
// 0 ≤ H[i] ≤ 10^9
// Expected Approach

// Use the Two-Pointer Technique to solve the problem efficiently.

// Time Complexity:  O(N)
// Space Complexity: O(N)


#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        vector<long long> H(N);

        for (int i = 0; i < N; i++)
        {
            cin >> H[i];
        }

        int first = 0;
        int second = 1;

        if (H[second] > H[first])
        {
            swap(first, second);
        }

        for (int i = 2; i < N; i++)
        {
            if (H[i] > H[first])
            {
                second = first;
                first = i;
            }
            else if (H[i] > H[second])
            {
                second = i;
            }
        }

        if (first < second)
        {
            cout << first << " " << second << '\n';
        }
        else
        {
            cout << second << " " << first << '\n';
        }
    }

    return 0;
}