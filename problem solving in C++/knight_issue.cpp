#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main()
{
    int T;
    cin >> T;

    // Knight can move in 8 directions
    int dx[] = {-2, -2, -1, -1, 1, 1, 2, 2};
    int dy[] = {-1, 1, -2, 2, -2, 2, -1, 1};

    while (T--)
    {
        int N, M;
        cin >> N >> M;

        int Ki, Kj;
        cin >> Ki >> Kj;

        int Qi, Qj;
        cin >> Qi >> Qj;

        // distance[i][j] = number of moves needed to reach this cell
        // -1 means we haven't visited it
        vector<vector<int>> distance(N, vector<int>(M, -1));

        queue<pair<int, int>> q;

        // Start from knight's position
        q.push({Ki, Kj});
        distance[Ki][Kj] = 0;

        while (!q.empty())
        {
            // Get current position
            int x = q.front().first;
            int y = q.front().second;

            q.pop();

            // Try all 8 knight moves
            for (int i = 0; i < 8; i++)
            {
                int newX = x + dx[i];
                int newY = y + dy[i];

                // Check if the new position is inside the board
                if (newX >= 0 && newX < N &&
                    newY >= 0 && newY < M)
                {
                    // If we haven't visited this cell
                    if (distance[newX][newY] == -1)
                    {
                        distance[newX][newY] =
                            distance[x][y] + 1;

                        q.push({newX, newY});
                    }
                }
            }
        }

        // Print answer
        cout << distance[Qi][Qj] << endl;
    }

    return 0;
}