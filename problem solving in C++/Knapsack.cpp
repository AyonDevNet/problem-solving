#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N, W;
        cin >> N >> W;

        vector<int> weight(N);
        vector<int> value(N);

        for (int i = 0; i < N; i++)
        {
            cin >> weight[i];
        }

        for (int i = 0; i < N; i++)
        {
            cin >> value[i];
        }

        // dp[w] = maximum value for backpack capacity w
        vector<long long> dp(W + 1, 0);

        for (int i = 0; i < N; i++)
        {
            // Go backwards because each item can only be used once
            for (int w = W; w >= weight[i]; w--)
            {
                dp[w] = max(dp[w],
                            dp[w - weight[i]] + value[i]);
            }
        }

        cout << dp[W] << endl;
    }

    return 0;
}