#include <bits/stdc++.h>
#define fastIo() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define F first
#define S second
#define PB push_back
using namespace std;
typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<vi> vii;
typedef vector<vector<pi>> vvpi;

#include <bits/stdc++.h>
using namespace std;

// BeginCodeSnip{DSU}
class DisjointSets {


  public:
    vector<int> parents;
	vector<int> sizes;
	DisjointSets(int size) : parents(size), sizes(size, 1) {
		for (int i = 0; i < size; i++) { parents[i] = i; }
	}

	/** @return the "representative" node in x's component */
	int find(int x) { return parents[x] == x ? x : (parents[x] = find(parents[x])); }
    
	/** @return whether the merge changed connectivity */
	bool unite(int x, int y) {
		int x_root = find(x);
		int y_root = find(y);
		if (x_root == y_root) { return false; }

		if (sizes[x_root] < sizes[y_root]) { swap(x_root, y_root); }
		sizes[x_root] += sizes[y_root];
		parents[y_root] = x_root;
		return true;
	}

	/** @return whether x and y are in the same connected component */
	bool connected(int x, int y) { return find(x) == find(y); }
};
// EndCodeSnip

void solve() {
    int node_num, query_num;
	cin >> node_num >> query_num;
    
	DisjointSets dsu(node_num);
    int maxSize = 1, componentes = node_num;
	for (int i = 0; i < query_num; i++) {
		int type, u, v;
		cin >> u >> v;
        if(!dsu.connected(u-1, v-1)) {
            componentes--;
        }
		dsu.unite(u-1, v-1);
        maxSize = max(maxSize, dsu.sizes[dsu.find(u-1)]);
        cout << componentes << " " << maxSize << '\n';
	}
	
}

int main() {
    fastIo();
    solve();
}