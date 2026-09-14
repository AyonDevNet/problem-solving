// Problem Statement

// Rezia is trapped in a 2D maze of  size, starting at position R, and her goal is to reach the exit marked by D. The maze contains blocks represented by #, and she can only traverse through cells marked with dots (.). As she need to escape as early as possible, we need to determine the path she will follow.

// Place an X in each cell representing Rezia's route to exit the maze. If there is no viable path for her to exit, leave the maze unchanged.

// Note: Rezia can move in four directions – right, left, up, and down. It is crucial to adhere to the specified order: attempting right first, then left, followed by up, and finally down.

// Input Format

// First line will contain  and .
// Next you will be given the 2D matrix.
// Constraints

// Output Format

// Output the final maze with marked X indicating the path she will follow.
// Sample Input 0

// 5 6
// ...D.#
// .##..#
// ....#.
// .R#...
// .#.##.
// Sample Output 0

// ...D.#
// .##X.#
// .XXX#.
// .R#...
// .#.##.
// Sample Input 1

// 5 6
// ...D.#
// .R...#
// ....#.
// ..#...
// .#.##.
// Sample Output 1

// ...D.#
// .RXX.#
// ....#.
// ..#...
// .#.##.
// Sample Input 2

// 5 6
// ...D.#
// .....#
// .##.#.
// .R#...
// .#.##.
// Sample Output 2

// ...D.#
// XXXX.#
// X##.#.
// XR#...
// .#.##.
// Sample Input 3

// 5 6
// ...D.#
// .....#
// ###.#.
// .R#...
// .#.##.
// Sample Output 3

// ...D.#
// .....#
// ###.#.
// .R#...
// .#.##.



#include <iostream>
#include <vector>
using namespace std;

int N, M;
vector<string> maze;

// Right, Left, Up, Down
int dx[] = {0, 0, -1, 1};
int dy[] = {1, -1, 0, 0};

bool dfs(int x, int y)
{
    // If we reached the destination
    if (maze[x][y] == 'D')
    {
        return true;
    }

    // Try 4 directions in the required order
    for (int i = 0; i < 4; i++)
    {
        int newX = x + dx[i];
        int newY = y + dy[i];

        // Check if inside the maze
        if (newX >= 0 && newX < N &&
            newY >= 0 && newY < M)
        {
            // We can move only to '.' or 'D'
            if (maze[newX][newY] == '.' ||
                maze[newX][newY] == 'D')
            {
                // Mark this cell as part of the current path
                if (maze[newX][newY] == '.')
                {
                    maze[newX][newY] = 'X';
                }

                // Continue searching
                if (dfs(newX, newY))
                {
                    return true;
                }

                // This path was a dead end
                // Change X back to .
                if (maze[newX][newY] == 'X')
                {
                    maze[newX][newY] = '.';
                }
            }
        }
    }

    return false;
}

int main()
{
    cin >> N >> M;

    maze.resize(N);

    // Read the maze
    for (int i = 0; i < N; i++)
    {
        cin >> maze[i];
    }

    // Find Rezia's starting position
    int startX, startY;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (maze[i][j] == 'R')
            {
                startX = i;
                startY = j;
            }
        }
    }

    // Start DFS
    dfs(startX, startY);

    // Print the maze
    for (int i = 0; i < N; i++)
    {
        cout << maze[i] << endl;
    }

    return 0;
}