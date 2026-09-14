#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, M;

vector<string> matrix;
vector<vector<bool>> visited;

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

int dfs(int x, int y)
{
    visited[x][y] = true;

    int area = 1;

    for (int i = 0; i < 4; i++)
    {
        int newX = x + dx[i];

        int newY = y + dy[i];

        if (newX >= 0 && newX < N &&

            newY >= 0 && newY < M)
        {
            if (matrix[newX][newY] == '.' &&

                visited[newX][newY] == false)
            {
                area += dfs(newX, newY);
            }
        }
    }

    return area;
}

int main()
{
    cin >> N >> M;

    matrix.resize(N);

   
    for (int i = 0; i < N; i++)
    {
        cin >> matrix[i];
    }

    visited.resize(N, vector<bool>(M, false));

    int minimumArea = 1000000000;

    bool foundComponent = false;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (matrix[i][j] == '.' &&
                
                visited[i][j] == false)
            {
                int area = dfs(i, j);

                minimumArea = min(minimumArea, area);

                foundComponent = true;
            }
        }
    }

    if (foundComponent == false)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << minimumArea << endl;
    }

    return 0;
}