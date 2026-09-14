#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, E;

    // Input number of vertices and edges
    cin >> N >> E;

    vector<int> eu(E);
    vector<int> ev(E);
    vector<long long> ew(E);

    // Input all edges
    for (int i = 0; i < E; i++)
    {
        cin >> eu[i] >> ev[i] >> ew[i];
    }

    int S;

    // Input source vertex
    cin >> S;

    const long long INF = LLONG_MAX / 2;

    vector<long long> dist(N + 1, INF);

    // Distance from source to itself is 0
    dist[S] = 0;

    // Bellman-Ford Algorithm
    // Relax all edges N-1 times
    for (int i = 1; i <= N - 1; i++)
    {
        bool updated = false;

        for (int j = 0; j < E; j++)
        {
            int u = eu[j];
            int v = ev[j];
            long long w = ew[j];

            if (dist[u] != INF &&
                dist[u] + w < dist[v])
            {
                dist[v] = dist[u] + w;
                updated = true;
            }
        }

        // Stop early if no distance was updated
        if (!updated)
        {
            break;
        }
    }

    // Check for negative weight cycle
    bool negCycle = false;

    for (int j = 0; j < E; j++)
    {
        int u = eu[j];
        int v = ev[j];
        long long w = ew[j];

        if (dist[u] != INF &&
            dist[u] + w < dist[v])
        {
            negCycle = true;
            break;
        }
    }

    int T;

    // Number of destinations to query
    cin >> T;

    vector<int> D(T);

    for (int i = 0; i < T; i++)
    {
        cin >> D[i];
    }

    // If negative cycle exists
    if (negCycle)
    {
        cout << "Negative Cycle Detected" << endl;
        return 0;
    }

    // Print shortest distance for each destination
    for (int i = 0; i < T; i++)
    {
        int d = D[i];

        if (dist[d] >= INF)
        {
            cout << "Not Possible" << endl;
        }
        else
        {
            cout << dist[d] << endl;
        }
    }

    return 0;
}