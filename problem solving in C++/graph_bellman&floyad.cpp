#include <iostream>
#include <vector>

using namespace std;

class DSU
{
private:
    vector<int> parent;
    vector<int> rank;

public:
    DSU(int n)
    {
        parent.resize(n + 1);
        rank.resize(n + 1, 0);

        for (int i = 1; i <= n; i++)
        {
            parent[i] = i;
        }
    }

    int find(int x)
    {
        if (parent[x] != x)
        {
            parent[x] = find(parent[x]);
        }

        return parent[x];
    }

    bool unite(int a, int b)
    {
        int rootA = find(a);
        
        int rootB = find(b);

        if (rootA == rootB)
        {
            return false;
        }

        if (rank[rootA] < rank[rootB])
        {
            parent[rootA] = rootB;
        }

        else if (rank[rootA] > rank[rootB])
        {

            parent[rootB] = rootA;
        }
        else
        {
            parent[rootB] = rootA;
            rank[rootA]++;
        }

        return true;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, E;
    cin >> N >> E;

    DSU dsu(N);

    int cycleEdges = 0;

    for (int i = 0; i < E; i++)
    {
        int u, v;
        
        cin >> u >> v;

        if (!dsu.unite(u, v))
        {
           
            cycleEdges++;
        }
    }

    cout << cycleEdges << '\n';

    return 0;
}