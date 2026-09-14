// Problem Statement

// You will be given a 2D matrix of size N x M which will contain only '.' and '-'.
// Here, '.' means you can go in that cell and '-' means you can't go in that cell.

// You can move in only 4 directions:
// Up, Down, Left and Right.

// You will be given the indexes of two cells - (Si, Sj) and (Di, Dj).
// You need to tell if these two cells are in the same component or not.

// Same component means you can go from (Si, Sj) to (Di, Dj) by moving only through '.' cells.

// Input Format

// - First line will contain N and M.
// - Next N lines will contain the 2D matrix.
// - Next line will contain Si and Sj.
// - Last line will contain Di and Dj.

// Constraints

// 1 <= N, M <= 1000
// 0 <= Si, Di < N
// 0 <= Sj, Dj < M

// Output Format

// Output "YES" if the two cells are in the same component.
// Otherwise, output "NO".


// Sample Input 0

// 5 4
// ..-.
// ---.
// ..-.
// --..
// ....
// 0 1
// 3 2


// Sample Output 0

// NO


// Sample Input 1

// 5 4
// ....
// ---.
// ..-.
// --..
// ....
// 0 1
// 3 2


// Sample Output 1

// YES




#include <iostream>
#include <vector>
using namespace std;

int N, M;
vector<string> matrix;
vector<vector<bool>> visited;

// 4 possible directions
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

void dfs(int x, int y)
{
    // Mark current cell as visited
    visited[x][y] = true;

    // Try all 4 directions
    for (int i = 0; i < 4; i++)
    {
        int newX = x + dx[i];
        int newY = y + dy[i];

        // Check if the new position is inside the matrix
        if (newX >= 0 && newX < N &&
            newY >= 0 && newY < M)
        {
            // We can only move to '.' cells
            // and cells that we haven't visited
            if (matrix[newX][newY] == '.' &&
                visited[newX][newY] == false)
            {
                dfs(newX, newY);
            }
        }
    }
}

int main()
{
    cin >> N >> M;

    // Read the matrix
    matrix.resize(N);

    for (int i = 0; i < N; i++)
    {
        cin >> matrix[i];
    }

    int Si, Sj;
    int Di, Dj;

    // Starting cell
    cin >> Si >> Sj;

    // Destination cell
    cin >> Di >> Dj;

    // Initially, no cell is visited
    visited.resize(N, vector<bool>(M, false));

    // If either starting or destination is blocked
    if (matrix[Si][Sj] == '-' || matrix[Di][Dj] == '-')
    {
        cout << "NO" << endl;
        return 0;
    }

    // Start DFS from the starting cell
    dfs(Si, Sj);

    // Check if destination was reached
    if (visited[Di][Dj])
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}