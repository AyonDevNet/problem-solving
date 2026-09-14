#include <iostream>
#include <vector>
#include <climits>

using namespace std;

const int MAXN = 105;
const long long INF = 1000000000000000LL;

long long dist[MAXN][MAXN];

int main()
{
    int N, E;

    cin >> N >> E;

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            if (i == j)
            {
                dist[i][j] = 0;
            }
            else
            {
                dist[i][j] = INF;
            }
        }
    }

    // Read edges
    for (int i = 0; i < E; i++)
    {
        int a, b;
        long long w;

        cin >> a >> b >> w;

        
        if (w < dist[a][b])
        {
            dist[a][b] = w;
        }
    }

    for (int k = 1; k <= N; k++)
    {
        for (int i = 1; i <= N; i++)
        {
            if (dist[i][k] >= INF)
            {
                continue;
            }

            for (int j = 1; j <= N; j++)
            {
                if (dist[k][j] >= INF)
                {
                    continue;
                }

                long long candidate = dist[i][k] + dist[k][j];

                if (candidate < dist[i][j])
                {
                    dist[i][j] = candidate;
                }
            }
        }
    }

    int Q;

    cin >> Q;

    for (int i = 0; i < Q; i++)
    {
        int x, y;

        cin >> x >> y;

        if (dist[x][y] >= INF)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << dist[x][y] << endl;
        }
    }

    return 0;
}