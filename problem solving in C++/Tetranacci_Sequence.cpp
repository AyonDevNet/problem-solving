// Sure — here is the **question only**, without the answer:



// ## Tetranacci Sequence

// The **Tetranacci sequence** is an extension of the well-known Fibonacci sequence, incorporating four previous terms instead of two.

// The Tetranacci sequence **Tₙ** is defined as follows:

// * **T₀ = 0**
// * **T₁ = 1**
// * **T₂ = 1**
// * **T₃ = 2**

// For **n ≥ 4**:

// **Tₙ = Tₙ₋₁ + Tₙ₋₂ + Tₙ₋₃ + Tₙ₋₄**

// Given an integer **n**, return the value of **Tₙ**.

// > **Note:** You must solve this problem using **Recursion (Top Down)**.

// ### Input Format

// A single integer `n` representing the position in the Tetranacci sequence.

// ### Constraints

// The result is guaranteed to fit within a **32-bit signed integer** (`2³¹ - 1`).

// ### Output Format

// Print a single integer, the value of **Tₙ**.

// ### Sample Input 0

// 4
// ```

// ### Sample Output 0

// 4
// ```

// ### Sample Input 1

// ```text
// 5
// ```

// ### Sample Output 1

// 8
// ```

// ### Example

// For `n = 4`:

// T4 = T3 + T2 + T1 + T0
//    = 2 + 1 + 1 + 0
//    = 4
// ```

// For `n = 5`:


// T5 = T4 + T3 + T2 + T1
//    = 4 + 2 + 1 + 1
//    = 8
// ```



#include <iostream>
using namespace std;

int tetranacci(int n)
{
    if (n == 0)
        return 0;
   
        else if (n == 1)
   
        return 1;
    else if (n == 2)
      
        return 1;
    else if (n == 3)
     
      return 2;
    else
        return tetranacci(n - 1) + tetranacci(n - 2) + tetranacci(n - 3) + tetranacci(n - 4);
}

int main()
{
    int n;
    cin >> n;

    cout << tetranacci(n);

    return 0;
}