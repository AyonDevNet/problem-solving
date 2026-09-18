// ## Tetranacci Sequence — Question

// The **Tetranacci sequence** is an extension of the well-known Fibonacci sequence, incorporating four previous terms instead of two.

// The Tetranacci sequence **Tₙ** is defined as follows:

// * **T₀ = 0**
// * **T₁ = 1**
// * **T₂ = 1**
// * **T₃ = 2**

// For **n ≥ 4**:

// **Tₙ = Tₙ₋₁ + Tₙ₋₂ + Tₙ₋₃ + Tₙ₋₄**

// Given an integer **n**, return the value of **Tₙ**.

// > **Note:** You must solve this problem using **Loop (Bottom Up)**.

// ### Input Format

// A single integer `n` representing the position in the Tetranacci sequence.

// ### Constraints

// The result is guaranteed to fit within a **64-bit signed integer** (`2⁶³ - 1`).

// ### Output Format

// Print a single integer, the value of **Tₙ**.

// ### Sample Input 0

// 4


// ### Sample Output 0

// 4


// ### Explanation 0

// T4 = T3 + T2 + T1 + T0
//    = 2 + 1 + 1 + 0
//    = 4

// ### Sample Input 1

// 5


// ### Sample Output 1

// 8

// ### Explanation 1

// T5 = T4 + T3 + T2 + T1
//    = 4 + 2 + 1 + 1
//    = 8



#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n == 0)
    {
        cout << 0;

    }

    else if (n == 1)
    {

        cout << 1;
    }

    else if (n == 2)
    {

        cout << 1;
    }
    else if (n == 3)
    {

        cout << 2;
    }
    else
    {
        long long t0 = 0;

        long long t1 = 1;

        long long t2 = 1;

        long long t3 = 2;
        long long tn;

        for (int i = 4; i <= n; i++)
        {
            tn = t3 + t2 + t1 + t0;

            t0 = t1;

            t1 = t2;

            t2 = t3;
            t3 = tn;
        }

        
        cout << t3;
    }

    return 0;
}